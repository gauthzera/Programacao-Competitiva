import java.util.Locale;
import java.util.Scanner;

public class Main{

    public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner sc=new Scanner(System.in);

        int n,q=0;
        n=sc.nextInt();

        while(n!=0){
            int ing=0,pos=0;
            q++;
            System.out.printf("Teste %d\n",q);
            for(int i=1;i<=n;i++){
                ing=sc.nextInt();
                if(ing==i){
                    pos=i;
                }
            }
            System.out.println(pos);

            System.out.println();
            n=sc.nextInt();
        }

        sc.close();
        }
    }

