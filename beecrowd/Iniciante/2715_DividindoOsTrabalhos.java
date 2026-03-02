import java.util.*;
 
public class Main {
     public static void main(String[] args) {
     Locale.setDefault(Locale.US);
     Scanner sc=new Scanner(System.in);
 
 
     while(sc.hasNextInt()){
         int n=sc.nextInt();
 
         int[] arr=new int[n];
 
         long somaTotal=0;
         for(int i=0;i<n;i++){
             arr[i]=sc.nextInt();
             somaTotal+=arr[i]; 
         }
 
         long somaPref=0; //soma dos primeiros elementos
         long dif= Math.abs(somaTotal - 2*somaPref);
 
         for(int i=0;i<n;i++){
             somaPref+=arr[i]; 
             long difAux=Math.abs(somaTotal- 2*somaPref); //calcula nova diferenca
             if(difAux<dif)dif=difAux; //fica com a diferença menor
         }
         System.out.println(dif);
        
     }
 
     sc.close();
   }
  }
        