using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawPath : MonoBehaviour {
    public static Vector3[] path = new Vector3[0];

    private LineRenderer lr;

    void Start()
    {
        lr = GetComponent<LineRenderer>();
    }

    void Update() {
        if (path != null && path.Length > 1)
        {
            lr.positionCount = path.Length;
            for (int i = 0; i < path.Length; i++)
            {
                lr.SetPosition(i, path[i]);
            }
        }
    }
}
