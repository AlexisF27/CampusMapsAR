using System;
using UnityEngine;
using System.Collections;

public class Unit : MonoBehaviour {


    public Transform target;
    [SerializeField] float speed = 50;
    Vector3[] path;
    int targetIndex;

    //PathRequestManager pathRequestManager0;
    //PathRequestManager pathRequestManager1;

    private TrailRenderer tr;

    private bool finishedPath = false;
    public int floor = 0;

    void Awake() {
        //pathRequestManager0 = GameObject.Find("PathRequestManager").GetComponent<PathRequestManager>();
        //pathRequestManager1 = GameObject.Find("A* Piso 1").GetComponent<PathRequestManager>();

        tr = GetComponent<TrailRenderer>();
    }
    
    /*void Start() {
        PathRequestManager.RequestPath(transform.position,target.position, OnPathFound);
    }*/

    private void Update() {
        if (finishedPath) {
            if (FloorManager.instance.visibleFloor != this.floor) {
                tr.enabled = false;
            }
            else {
                tr.enabled = true;
            }
        }
    }

    public void GotoPosition() {
        PathRequestManager.RequestPath(transform.position,target.position, OnPathFound);
    }

    public void OnPathFound(Vector3[] newPath, bool pathSuccessful) {
        if (pathSuccessful) {
            path = newPath;
            targetIndex = 0;
            StopCoroutine("FollowPath");
            StartCoroutine("FollowPath");
        }
    }

    IEnumerator FollowPath() {
        Vector3 currentWaypoint = path[0];
        while (true) {
            if (transform.position == currentWaypoint) {
                targetIndex ++;
                if (targetIndex >= path.Length) {
                    finishedPath = true; //When Path Finishes
                    yield break;
                }
                currentWaypoint = path[targetIndex];
            }

            transform.position = Vector3.MoveTowards(transform.position,currentWaypoint,speed * Time.deltaTime);
            yield return null;
        }
    }

    public void OnDrawGizmos() {
        if (path != null) {
            for (int i = targetIndex; i < path.Length; i ++) {
                Gizmos.color = Color.black;
                Gizmos.DrawCube(path[i], Vector3.one);

                if (i == targetIndex) {
                    Gizmos.DrawLine(transform.position, path[i]);
                }
                else {
                    Gizmos.DrawLine(path[i-1],path[i]);
                }
            }
        }
    }
} 