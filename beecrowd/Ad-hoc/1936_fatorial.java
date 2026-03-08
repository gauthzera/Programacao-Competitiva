import java.util.*;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
                
        int n=sc.nextInt();
        int[] fatoriais= {1, 2 , 6, 24, 120 , 720 , 5040 ,40320};
        int indMaior=0;
        for(int i=7;i>=0;i--){
            if(fatoriais[i]<=n){
            indMaior=i;
            break;
            }
        }

        int q=0;
        int i=indMaior;            
        while(n>0){
            if(n>=fatoriais[i]){
                n-=fatoriais[i];
                q++;
            }else{
                i--;
            }
        }

        System.out.printf("%d\n",q);
        
        sc.close();
    }
}
