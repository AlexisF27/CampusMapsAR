using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineController : MonoBehaviour
{
    private LineRenderer lr;
    private Transform[] points;
     private Vector3[] targetPoints;

    private void Awake()
    {
        lr = GetComponent<LineRenderer>();
    }

    public void SetUpLine(Transform[] points)
    {
        lr.positionCount = points.Length;
        this.points = points;
    }

     public void SetUpLine(Vector3[] targetPoints)
     {
        lr.positionCount = targetPoints.Length;
        this.targetPoints = targetPoints;
    }

    private void Update()
    {
        for (int i = 0; i < points.Length; i++)
        {
            lr.SetPosition(i, points[i].position - new Vector3(0,0.7f,0));
        }
        // if(targetPoints != null && lr.positionCount != 0){
        //     for (int i = 0; i < targetPoints.Length; i++)
        //     {
        //         lr.SetPosition(i, targetPoints[i]);
        //     }
        // }
    }
    public void DisableLine(){
        lr.positionCount = 0;
        Debug.Log("haoifhewiofjweiofwe");
    }
}
