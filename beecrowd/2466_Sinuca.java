 import java.util.*;

public class Main {
     public static void main(String[] args) {
     Locale.setDefault(Locale.US);
     Scanner sc=new Scanner(System.in);
 
     int n=sc.nextInt();
     int[] arr=new int[n]; //primeira fileira de bolas
 
     for(int i=0;i<n;i++){
         arr[i]=sc.nextInt();
     }
 
     for(int i=n;i>1;i--){ //a cada iteração diminui o espaço em 1
             for(int j=0;j<i-1;j++){
                 if(arr[j]!=arr[j+1]){
                     arr[j]=-1; //atualiza o vetor com base nas cores
                 }else{
                     arr[j]=1;
                 }
             }
     }
     if(arr[0]==-1)System.out.println("branca");
     else System.out.println("preta");
 
 
     sc.close();
      }
}