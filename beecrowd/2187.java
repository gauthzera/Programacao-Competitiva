import java.util.Locale;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner sc= new Scanner(System.in);

        int v,q=1;
        v=sc.nextInt();

        while(v!=0){
            int q50=0,q10=0,q5=0,q1=0;
            System.out.printf("Teste %d\n",q);

            q50=v/50;
            v%=50;

            q10=v/10;
            v%=10;

            q5=v/5;
            v%=5;

            q1=v;

            System.out.printf("%d %d %d %d\n",q50,q10,q5,q1);
            q++;

            v=sc.nextInt();
        }

        sc.close();
        }
    }

