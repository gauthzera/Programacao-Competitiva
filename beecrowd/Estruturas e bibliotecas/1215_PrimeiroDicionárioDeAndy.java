import java.util.*;

public class Main {
public static boolean verificarDuplicado(String[] arr,String x,int tam){
    for(int i=0;i<tam;i++){
        if(arr[i].compareTo(x)==0)return false;
    }
    return true;
}

public static void selectionSort(String[] arr,int tam){
    for(int i=0;i<tam-1;i++){
        int menor=i;
        for(int j=i+1;j<tam;j++){
            if(arr[j].compareTo(arr[menor])<0)menor=j;
        }
        String temp=arr[menor];
        arr[menor]=arr[i];
        arr[i]=temp;
    }
}

public static void main(String[] args){
        Scanner sc=new Scanner(System.in); 
        
        String[] palavras=new String[5001];
        int indx=0;
        while(sc.hasNextLine()){
            String linha=sc.nextLine().toLowerCase();
             
            String nova="";
            for(int i=0;i<linha.length();i++){
                char c=linha.charAt(i);
               if(c>='a' && c<='z'){
                    nova+=c;
               }else{
                if(nova.length()>0){
                    if(verificarDuplicado(palavras,nova,indx)){
                        palavras[indx++]=nova;
                    }
                }
                    nova="";
               }
            }

            if (nova.length() > 0){
                if(verificarDuplicado(palavras,nova,indx)) {
                    palavras[indx++]=nova;
                }
            }
        }
        
        selectionSort(palavras,indx);
        for(int i=0;i<indx;i++){
            System.out.println(palavras[i]);
        }
        
        sc.close();
    }
}