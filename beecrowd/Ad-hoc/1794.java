import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc= new Scanner(System.in);

        int n;
        int la,lb,sa,sb;
        n=sc.nextInt();
        la=sc.nextInt();
        lb=sc.nextInt();
        sa=sc.nextInt();
        sb=sc.nextInt();

        boolean possivelLavar;
        boolean possivelSecar;
        if(la<=n && lb>=n){
            possivelLavar=true;
        }else{
            possivelLavar=false;
        }
        if(sa<=n && sb>=n){
            possivelSecar=true;
        }else{
            possivelSecar=false;
        }

        if(possivelLavar && possivelSecar){
            System.out.println("possivel");
        }else{
            System.out.println("impossivel");
        }

    }
}