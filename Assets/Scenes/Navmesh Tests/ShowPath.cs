using System.Collections;
using UnityEngine;
using UnityEngine.AI;

public class ShowPath : MonoBehaviour {

    public LineRenderer line; //to hold the line Renderer
    public Transform target; //to hold the transform of the target
    public NavMeshAgent agent; //to hold the agent of this gameObject

    void Start() {
        line = GetComponent<LineRenderer>(); //get the line renderer
        agent = GetComponent<NavMeshAgent>(); //get the agent
        getPath();
    }

    void getPath() {
        line.SetPosition(0, transform.position); //set the line's origin

        agent.SetDestination(target.position); //create the path

        //yield WaitForEndOfFrame(); //wait for the path to generate

        DrawPath(agent.path);

        //agent.Stop();//add this if you don't want to move the agent

        agent.isStopped = true;
    }

    void DrawPath(NavMeshPath path) {
        if (path.corners.Length < 2) //if the path has 1 or no corners, there is no need
            return;

        //line.SetVertexCount(path.corners.Length); //set the array of positions to the amount of corners

        line.positionCount = path.corners.Length;

        for (var i = 1; i < path.corners.Length; i++) {
            line.SetPosition(i, path.corners[i]); //go through each corner and set that to the line renderer's position
        }
    }
}
