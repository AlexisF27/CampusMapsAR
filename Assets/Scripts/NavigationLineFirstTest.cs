using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.XR.ARFoundation;

public class NavigationLineFirstTest : MonoBehaviour
{
    [SerializeField] 
    private Camera topDownCamera;
    [SerializeField] 
    
    private GameObject navTargetObject;
    private NavMeshPath path;
    private LineRenderer line;
    private bool lineTogle = false;



    private void Start()
     {
        path = new NavMeshPath();
        line = transform.GetComponent<LineRenderer>();
     }

    private void Update(){
        if ((Input.touchCount > 0 ) && (Input.GetTouch(0).phase == TouchPhase.Began))
        {
            lineTogle = !lineTogle;
        }
        if(lineTogle)
        {
            NavMesh.CalculatePath(transform.position,navTargetObject.transform.position,NavMesh.AllAreas,path);
            line.positionCount = path.corners.Length;
            line.SetPositions(path.corners);
            line.enabled = true;
        }
     }
}

