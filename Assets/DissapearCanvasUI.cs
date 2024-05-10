using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DissapearCanvasUI : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject panels;
    public GameObject experience;

    public void AppearTutorial()
    {
        experience.SetActive(false);
        panels.SetActive(true);
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);        
    }

    public void DissaperTutorial()
    {
        panels.SetActive(false);
        experience.SetActive(true);
    }
}

