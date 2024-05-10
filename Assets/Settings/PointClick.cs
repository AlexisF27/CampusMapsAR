using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PointClick : MonoBehaviour {

	public int floorMask;                      // A layer mask so that a ray can be cast just at gameobjects on the floor layer.
	public float camRayLength = 100f;          // The length of the ray from the camera into the scene.

    //Transform player;
    //PlayerHealth playerHealth;
    //EnemyHealth enemyHealth;
    NavMeshAgent nav;

	public LineRenderer line; //to hold the line Renderer


	void Awake() {
        //player = GameObject.FindGameObjectWithTag("Player").transform;
        //playerHealth = player.GetComponent<PlayerHealth>();
        //enemyHealth = GetComponent<EnemyHealth>();
        nav = GetComponent<NavMeshAgent>();
    }


    void Update() {
		//Turning();
    }

	void Turning() {
		// Create a ray from the mouse cursor on screen in the direction of the camera.
		if (Input.GetMouseButtonUp(0)) {
			Ray camRay = Camera.main.ScreenPointToRay(Input.mousePosition);

			// Create a RaycastHit variable to store information about what was hit by the ray.
			RaycastHit floorHit;
		

			// Perform the raycast and if it hits something on the floor layer...
			if (Physics.Raycast(camRay, out floorHit, camRayLength, floorMask)) {

				// Create a vector from the player to the point on the floor the raycast from the mouse hit.
				Vector3 playerToMouse = floorHit.point - transform.position;

				// Ensure the vector is entirely along the floor plane.
				playerToMouse.y = 0f;

				// Create a quaternion (rotation) based on looking down the vector from the player to the mouse.
				Quaternion newRotation = Quaternion.LookRotation(playerToMouse);

				// Set the player's rotation to this new rotation.
				//playerRigidbody.MoveRotation(newRotation);
				nav.SetDestination(floorHit.point);
			}
		}
	}
}
