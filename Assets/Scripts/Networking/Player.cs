using System.Collections;
using System.Collections.Generic;
using RiptideNetworking;
using UnityEngine;

public class Player : MonoBehaviour
{
        public static Dictionary<ushort, Player> list = new Dictionary<ushort, Player>();

      //  public static Vector3[] targetPositions;

        private ushort id = 1;
        private string username = "1";

        public void Move(Vector3 newPosition, Vector3 forward)
        {
            transform.position = newPosition;

            if (id != NetworkManager.Singleton.Client.Id) // Don't overwrite local player's forward direction to avoid noticeable rotational snapping
                transform.forward = forward;
        }

        private void OnDestroy()
        {
            list.Remove(id);
        }

        public static void Spawn(ushort id, string username, Vector3 position)
        {
            Player player;
            if (id == NetworkManager.Singleton.Client.Id)
                player = Instantiate(NetworkManager.Singleton.LocalPlayerPrefab, position, Quaternion.identity).GetComponent<Player>();
            else
                player = Instantiate(NetworkManager.Singleton.PlayerPrefab, position, Quaternion.identity).GetComponent<Player>();

            player.name = $"Player {id} ({username})";
            player.id = id;
            player.username = username;
            list.Add(player.id, player);
        }

        #region Messages
        [MessageHandler((ushort)ServerToClientId.spawnPlayer)]
        private static void SpawnPlayer(Message message)
        {
            Spawn(message.GetUShort(), message.GetString(), message.GetVector3());
        }

        [MessageHandler((ushort)ServerToClientId.playerMovement)]
        private static void PlayerMovement(Message message)
        {
            ushort playerId = message.GetUShort();
            if (list.TryGetValue(playerId, out Player player))
                player.Move(message.GetVector3(), message.GetVector3());
        }
        
        [MessageHandler((ushort)ServerToClientId.myMessage)]
        private static void MyMessage(Message message)
        {
            int numberOfVectors = message.GetInt();
            
            Vector3[] vectors = new Vector3[numberOfVectors - 1];
           // targetPositions = new Vector3[numberOfVectors];
            
            for (int i = 0; i < numberOfVectors -1; i++) {
                vectors[i]=message.GetVector3();
                // targetPositions[i]=message.GetVector3();   
                vectors[i] = findMyfloor(vectors[i]);
                Debug.Log(vectors[i]); 
            }
            Navigation.targetPoints= vectors;
        }


        public static Vector3 findMyfloor(Vector3 position) {
        Vector3 coordenada;
        if (position.y == 0.0f || position.y == 1f)
        {
 
            coordenada = new Vector3(position.x, 0.3f, position.z);
            return coordenada;
        }
        
        if (position.y == 4f || position.y == 7f) {
            coordenada = new Vector3(position.x, 2.54f, position.z);
            return coordenada;
        }
		
        if (position.y == 2f || position.y == 10f || position.y == 13f)
        {
            coordenada = new Vector3(position.x, 3.82f, position.z);
            return coordenada;

        }
        
        if (position.y == 19f  || position.y == 3f) {

            coordenada = new Vector3(position.x, 5.1f, position.z);
            return coordenada;

        }
        
        if (position.y == 22f || position.y == 25f || position.y == 6f) { //TODO foi Só para testar
            coordenada = new Vector3(position.x,6.38f, position.z);
            return coordenada;

        }

        else{
             Debug.LogError("-1");
            throw new System.Exception("No se encontra esse floor"); //Se Chegar aqui deve dar erro

        }


    }
        #endregion
    }
