import java.util.*;

public class Main {
public static void main(String[] args){
        Scanner sc=new Scanner(System.in); 
        int n=sc.nextInt();
        int c=sc.nextInt();
        int m=sc.nextInt();

        int total=c;
        int[] carimbadas=new int[c];
        
        int maior=0;
        for(int i=0;i<c;i++){
            carimbadas[i]=sc.nextInt();
            if(carimbadas[i]>maior)maior=carimbadas[i];
        }
        boolean[] repetida=new boolean[maior+1];

        for(int i=0;i<m;i++){
            int valor=sc.nextInt();
            for(int j=0;j<c;j++){
                if(valor==carimbadas[j] && !repetida[valor]){
                    total--;
                    repetida[valor]=true;
                }
            }
        }
        System.out.println(total); 
        
        sc.close();
    }
}
