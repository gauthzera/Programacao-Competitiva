import java.util.*;

public class Main {
    public static void main(String[] args) {
    Locale.setDefault(Locale.US);
    Scanner sc=new Scanner(System.in);

    int n=sc.nextInt();
    int[] arr=new int[n];
    
    long total=0;
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt(); //leitura dos dados
        total+=arr[i]; //total de carneiros
    }
     
    boolean[] ataques=new boolean[n]; //vetor que marca as propriedades atacadas
    long roubados=0;
    
    boolean prox=false;
    int j=0;

    while(j>=0 && j<n){
        if(arr[j]%2!=0)prox=true;//decide se vai para a proxima ou nao
        else prox=false;
    if(arr[j]>0){        
        arr[j]--;
        roubados++;
    }
        ataques[j]=true;

        if(prox)j++;
        else j--;
    }


    long qRoubados=0;
    for(int i=0;i<n;i++){
    if(ataques[i])qRoubados++;
    }

    System.out.printf("%d %d\n",qRoubados,total-roubados);


    sc.close();
      }
 }