import java.util.*;

class Pais{
    String nome;
    int ouro,prata,bronze;

    Pais(String nome,int o,int p,int b){
        this.nome=nome;
        this.ouro=o;
        this.prata=p;
        this.bronze=b;
    }
}

public class Main {
public static boolean buscarPais(String nome,Pais[] arr,int tam,int t){
    for(int i=0;i<tam;i++){
        if(arr[i].nome.compareTo(nome)==0){
            if(t==1)arr[i].ouro+=1;
            if(t==2)arr[i].prata+=1;
            if(t==3)arr[i].bronze+=1;
            return true;
        }
    }

    return false;
}

public static boolean cmp(Pais i,Pais j){
    if(i.ouro!=j.ouro)return i.ouro>j.ouro;
    
    //empate em ouro
    if(i.prata!=j.prata)return i.prata>j.prata;
    
    //empate em prata
    if(i.bronze!=j.bronze)return i.bronze>j.bronze;

    //empate nas 3
    return i.nome.compareTo(j.nome)<0;
}

public static void insertionSort(Pais[] arr,int tam){
    for(int i=1;i<tam;i++){
        Pais key=arr[i];
        int j=i-1;
        while(j>=0 && cmp(key,arr[j])){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

public static void main(String[] args){
        Scanner sc=new Scanner(System.in); 
        
        Pais[] arr=new Pais[301];
        int tam=0;
        while(sc.hasNextLine()){
            String esporte=sc.nextLine();
          
            String primeiro=sc.nextLine();
            if(!buscarPais(primeiro,arr,tam,1)){  //1=ouro, 2=prata, 3=bronze
                arr[tam++]=new Pais(primeiro,1,0,0);
            }
            
            String segundo=sc.nextLine();
            if(!buscarPais(segundo,arr,tam,2)){
                arr[tam++]=new Pais(segundo,0,1,0);
            }

            String terceiro=sc.nextLine();
            if(!buscarPais(terceiro,arr,tam,3)){
                arr[tam++]=new Pais(terceiro,0,0,1);
            }
        }

        insertionSort(arr,tam);
        System.out.println("Quadro de Medalhas");

        for(int i=0;i<tam;i++){
            System.out.printf("%s %d %d %d\n",arr[i].nome,arr[i].ouro,arr[i].prata,arr[i].bronze);
        }

        sc.close();
    }
}