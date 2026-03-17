import java.util.*;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
    
        int t=sc.nextInt();

        while(t-- >0){
            int c=sc.nextInt();
            int d=sc.nextInt();

            long tD=1,tC=1;
            for(int i=0;i<c;i++){
                tC*=26; //total de consoantes
            }
            for(int i=0;i<d;i++){
                tD*=10; //total de digitos
            }

            if(c==0 && d==0){
                tD=0;
                tC=0;
            }
            long total=tD*tC;
            System.out.println(total);
            
            
        }

        sc.close();
    }
}