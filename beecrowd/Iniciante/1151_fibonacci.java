import java.util.Scanner;

public class Main{

    public static void main(String[] args){
        
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();

        int atual=0;
        int anterior=1;

        for(int i=0;i<n;i++){
            if(i<n-1){
                System.out.printf("%d ",atual);
            }else{
                System.out.printf("%d\n",atual);
            }
            int temp=atual;
            atual=atual+anterior;
            anterior=temp;
        }

        sc.close();
    }
}

