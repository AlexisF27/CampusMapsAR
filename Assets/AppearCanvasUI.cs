using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AppearCanvasUI : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject[] panels;
    public GameObject expirience;

    public void AppearPanel()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
