using System;
using System.Collections;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Text;
using System.Xml;
using System.Xml.Serialization;

public class Database : MonoBehaviour {
    //public string fromField;
    //public string toField;
    public InputField testfieldTO;
    public InputField testfieldFrom;

    //public Button goButton;
    //public string resultText;
    public Lista lista;

    [SerializeField] private String ip;    
    [SerializeField] GameObject ScrollView;

    public void Button() {
        StartCoroutine(Register());
    }

    IEnumerator Register()
    {
        WWWForm form = new WWWForm();
        //form.AddField("from", testfield.text);
        // Debug.Log(fromField);
        //form.AddField("to", toField.text);
        //UnityWebRequest www =  UnityWebRequest.Get("http://localhost/sqlconnect/register.php/?from=" + testfield.text + "&to=" + toField);
        if (testfieldFrom.isFocused == true)
        {
            UnityWebRequest www = UnityWebRequest.Get("http://" + ip + "/sqlconnect/register.php/?from=" + testfieldFrom.text);
            yield return www.SendWebRequest();
            ScrollView.SetActive(true);
            PreencherLista(www);
        }
        else if (testfieldTO.isFocused == true)
        {
            UnityWebRequest www = UnityWebRequest.Get("http://" + ip + "/sqlconnect/register.php/?from=" + testfieldTO.text);
            yield return www.SendWebRequest();
            ScrollView.SetActive(true);
            PreencherLista(www);
        }

        
    }

    private void PreencherLista(UnityWebRequest www)
    {
        if (www.error == null)
        {
            Debug.Log("connect");
            Debug.Log(www.downloadHandler.text);
            string dataText = www.downloadHandler.text;
            Debug.Log(dataText);
            //   XmlReader reader = XmlReader.Create(dataText);

            string[] collection = dataText.Split('*');

            Sala[] allSalas = new Sala[collection.Length / 8]; //alterar para 6 

            int j = 0;
            for (int i = 0; i < collection.Length - 8; i = i + 8) {    
                Sala sala = new Sala(collection[i], collection[i + 1], collection[i + 2], collection[i + 3],
                collection[i + 4], collection[i + 5], collection[i + 6], collection[i + 7]); //TODO: Ir buscar o icon certo à BD
                allSalas[j++] = sala;
            }

            lista.allSalas = allSalas;
            lista.AtualizarLista();
        }
        else
        {
            Debug.Log("deu erro na connection");
            Debug.Log(www.downloadHandler.text);
            Debug.Log(www.error);
        }
    }
}