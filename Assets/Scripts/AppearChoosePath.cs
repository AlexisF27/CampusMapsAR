using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppearChoosePath : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject experience;
    public GameObject choosePath;
    public void AppearPanel()
    {
        experience.SetActive(false);
        choosePath.SetActive(true);
    }
    public void DissapearPanel()
    {
        experience.SetActive(true);
        choosePath.SetActive(false);
    }
}
