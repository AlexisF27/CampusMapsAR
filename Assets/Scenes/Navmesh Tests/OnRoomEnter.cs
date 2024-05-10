using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class OnRoomEnter : MonoBehaviour {

    private void OnTriggerEnter(Collider other) {
        //var nav = other.gameObject.GetComponent<NavMeshAgent>();
        //nav.isStopped = true;

        Debug.Log(this.gameObject.name);
    }
}
