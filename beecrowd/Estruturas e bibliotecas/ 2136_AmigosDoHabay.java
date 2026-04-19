import java.util.*;

class Pessoa{
    String nome;
    Pessoa prox;
    int pos;

    Pessoa(String nome,int pos){
        this.nome=nome;
        this.prox=null;
        this.pos=pos;
    }
}

class ListaNao{
    Pessoa primeiro;
    int tam;

    ListaNao(){
        this.primeiro=null;
        this.tam=0;
    }

    void inserir(String nome,int pos){ //insere no fim;
        Pessoa p=new Pessoa(nome,pos);
        if(primeiro==null){
            primeiro=p;
            tam++;
            return;
        }
        Pessoa aux=primeiro;
        while(aux.prox!=null){
            aux=aux.prox;
        }
        aux.prox=p;
        tam++;
    }

    int tam(){
        return tam;
   }

     String[] toArray(){
        int n=tam;
        String[] arr=new String[n];
        int indx=0;
        Pessoa aux=primeiro;
        while(aux!=null){
            arr[indx++]=aux.nome;
            aux=aux.prox;
        }
        return arr;
    }   

    void mostrar() {
        Pessoa aux = primeiro;
        while (aux != null) {
            System.out.println(aux.nome);
            aux = aux.prox;
        }
        System.out.println();
    }

} 

class ListaSim{
    Pessoa primeiro;
    int tam;
    
    ListaSim(){
        this.primeiro=null;
        this.tam=0;
    }

    void inserir(String nome,int pos){ //insere no fim;
        Pessoa p=new Pessoa(nome,pos);
        if(primeiro==null){
            primeiro=p;
            tam++;
            return;
        }
        Pessoa aux=primeiro;
        while(aux.prox!=null){
            aux=aux.prox;
        }
        aux.prox=p;
        tam++;
    }

    boolean repetido(String nome){
        Pessoa aux=primeiro;
        while(aux!=null){
            if((aux.nome).compareTo(nome)==0)return true;
            aux=aux.prox;
        }
        return false;
    }

    String amigo(){
        Pessoa p=primeiro;
        int tam=p.nome.length();
        Pessoa amigo=p;
        while(p!=null){
            if(p.nome.length()>tam){
                tam=p.nome.length();
                amigo=p;
            }else if(p.nome.length()==tam){
                if(p.pos<amigo.pos){
                    amigo=p;
                }
            }
            p=p.prox;
        }
        return amigo.nome;
    }

    int tam(){return tam;}

    String[] toArray(){
        int n=tam;
        String[] arr=new String[n];
        int indx=0;
        Pessoa aux=primeiro;
        while(aux!=null){
            arr[indx++]=aux.nome;
            aux=aux.prox;
        }
        return arr;
    }   

    void mostrar() {
        Pessoa aux = primeiro;
        while (aux != null) {
            System.out.println(aux.nome);
            aux = aux.prox;
        }
    }
}   

public class Main {

public static void mostrar(String[] arr){
    for(String x:arr){
        System.out.println(x);
    }
}

public static void insertionSort(String[] arr,int n){
    for(int i=1;i<n;i++){
        String key=arr[i];
        int j=i-1;
        while(j>=0 && key.compareTo(arr[j])<0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        ListaSim listaS=new ListaSim();
        ListaNao listaN=new ListaNao();
        
        int pos=0;

        String nome=sc.next();

        while(nome.compareTo("FIM")!=0){
            String op=sc.next();            
            if(op.charAt(0)=='Y'){
                if(!listaS.repetido(nome)){
                    listaS.inserir(nome,pos);
                    pos++;
                }
            }else{
                listaN.inserir(nome,0);
            }
             nome=sc.next();
        }
        String[] arrS=listaS.toArray();
        String[] arrN=listaN.toArray();
        
        insertionSort(arrS,listaS.tam());
        insertionSort(arrN,listaN.tam());

        mostrar(arrS);
        mostrar(arrN);
        System.out.println();

        System.out.printf("Amigo do Habay:\n%s\n",listaS.amigo());
        
        sc.close();
    }
}