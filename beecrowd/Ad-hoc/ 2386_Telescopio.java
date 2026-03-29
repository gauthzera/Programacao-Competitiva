import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a=sc.nextInt();
        int n=sc.nextInt();

        int q=0;
        while(n-->0){
            int x=sc.nextInt();
            long res=a*x;
            if(res>=40000000)q++;
                
        }
        System.out.println(q);
        
        sc.close();
    }
}