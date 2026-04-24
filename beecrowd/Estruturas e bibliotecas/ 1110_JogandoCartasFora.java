import java.util.*;
import java.io.*;

class Lista{
    int[] arr;
    int primeiro,ultimo;

    Lista(int n){
        this.arr=new int[n+1];
        for(int i=0;i<n;i++){
            arr[i]=n-i;
        }
        primeiro=0;
        ultimo=n;
    }
    
    int operacao(){
        ultimo=(ultimo-1+arr.length)%arr.length; //remove o ultimo
        int removida=arr[ultimo];

        ultimo=(ultimo-1+arr.length)%arr.length;
        int novaBase=arr[ultimo];
        primeiro=(primeiro-1+arr.length)%arr.length; //move o penúltimo para a base
        arr[primeiro]=novaBase;

        return removida;
    }

    boolean verificaLista(){
        return ((primeiro+1)%arr.length==ultimo); //tem 1 elemento na lista
    }

    int retornaBase(){
        return arr[primeiro];
    }

}

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int n = Integer.parseInt(br.readLine());

        while (n != 0) {
            Lista lista = new Lista(n);
            int[] discarded = new int[n - 1];
            int indx = 0;

            while (!lista.verificaLista()) {
                discarded[indx++] = lista.operacao();
            }

            sb.append("Discarded cards:");

            for (int i = 0; i < n - 1; i++) {
                if (i == 0) sb.append(" ");
                else sb.append(", ");
                sb.append(discarded[i]);
            }
            sb.append('\n');

            sb.append("Remaining card: ").append(lista.retornaBase()).append('\n');

            n = Integer.parseInt(br.readLine());
        }

        System.out.print(sb.toString());
    }
}