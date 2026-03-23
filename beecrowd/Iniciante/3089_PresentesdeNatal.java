import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n=sc.nextInt();

        while(n!=0){
        long[] presentes=new long[2*n];
        for(int i=0;i<2*n;i++){
            presentes[i]=sc.nextLong();
        }

        int l=0,r=(2*n) -1;
        long caro=presentes[l]+presentes[r],barato=caro;
            while(l<r){
                long par=presentes[l++] + presentes[r--];
                if(par>caro)caro=par;
                if(par<barato)barato=par;
            }

        System.out.printf("%d %d\n",caro,barato);
        n=sc.nextInt();
        }
        
        sc.close();
    }
}