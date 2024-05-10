using System;
using System.Collections;
using System.Collections.Generic;
using RiptideNetworking;
using RiptideNetworking.Utils;
using UnityEngine;


    public enum ServerToClientId : ushort
    {
        spawnPlayer = 1,
        playerMovement,
        myMessage,
    }
    public enum ClientToServerId : ushort
    {
        playerName = 1,
        playerInput,
        myMessage,
    }

public class NetworkManager : MonoBehaviour
{
    // Start is called before the first frame update
        private static NetworkManager _singleton;
        public static NetworkManager Singleton
        {
            get => _singleton;
            private set
            {
                if (_singleton == null)
                    _singleton = value;
                else if (_singleton != value)
                {
                    Debug.Log($"{nameof(NetworkManager)} instance already exists, destroying object!");
                    Destroy(value);
                } 
            }
        }

        [SerializeField] private string ip;
        [SerializeField] private ushort port;
        [SerializeField] private GameObject localPlayerPrefab;
        [SerializeField] private GameObject playerPrefab;

        public GameObject LocalPlayerPrefab => localPlayerPrefab;
        public GameObject PlayerPrefab => playerPrefab;

        public Client Client { get; private set; }

        private void Awake()
        {
            Singleton = this;
        }

        private void Start()
        {
            RiptideLogger.Initialize(Debug.Log, Debug.Log, Debug.LogWarning, Debug.LogError, false);
       
            Client = new Client();
            Client.Connected -= DidConnect;
            Client.ConnectionFailed -= FailedToConnect;
            Client.ClientDisconnected -= PlayerLeft;
            Client.Disconnected -= DidDisconnect;
        }

         public void Connect()
        {
            Client.Connect($"{ip}:{port}");
        }

        private void FixedUpdate()
        {
            Client.Tick();
        }
        private void PlayerLeft(object sender, ClientDisconnectedEventArgs e)
        {
            Destroy(Player.list[e.Id].gameObject);
        }
        private void DidConnect(object sender, EventArgs e)
        {
            UIManager.Singleton.SendName();
        }
        private void FailedToConnect(object sender, EventArgs e)
        {
            UIManager.Singleton.BackToMain();
        }
        private void DidDisconnect(object sender, EventArgs e)
        {
            UIManager.Singleton.BackToMain();

            foreach (Player player in Player.list.Values)
                Destroy(player.gameObject);
        }
}
