import java.util.*;

class Rena{
    String nome;
    int peso,idade;
    double altura;

    Rena(String nome,int peso,int idade,double altura){
        this.nome=nome;
        this.peso=peso;
        this.idade=idade;
        this.altura=altura;
    }
}

public class Main {

    public static boolean cmp(Rena i,Rena j){
        if(i.peso!=j.peso)return i.peso>j.peso;

        if(i.idade!=j.idade)return i.idade<j.idade;
        
        if(i.altura!=j.altura)return i.altura<j.altura;

        return (i.nome.compareTo(j.nome)<0);
    }


    public static void insertionSort(Rena[] arr,int n){
        for(int i=1;i<n;i++){
            Rena key=new Rena(arr[i].nome,arr[i].peso,arr[i].idade,arr[i].altura);

            int j=i-1;

            while(j>=0 && cmp(key,arr[j])){
                arr[j+1]=arr[j];
                j--;
            }

            arr[j+1]=key;
        }
    }

      public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int t=sc.nextInt();
        
        int caso=1;
        while(t-- >0){
        int n=sc.nextInt();
        int m=sc.nextInt();
    
        Rena[] arr=new Rena[n];

        for(int i=0;i<n;i++){
            String s=sc.next();
            int p=sc.nextInt();
            int x=sc.nextInt();
            double a=sc.nextDouble();
            
            arr[i]=new Rena(s,p,x,a);
        }

        insertionSort(arr,n);
            
        System.out.printf("CENARIO {%d}\n",caso++);
        for(int i=0;i<m;i++){
            System.out.printf("%d - %s\n",i+1,arr[i].nome);
        }

        }    

        sc.close();
    }
}