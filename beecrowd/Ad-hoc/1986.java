import java.util.Locale;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner sc= new Scanner(System.in);

        int n;
        n=sc.nextInt();

        String letra;
        for(int i=0;i<n;i++){
            letra=sc.next();
            char c1=letra.charAt(0);
            char c2=letra.charAt(1);
            int num=0;
            if(c2>='A' && c2<='Z'){
                //primeiro caso: o segundo caracter é uma letra

                if(c1=='6'){
                    num=105 + (c2-64);
                }else if(c1=='7'){
                    num=121 + (c2-64);
                }
                    System.out.printf("%c",num);
            }else{
                //segundo caso: o segundo caracter é um numero;
                if(c1=='6'){
                    num=(c1-48)*10 + (c2-48) + 36;
                }else if(c1=='7'){
                    num=(c1-48)*10 + (c2-48) + 42;
                }

                System.out.printf("%c",num);
            }
        }
        System.out.println();

    sc.close();
    }
}