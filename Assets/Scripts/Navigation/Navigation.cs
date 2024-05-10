using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Navigation : MonoBehaviour
{
    private NavMeshAgent navMeshAgent;
    private int i=0;
    public static Vector3[] targetPoints = null; //targetPoints are the positions used to make the line
    private  Transform[] spawnedObjects; //objects that are created to guide the path
    [SerializeField] private Transform[] points; //static points used to test, should be same as targetPoints
    [SerializeField] private Transform objectToSpawn; //this is the blender model
    [SerializeField] private NavMeshAgent agentToSpawn; //blender model with agent component so it could walk
    [SerializeField] private LineController line;


    [SerializeField] private GameObject message;

    private void Awake()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
    }

    private void Update()
    {        
        if (points != null){ 
            // targetPoints = Player.targetPositions;
            line.SetUpLine(points);
            Tap();
            if(Vector3.Distance(navMeshAgent.transform.position, points[points.Length-1].position) < 4)
            {
                DestinationMessage();
            }else{
                message.SetActive(false);
            }
        }
        
        // Follow();
    }

    public void ResetApplication(){
        if(points != null){
            if (spawnedObjects[i-1] != null)
            {
                Destroy(spawnedObjects[i-1].gameObject);
            }
            points = null;
            line.DisableLine();
            i=0;
            message.SetActive(false);
        }
    }

    private void Tap()
    {
        if(i==0)
        {
            navMeshAgent.destination = points[i].position - new Vector3(0,1f,0);
            spawnedObjects = new Transform[points.Length];
            Vector3 rot = navMeshAgent.transform.rotation.eulerAngles;
            rot = new Vector3(rot.x, rot.y +180, rot.z);
            spawnedObjects[i] = Instantiate(objectToSpawn, points[i].position - new Vector3(0,1f,0), Quaternion.Euler(rot));
            i++;
        }
        if(i<points.Length & 
            (Vector3.Distance(navMeshAgent.transform.position, points[i-1].position) < 3) & 
            (Input.touchCount > 0 || Input.GetKeyDown(KeyCode.Space)))
        {
        //    if(Input.GetTouch(0).phase == TouchPhase.Began){
                navMeshAgent.destination = points[i].position - new Vector3(0,1f,0);
                Vector3 rot = navMeshAgent.transform.rotation.eulerAngles;
                rot = new Vector3(rot.x, rot.y +180, rot.z);
                Destroy(spawnedObjects[i - 1].gameObject);
                spawnedObjects[i] = Instantiate(objectToSpawn, points[i].position - new Vector3(0,1f,0), Quaternion.Euler(rot));
                i++;
        //    }            
        }
    }

    private void DestinationMessage(){
        Vector3 rot = navMeshAgent.transform.rotation.eulerAngles;
        rot = new Vector3(rot.x, rot.y, rot.z);
        if (spawnedObjects[points.Length-1] != null)
        {
            Destroy(spawnedObjects[points.Length-1].gameObject);
        }
        message.transform.position = points[points.Length-1].position + new Vector3(0,1.3f,0);
        message.transform.rotation = Quaternion.Euler(rot);
        message.SetActive(true);
    }

    private void Follow()
    {
        if(i==0)
        {           
            agentToSpawn.destination = points[i].position - new Vector3(0,0.2f,0);
            //TESTING
            // navMeshAgent.destination = agentToSpawn.destination;
            //

            // Vector3 rot = navMeshAgent.transform.rotation.eulerAngles;
            // rot = new Vector3(rot.x, rot.y +180, rot.z);
            // Instantiate(agentToSpawn, points[i].position - new Vector3(0,0.2f,0), Quaternion.Euler(rot));
            i++;
        }

        if(((Vector3.Distance(agentToSpawn.transform.position, agentToSpawn.destination) < 1) & i<points.Length) || Input.GetKeyDown(KeyCode.Space))
        {
            agentToSpawn.destination = points[i].position - new Vector3(0,0.2f,0);
            //TESTING
            // navMeshAgent.destination = agentToSpawn.destination;
            //
            i++;
        }

        if((Vector3.Distance(navMeshAgent.transform.position, agentToSpawn.transform.position) >= 3)){
            agentToSpawn.isStopped=true;
        }
        
        if((Vector3.Distance(navMeshAgent.transform.position, agentToSpawn.transform.position) < 3)){
            agentToSpawn.isStopped=false;
        }
    }
}
