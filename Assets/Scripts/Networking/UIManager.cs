using System;
using System.Collections;
using System.Collections.Generic;
using RiptideNetworking;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    // Start is called before the first frame update
        private static UIManager _singleton;

        [SerializeField]
        private InputField fromField;
        [SerializeField]
        private InputField toField;
        public static UIManager Singleton
        {
            get => _singleton;
            private set
            {
                if (_singleton == null)
                    _singleton = value;
                else if (_singleton != value)
                {
                    Debug.Log($"{nameof(UIManager)} instance already exists, destroying object!");
                    Destroy(value);
                } 
            }
        }

        private int usernameField = 1;
        [SerializeField] private GameObject connectScreen;

        private void Awake()
        {
            Singleton = this;
        }

        public void ConnectClicked()
        {
            connectScreen.SetActive(false);

            NetworkManager.Singleton.Connect();
        }
        public void BackToMain()
        {
            connectScreen.SetActive(true);
        }
        public void SendName()
        {
            Message message = Message.Create(MessageSendMode.reliable, ClientToServerId.playerName);
            message.AddString(usernameField.ToString());
            NetworkManager.Singleton.Client.Send(message);
        }
        public void SendOriginAndDestination()
        {
            Message message = Message.Create(MessageSendMode.reliable, ClientToServerId.myMessage);
            message.AddString(fromField.text);
            message.AddString(toField.text);
             Debug.Log(fromField.text + toField.text);
            NetworkManager.Singleton.Client.Send(message);
        }



} 
