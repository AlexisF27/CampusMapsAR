using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;

//https://www.youtube.com/watch?v=Lq170ztDAPo
//https://github.com/herbou/Unity_ListItems_using_code/blob/master/Assets/Demo.cs
//https://gyanendushekhar.com/2019/08/11/scroll-view-dynamic-content-size-unity-tutorial/

public static class ButtonExtension
{
    public static void AddEventListener<T> (this Button button, T param, Action<T> OnClick)
    {
        button.onClick.AddListener (delegate() {
            OnClick (param);
        });
    }
}
public struct Sala{
    public string id;
    public string Name;
    public string piso;
    public string edificio;
    public string referenciaEspaco;
    public string numeroPortas;
    public string area;
    public string tipoUtilizacao;
    public Sprite Icon;

    public Sala(string id, string name, string piso, string edificio, string referenciaEspaco, string numeroPortas, string area,string tipoUtilizacao) {
        this.id = id;
        Name = name;
        this.piso = piso;
        this.edificio = edificio;
        this.referenciaEspaco = referenciaEspaco;
        this.numeroPortas = numeroPortas;
        this.area = area;
        this.tipoUtilizacao = tipoUtilizacao;
        Icon = Resources.Load<Sprite>("informacao");
    }
}
public class Lista : MonoBehaviour
{
    
    [SerializeField] public Sala[] allSalas;
    public InputField fromField;
    public InputField toField;
    public int count = 0;
    public int enabledLista = 0;
    GameObject g;
    [SerializeField] GameObject ScrollView;

   public void AtualizarLista() {
        
        GameObject buttonTemplate = transform.GetChild(0).gameObject;
       

        for (int i = 1; i < transform.childCount; i++) {
            GameObject children = transform.GetChild(i).gameObject;
            Destroy(children);
        }

        int N = allSalas.Length;
        if (fromField.isFocused == true){
            count = 1;
        }else if (toField.isFocused == true){
            count = 2;
        }


        for (int i = 0; i < N; i++) {
            g = Instantiate(buttonTemplate, transform);
            g.transform.GetChild(0).GetComponent<Image>().sprite = allSalas[i].Icon;
            g.transform.GetChild(1).GetComponent<Text>().text = allSalas[i].Name;
            g.transform.GetChild(2).GetComponent<Text>().text = allSalas[i].referenciaEspaco;
            g.SetActive(true);
            
            g.GetComponent<Button>().AddEventListener(i, ItemClicked);

        }





    }

    void DestroyLista(){
            ScrollView.SetActive(false);
    }


    void ItemClicked(int itemIndex)
    {
        Debug.Log("------------item " + itemIndex + " clicked---------------");
        Debug.Log("name " + allSalas[itemIndex].Name);
        //Debug.Log("desc " + allGames[itemIndex].Description);
        if(count == 1){
            fromField.text = allSalas[itemIndex].referenciaEspaco;
            fromField.text = allSalas[itemIndex].Name;
            enabledLista = 1;
            DestroyLista();
        }else if (count == 2){
            toField.text = allSalas[itemIndex].referenciaEspaco;
            toField.text = allSalas[itemIndex].Name;
            enabledLista = 1;
            DestroyLista();
        }
    }
    
    
}