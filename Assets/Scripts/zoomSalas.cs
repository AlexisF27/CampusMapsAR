using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class zoomSalas : MonoBehaviour
{
    private Camera _camera;
    private TextMeshPro textoSala;
    
    public String refEspaço;
    public String nomeCompleto;
    
    void Start()
    {
        textoSala = GetComponent<TextMeshPro>();
        nomeCompleto = textoSala.text;
        _camera = GameObject.Find("Main Camera").GetComponent<Camera>();
    }

    // Update is called once per frame
    public float MapValue(float a0, float a1, float b0, float b1, float a)
    {
        return b0 + (b1 - b0) * ((a-a0)/(a1-a0));
    }
    void Update()
    {
       //TODO: METER EM TODAS AS SALAS
       // static double Map(double a1, double a2, double b1, double b2,)
        if (_camera.orthographicSize > 30)
        {
            //textoSala.enabled = false;
            textoSala.text = refEspaço;
        }
        else if(_camera.orthographicSize < 30 && _camera.orthographicSize > 15)
        {
            //Debug.Log(_camera.orthographicSize);
            //textoSala.enabled = true;
            textoSala.text = nomeCompleto;
            //textoSala.fontSize = 11.2f;
            textoSala.fontSize = MapValue(15f, 29f, 5.6f, 11.2f,  _camera.orthographicSize);
            
            //Debug.Log(textoSala.fontSize);

        }else if (_camera.orthographicSize < 15)
        {
            textoSala.fontSize = 5.6f;
        }
    }
}
