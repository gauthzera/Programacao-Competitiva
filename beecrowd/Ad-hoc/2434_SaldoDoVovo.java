import java.util.*;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int n,s;
        n=sc.nextInt();
        s=sc.nextInt();

        int mov=0; //movimentações
        int menorSaldo=s;

        while(n-- >0){
            mov=sc.nextInt();
            s+=mov;
            if(s<menorSaldo)menorSaldo=s; //atualaliza menor saldo
        }

        System.out.println(menorSaldo);

        sc.close();
    }
}
