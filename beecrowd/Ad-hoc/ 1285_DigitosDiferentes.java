import java.util.*;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int n,m;
        while(sc.hasNextInt()){
        n=sc.nextInt();
        m=sc.nextInt();

        int q=0; //total de casas com digitos distintos
        for(int i=n;i<=m;i++){
            int num=i;
            int[] freq=new int[10]; //0 até 9
            int qDig=0; //total de digitos
            while(num>0){
                qDig++;
                int dig=num%10;
                num/=10;
                freq[dig]++; //incrementa a frequência do dígito
            }
            int aux=0;
            for(int j=0;j<10;j++){
                if(freq[j]==1)aux++;
            }
            if(aux==qDig)q++;
        }

        System.out.println(q);
        }

        sc.close();
    }
}