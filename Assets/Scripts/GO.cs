using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net.NetworkInformation;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;
using UnityEngine.UI;

public class GO : MonoBehaviour {
    public Text from;
    public Text to;
    
    public GameObject seeker;

    public Pathfinding pathfinding;

    private Transform testA;
    private Transform testB;
    private Transform closestStair;
    private Stair closestStairScript;

    public Camera camera;

    // Start is called before the first frame update
    void Start() {
        testA = GameObject.Find(@from.text).transform;
        testB = GameObject.Find(@to.text).transform;
    }

    public void GotoPosition() {
        Transform a = GameObject.Find(@from.text).transform;
        Transform b = GameObject.Find(@to.text).transform;

        if (a != testA || b != testB) {
            Clear();
            testA = GameObject.Find(@from.text).transform;
            testB = GameObject.Find(@to.text).transform;

            FloorManager.instance.ShowFloor(findMyfloor(testA.position));
            //TODO: ZOOM TROCAR COR DO NOME
            camera.transform.position = new Vector3(testA.position.x, 50, testA.transform.position.z);
        }
    }

    public void TestButton() {
        TestPath(testA, testB);
    }
    
    public void TestPath(Transform a, Transform b) {
        //Se Caminho Finalmente é possivel desenha
        if (pathfinding.IsPathPossible(a.transform.position, b.transform.position)) {
            GameObject seekerTest = Instantiate(seeker, a.transform.position, Quaternion.identity);
            Unit uT = seekerTest.GetComponent<Unit>();

            if (closestStairScript != null) {
                uT.floor = closestStairScript.endFloor;
            }
            else
            {
                //todo: fazer
                uT.floor = 0;
            }
            
            uT.target = b.transform;
            uT.GotoPosition();
            //Debug.Log("Desenhei 1");
            if (closestStairScript != null) {
                FloorManager.instance.ShowFloor(closestStair.GetComponent<Stair>().endFloor);
            }
        }
        else {
            //Encontra escada mais proxima
            int floor = findMyfloor(a.transform.position);
            GameObject[] stairs = GameObject.FindGameObjectsWithTag("Stairs" + floor);  
            
            float closestDistance = Mathf.Infinity;
            closestStair = b;

            foreach (var s in stairs) { 
                float distance = Vector3.Distance(a.transform.position, s.transform.position);

                //Se encontrar a mesma escada não a ter em conta (Escadas no mesmo piso)
                if (distance == 0) {
                    continue;
                }
                
                if (distance < closestDistance) {
                    closestDistance = distance;
                    closestStair = s.transform;
                }
            }
            closestStairScript = closestStair.GetComponent<Stair>();

            //Set possição final para inicio da escada
            Transform newPos = closestStairScript.pointStart;

            //Se Possivel ir até à escada
            if (pathfinding.IsPathPossible(a.transform.position, newPos.position)) {
                //IR até á escada
                PathRequestManager.instance.pathfinding.currentGrid = PathRequestManager.instance.pathfinding.grids[closestStairScript.startFloor];
                GameObject seekerTest = Instantiate(seeker, a.transform.position, Quaternion.identity);
                Unit uT = seekerTest.GetComponent<Unit>();
                uT.target = newPos;
                uT.floor = closestStairScript.startFloor;
                uT.GotoPosition();

                if (testA.GetComponent<Stair>() != null) {
                    Debug.Log("Continuar pela escada");
                }
                FloorManager.instance.ShowFloor(closestStairScript.startFloor);
                
                //Atualizar possição inicial para fim da escada
                testA = closestStairScript.pointEnd;
            }
            else {
                Debug.LogError("Está mal");
                GameObject seekerTest = Instantiate(seeker, a.transform.position, Quaternion.identity);
                Unit uT = seekerTest.GetComponent<Unit>();
                uT.target = newPos;
                uT.floor = closestStairScript.startFloor;
                uT.GotoPosition();
            }
            
            //DEFINIR NOVA GRID (Subir para o nivel da escada) 
            PathRequestManager.instance.pathfinding.currentGrid = PathRequestManager.instance.pathfinding.grids[closestStairScript.endFloor];
            //Debug.Log("Subir para " + closestStairScript.endFloor);
        }
    }

    public void Clear() {
        GameObject[] gs = GameObject.FindGameObjectsWithTag("Player");
        foreach (var g in gs) {
            GameObject.Destroy(g);
        }
    }

    int findMyfloor(Vector3 position) {

        if (position.y == 0 || position.y == 1)
        {
            return 0;
        }
        
        if (position.y == 4 || position.y == 7) {
            return 1;
        }
		
        if (position.y == 2 || position.y == 10 || position.y == 13)
        {
            return 2;
        }
        
        if (position.y == 19  || position.y == 3) {
            return 3;
        }
        
        if (position.y == 22 || position.y == 25 || position.y == 6) { //TODO foi Só para testar
            return 4;
        }

        Debug.LogError("-1");
        return -1; //Se Chegar aqui deve dar erro
    }
}
