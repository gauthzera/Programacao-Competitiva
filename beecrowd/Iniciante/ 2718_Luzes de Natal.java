import java.util.*;

public class Main{
    public static void main(String args[]){
        Locale.setDefault(Locale.US);
        Scanner sc=new Scanner(System.in);
         
        int n=sc.nextInt();

        while(n-- >0){
            long num=sc.nextLong();
            int q=0;
            int aux=0;
            while(num>0){
                if(num%2==1){
                    q++; //guarda a maior sequencia de bits 1
                    if(q>aux)aux=q;
                }else{
                    q=0;
                }
                num/=2;
            }
            System.out.println(aux);

        }
        
        sc.close();
    }   

}