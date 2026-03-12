import java.util.*;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        double a,g,rA,rG;
        a=sc.nextDouble();
        g=sc.nextDouble();
        rA=sc.nextDouble();
        rG=sc.nextDouble();
       
        double tA=a/rA; //resulta em r$/km
        double tG=g/rG;

        if(tA<tG){ //se tiver menor custo por km
            System.out.println("A");
        }else{
            System.out.println("G");
        }
        
        
        sc.close();
    }
}
