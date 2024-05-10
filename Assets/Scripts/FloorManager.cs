using System;
using System.Collections.Generic;
using UnityEngine;
public class FloorManager : MonoBehaviour {
    public static FloorManager instance;
    
    //[SerializeField] private GameObject piso0;
    //[SerializeField] private GameObject piso1;
    
    [SerializeField] private GameObject[] piso = new GameObject[5];

    private Renderer[] piso0WallsAndStairs;
    private Renderer[] piso05WallsAndStairs;
    private Renderer[] piso1WallsAndStairs;
    private Renderer[] piso15WallsAndStairs;
    private Renderer[] piso2WallsAndStairs;

    public int visibleFloor { private set; get; }

    private void Awake() {
        instance = this;
        piso0WallsAndStairs = piso[0].GetComponentsInChildren<Renderer>();
        piso05WallsAndStairs = piso[1].GetComponentsInChildren<Renderer>();
        piso1WallsAndStairs = piso[2].GetComponentsInChildren<Renderer>();
        piso15WallsAndStairs = piso[3].GetComponentsInChildren<Renderer>();
        piso2WallsAndStairs = piso[4].GetComponentsInChildren<Renderer>();
    }

    private void Start() {
        visibleFloor = 0;
        
        foreach (var r in piso05WallsAndStairs) {
            r.enabled = false;
        }
        foreach (var r in piso1WallsAndStairs) {
            r.enabled = false;
        }
        foreach (var r in piso15WallsAndStairs) {
            r.enabled = false;
        }
        foreach (var r in piso2WallsAndStairs) {
            r.enabled = false;
        }
    }

    //https://answers.unity.com/questions/410875/how-can-i-hide-a-gameobject-without-activefalse.html
    public void ShowFloor(int floor) {
        if (floor == 0) {
            visibleFloor = 0;
            foreach (var r in piso0WallsAndStairs) {
                r.enabled = true;
            }
            foreach (var r in piso05WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso1WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso15WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso2WallsAndStairs) {
                r.enabled = false;
            }
        }
        if (floor == 1)  {
            visibleFloor = 1;
            foreach (var r in piso0WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso05WallsAndStairs) {
                r.enabled = true;
            }
            foreach (var r in piso1WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso15WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso2WallsAndStairs) {
                r.enabled = false;
            }
        }
        if (floor == 2)  {
            visibleFloor = 2;
            foreach (var r in piso0WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso05WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso1WallsAndStairs) {
                r.enabled = true;
            }
            foreach (var r in piso15WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso2WallsAndStairs) {
                r.enabled = false;
            }
        }
        if (floor == 3)  {
            visibleFloor = 3;
            foreach (var r in piso0WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso05WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso1WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso15WallsAndStairs) {
                r.enabled = true;
            }
            foreach (var r in piso2WallsAndStairs) {
                r.enabled = false;
            }
        }
        if (floor == 4)  {
            visibleFloor = 4;
            foreach (var r in piso0WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso05WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso1WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso15WallsAndStairs) {
                r.enabled = false;
            }
            foreach (var r in piso2WallsAndStairs) {
                r.enabled = true;
            }
        }
    }
}