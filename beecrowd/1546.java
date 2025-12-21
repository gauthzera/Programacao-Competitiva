import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        int n;
        n=sc.nextInt();
        int k,x;
        for(int i=0;i<n;i++){
            k=sc.nextInt();
            for(int j=0;j<k;j++){
                x=sc.nextInt();
                if(x==1)System.out.println("Rolien");
                if(x==2)System.out.println("Naej");
                if(x==3)System.out.println("Elehcim");
                if(x==4)System.out.println("Odranoel");
            }
        }
    }
}
