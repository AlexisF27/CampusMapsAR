using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ImageTracking : MonoBehaviour
{
    // [SerializeField] private GameObject[] arObjectsToPlace;
    [SerializeField] private ARSession session;
    [SerializeField] private ARSessionOrigin sessionOrigin;
    // [SerializeField] private Dictionary<string, GameObject> arObjects = new Dictionary<string, GameObject>();
    // [SerializeField] private GameObject positionObject;

    private ARTrackedImageManager arTrackedImageManager;

    private void Awake()
    {
        arTrackedImageManager = FindObjectOfType<ARTrackedImageManager>();
        // foreach (GameObject arObject in arObjectsToPlace)
        // {
        //     GameObject newArObject = Instantiate(arObject, Vector3.zero, Quaternion.identity);
        //     newArObject.name = arObject.name;
        //     arObjects.Add(arObject.name, newArObject);
        // }
    }

    // private void Update()
    // {
    //     if (Input.GetKeyDown(KeyCode.Space))
    //     {
    //         UpdateARSession();
    //     }
    // }

    void OnEnable()
    {
        arTrackedImageManager.trackedImagesChanged += onTrackedImagesChanged;
    }

    void OnDisable()
    {
        arTrackedImageManager.trackedImagesChanged -= onTrackedImagesChanged;
    }

    void onTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            UpdateARSession(trackedImage);
            // if (Input.touchCount != 0)
            // {
            //     UpdateARSession();
            // }
        }
        foreach (ARTrackedImage trackedImage in eventArgs.updated)
        {
            UpdateARSession(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.removed)
        {
            // arObjects[trackedImage.name].SetActive(false);
        }
    }

    private void UpdateARSession(ARTrackedImage trackedImage)
    {
        string name = "ClassroomPoints/" + trackedImage.referenceImage.name;
        Debug.Log(name);
        GameObject positionObject = transform.Find(name).gameObject;
        // Transform positionObject = transform.Find(name);
        // Vector3 position = trackedImage.transform.position;
        // GameObject prefab = arObjects[name];
        // prefab.transform.position = position;
        // prefab.SetActive(true);
        // if (Input.touchCount != 0)
        // {
            session.Reset();
            sessionOrigin.transform.position = positionObject.transform.position + new Vector3(0,0.82f,0);
            sessionOrigin.transform.rotation = positionObject.transform.rotation;
        // }
    }

    private void UpdateARSession()
    {
        string name = "ClassroomPoints/" + "S06";
        Debug.Log(name);
        GameObject positionObject = transform.Find(name).gameObject;

        // session.Reset();
        sessionOrigin.transform.position = positionObject.transform.position + new Vector3(0,0.82f,0);
        sessionOrigin.transform.rotation = positionObject.transform.rotation;
    }
}
