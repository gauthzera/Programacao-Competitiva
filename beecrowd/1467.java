import java.util.Scanner;
import java.util.Locale;

public class Main{
    public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner sc= new Scanner(System.in);

        while(sc.hasNextInt()){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();

                char diferente='*';
                if(a!=b && a!=c) diferente='A';
                else if(b!=a && b!=c) diferente='B';
                else if(c!=a && c!=b) diferente='C';
                System.out.println(diferente);
        }

        sc.close();
    }
}

