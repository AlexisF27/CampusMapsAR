using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.Serialization;

public class Pathfinding : MonoBehaviour {
	
	PathRequestManager requestManager;
	[FormerlySerializedAs("grid")] public A_Grid currentGrid; //TODO: RENAME to currentGrid

	public A_Grid[] grids;
	
	void Awake() {
		requestManager = GetComponent<PathRequestManager>();
		//grid = GetComponent<A_Grid>();
	}

	public void StartFindPath(Vector3 startPos, Vector3 targetPos) {
		StartCoroutine(FindPath(startPos,targetPos));
	}
	
	IEnumerator FindPath(Vector3 startPos, Vector3 targetPos) {

		Vector3[] waypoints = new Vector3[0];
		bool pathSuccess = false;
		
		Node startNode = currentGrid.NodeFromWorldPoint(startPos);
		Node targetNode = currentGrid.NodeFromWorldPoint(targetPos);

		if (startNode.walkable && targetNode.walkable) {
			Heap<Node> openSet = new Heap<Node>(currentGrid.MaxSize);
			HashSet<Node> closedSet = new HashSet<Node>();
			openSet.Add(startNode);
			
			while (openSet.Count > 0) {
				Node currentNode = openSet.RemoveFirst();
				closedSet.Add(currentNode);
				
				if (currentNode == targetNode) {
					pathSuccess = true;
					break;
				}
				
				foreach (Node neighbour in currentGrid.GetNeighbours(currentNode)) {
					if (!neighbour.walkable || closedSet.Contains(neighbour)) {
						continue;
					}
					
					int newMovementCostToNeighbour = currentNode.gCost + GetDistance(currentNode, neighbour);
					if (newMovementCostToNeighbour < neighbour.gCost || !openSet.Contains(neighbour)) {
						neighbour.gCost = newMovementCostToNeighbour;
						neighbour.hCost = GetDistance(neighbour, targetNode);
						neighbour.parent = currentNode;
						
						if (!openSet.Contains(neighbour))
							openSet.Add(neighbour);
						else {
							openSet.UpdateItem(neighbour);
						}
					}
				}
			}
		}
		yield return null;
		if (pathSuccess) {
			waypoints = RetracePath(startNode,targetNode);
		}

		requestManager.FinishedProcessingPath(waypoints,pathSuccess);
		
	}
	
	A_Grid findMyGrid(Vector3 position) {
		A_Grid currentGrid = this.currentGrid;

		if (position.y == 0 || position.y == 1) {
			currentGrid = grids[0];
		}
		
		if (position.y == 4 || position.y == 7) {
			currentGrid = grids[1];
		}
								//Magic Number
		if (position.y == 2 || position.y == 10 || position.y == 13) {
			currentGrid = grids[2];
		}
		
		if (position.y == 19 || position.y == 3) {
			currentGrid = grids[3];
		}
        
		if (position.y == 22 || position.y == 25 || position.y == 6) { //TODO foi Só para testar
			currentGrid = grids[4];
		}

		return currentGrid;
	}
	
	
	
	public bool IsPathPossible(Vector3 startPos, Vector3 targetPos) {
		//Debug.Log(startPos);
		//Debug.Log(targetPos);
		
		bool pathSuccess = false;
		
		A_Grid startNodeGrid = findMyGrid(startPos);
		A_Grid targetNodeGrid = findMyGrid(targetPos);

		if (startNodeGrid != targetNodeGrid) {
			//Debug.Log("False -> grids diferentes");
			return false;
		}

		Node startNode = startNodeGrid.NodeFromWorldPoint(startPos);
		Node targetNode = targetNodeGrid.NodeFromWorldPoint(targetPos);
		//Node startNode = grid.NodeFromWorldPoint(startPos);
		//Node targetNode = grid.NodeFromWorldPoint(targetPos);

		if (startNode.walkable && targetNode.walkable) {
			Heap<Node> openSet = new Heap<Node>(currentGrid.MaxSize);
			HashSet<Node> closedSet = new HashSet<Node>();
			openSet.Add(startNode);
			
			while (openSet.Count > 0) {
				Node currentNode = openSet.RemoveFirst();
				closedSet.Add(currentNode);
				
				if (currentNode == targetNode) {
					pathSuccess = true;
					break;
				}
				
				foreach (Node neighbour in startNodeGrid.GetNeighbours(currentNode)) {
					if (!neighbour.walkable || closedSet.Contains(neighbour)) {
						continue;
					}
					
					int newMovementCostToNeighbour = currentNode.gCost + GetDistance(currentNode, neighbour);
					if (newMovementCostToNeighbour < neighbour.gCost || !openSet.Contains(neighbour)) {
						neighbour.gCost = newMovementCostToNeighbour;
						neighbour.hCost = GetDistance(neighbour, targetNode);
						neighbour.parent = currentNode;
						
						if (!openSet.Contains(neighbour))
							openSet.Add(neighbour);
						else {
							openSet.UpdateItem(neighbour);
						}
					}
				}
			}
		}

		return pathSuccess;
	}
	
	Vector3[] RetracePath(Node startNode, Node endNode) {
		List<Node> path = new List<Node>();
		Node currentNode = endNode;
		
		while (currentNode != startNode) {
			path.Add(currentNode);
			currentNode = currentNode.parent;
		}
		Vector3[] waypoints = SimplifyPath(path);
		Array.Reverse(waypoints);
		return waypoints;
		
	}
	
	Vector3[] SimplifyPath(List<Node> path) {
		List<Vector3> waypoints = new List<Vector3>();
		Vector2 directionOld = Vector2.zero;
		
		for (int i = 1; i < path.Count; i ++) {
			Vector2 directionNew = new Vector2(path[i-1].gridX - path[i].gridX,path[i-1].gridY - path[i].gridY);
			if (directionNew != directionOld) {
				waypoints.Add(path[i].worldPosition);
			}
			directionOld = directionNew;
		}
		return waypoints.ToArray();
	}
	
	int GetDistance(Node nodeA, Node nodeB) {
		int dstX = Mathf.Abs(nodeA.gridX - nodeB.gridX);
		int dstY = Mathf.Abs(nodeA.gridY - nodeB.gridY);

		if (dstX > dstY)
			return 14*dstY + 10* (dstX-dstY);
		return 14*dstX + 10 * (dstY-dstX);
		
	}
}