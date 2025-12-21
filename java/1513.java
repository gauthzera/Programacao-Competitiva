import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        int a,b,c;

        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();

        while(a!=0 && b!=0 && c!=0){
            double vol=a*b*c;
            double L=Math.cbrt(vol);

            System.out.printf("%.0f%n",Math.floor(L));
            a=sc.nextInt();
            b=sc.nextInt();
            c=sc.nextInt();
        }

    }
}
