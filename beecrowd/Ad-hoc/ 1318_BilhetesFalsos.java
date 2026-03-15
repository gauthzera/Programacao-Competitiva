import java.util.*;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int n,m;
        n=sc.nextInt();
        m=sc.nextInt();

        while(m!=0 && n!=0){
          int[] freq=new int[n+1]; //frequencia dos bilhetes
          int num;
          for(int i=0;i<m;i++){
            num=sc.nextInt();
            freq[num]++;
          }
          int q=0;

          for(int i=0;i<=n;i++){
            if(freq[i]>1)q++; //verifica bilhetes repetidos
          }
          System.out.println(q);


        n=sc.nextInt();
        m=sc.nextInt();
        }

        sc.close();
    }
}
