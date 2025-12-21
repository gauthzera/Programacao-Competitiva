import java.util.Scanner;

public class Main {
    public static void main(String[] args){
    Scanner sc= new Scanner(System.in);

    int[] conector1= new int[5];
    int[] conector2= new int[5];

    boolean valido=true;

    //leitura dos conectores;
    for(int i=0;i<5;i++){
        conector1[i] = sc.nextInt();
    }
    for(int i=0;i<5;i++){
            conector2[i] = sc.nextInt();
    }
    //compara os dois conectores
    for(int i=0;i<5;i++){
        if(conector1[i]==conector2[i]){
            valido=false;
            break;
        }
    }

    if(valido){
        System.out.println("Y");
    }else{
        System.out.println("N");
    }
    sc.close();
    }
}
