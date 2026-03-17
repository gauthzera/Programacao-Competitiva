import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    
        int t=sc.nextInt();
        while(t-- >0){
            String x=sc.next().toLowerCase(); //deixa todos caracteres minusculos
            int q=1;

            for(int i=0;i<x.length();i++){
                char c=x.charAt(i);
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='s'){
                    q*=3; //3 possibilidades
                }else{
                    q*=2; //2 possibilidades
                }

            }
            System.out.println(q);            
        }

        sc.close();
    }
}