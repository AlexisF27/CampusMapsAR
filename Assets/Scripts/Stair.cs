using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UIElements;

public class Stair : MonoBehaviour {

    public Transform pointStart;
    public int startFloor;
    public Transform pointEnd;
    public int endFloor;
    
    void Reset() {
        pointStart = transform;
    }

    void OnEnable() {
        pointStart = transform;
    }
}
