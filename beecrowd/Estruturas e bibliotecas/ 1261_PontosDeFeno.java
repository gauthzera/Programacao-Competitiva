import java.util.Scanner;

class Palavra{
    String s;
    int valor;

    Palavra(String s,int valor){
        this.s=s;
        this.valor=valor;
    }
}


public class Main {
      public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int m=sc.nextInt();
        int n=sc.nextInt();

        Palavra[] arr=new Palavra[m];

        for(int i=0;i<m;i++){
            String s=sc.next();
            int valor=sc.nextInt();
            arr[i]=new Palavra(s,valor);
        }
        
        
        while(n-- > 0){
            String frase=sc.nextLine();
            int pontos=0;
            while(!frase.equals(".")){

                String[] aux=frase.split(" ");

                for(int i=0;i<aux.length;i++){
                    for(int j=0;j<m;j++){
                        if(aux[i].equals(arr[j].s))pontos+=arr[j].valor;
                    }
                }
                frase=sc.nextLine();
            }
            System.out.println(pontos);
        }

        
        sc.close();
    }
}