import java.util.*;

class carne{
    String nome;
    int data;
    
    carne(){
        this.nome=null;
        this.data=0;
    }
    carne(String nome,int data){
        this.nome=nome;
        this.data=data;
    }

    String getNome(){
        return this.nome;
    }
    int getData(){
        return this.data;
    }
}

public class Main {
public static void insertionSort(carne arr[],int n){
    for(int i=1;i<n;i++){
        carne key=arr[i];
        int j=i-1;
        while(j>=0 && key.getData()<arr[j].getData()){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         
        while(sc.hasNextInt()){
            int n=sc.nextInt();
            carne[] arr=new carne[n];
            String nome;
            int data;
            for(int i=0;i<n;i++){
                nome=sc.next();
                data=sc.nextInt();
                arr[i]=new carne(nome,data);
            }

            insertionSort(arr,n);
            for(int i=0;i<n;i++){
                if(i<n-1){
                    System.out.printf("%s ",arr[i].getNome());
                }else{
                    System.out.printf("%s\n",arr[i].getNome());
                }
            }
       
        }
        
        sc.close();
    }
}
