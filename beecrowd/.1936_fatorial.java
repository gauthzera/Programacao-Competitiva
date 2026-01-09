import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc= new Scanner(System.in);

        int n=sc.nextInt();
        int[] fatoriais= {1, 2 , 6, 24, 120 , 720 , 5040 ,40320};
        //achar qual o maior fatorial com base no valor de n
        int indiceMaior=0;
        for(int i=7;i>=0;i--){
            if(fatoriais[i]>n){
                continue;
            }else{
                indiceMaior = i;
                break;
            }
        }
        int q=0;
        for(int i=indiceMaior;i>=0;i--){
            if(n>0){
                while(fatoriais[i]<=n){
                    n-=fatoriais[i];
                    q++;
                }
            }else{
                break;
            }
        }

        System.out.println(q);

        }
}
