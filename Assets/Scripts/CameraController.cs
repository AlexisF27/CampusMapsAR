using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Rendering;

public class CameraController : MonoBehaviour {
    private Camera _camera;

    [SerializeField] float cameraZoomSpeed = 1;
    [SerializeField] float minCameraZoom = 10;
    [SerializeField] float maxCameraZoom = 100;
    [SerializeField] MouseOverScriptUITest _uiTest;
    private float cameraZoom;

    // Start is called before the first frame update
    void Start() {
        _camera = GetComponent<Camera>();
    }

    //private float deltaMouse = 0f;
    //[SerializeField] float mouseSensitivity = 0.01f;
    
    public float dragSpeed = 5;
    private Vector3 dragOrigin;
    private Vector3 dragEnd;
    private Vector3 dragCompare;
    private bool clicado = false;
    
    // Update is called once per frame
    void Update() {
        if (_uiTest.isoverUI && Input.GetMouseButtonDown(0))
        {
            clicado = true;
        };
        if (!_uiTest.isoverUI && Input.GetMouseButtonUp(0))
        {
            clicado = false;
        }
        if (!_uiTest.isoverUI)
        {
            //https://forum.unity.com/threads/click-drag-camera-movement.39513/

            #region CameraZoom

            cameraZoom = _camera.orthographicSize;
            cameraZoom -= Input.mouseScrollDelta.y * cameraZoomSpeed;
            _camera.orthographicSize = Mathf.Clamp(cameraZoom, minCameraZoom, maxCameraZoom);

            #endregion

            if (Input.GetMouseButtonDown(0))
            {
                dragOrigin = Input.mousePosition;
                return;

            }

            if (Input.GetMouseButton(0))
            {
                dragCompare = Input.mousePosition;
            }

            if (!Input.GetMouseButton(0)) return;
            
            if (dragCompare == dragEnd) return;

            //Debug.Log(dragOrigin);
            if (clicado == false)
            {
                Vector3 pos = Camera.main.ScreenToViewportPoint(dragOrigin - Input.mousePosition);
                Vector3 move = new Vector3(pos.x * dragSpeed, 0, pos.y * dragSpeed);
                dragEnd = Input.mousePosition;
                transform.Translate(move, Space.World);
            }
        }
    }
}