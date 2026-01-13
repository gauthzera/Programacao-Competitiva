import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        
        Scanner sc= new Scanner(System.in);

        int n=sc.nextInt();

        String comando;
        while(n!=0){
            int direcao=0;//norte=0, leste=1, sul=2, oeste=3;
            comando=sc.next();
            for(int i=0;i<n;i++){
               if(comando.charAt(i)=='D'){
                   if(direcao<3){
                       direcao++;
                   }else{
                       direcao=0;
                   }
               }
               if(comando.charAt(i)=='E'){
                   if(direcao>0){
                       direcao--;
                   }else{
                       direcao=3;
                   }
               }
            }

            if(direcao==0)System.out.println("N");
            else if(direcao==1)System.out.println("L");
            else if(direcao==2)System.out.println("S");
            else System.out.println("O");

            n=sc.nextInt();
        }

        sc.close();
    }
}

