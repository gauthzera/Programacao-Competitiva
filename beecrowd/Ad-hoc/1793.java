import java.util.Scanner;

public class Main {
    public static void main(String[] args){
    Scanner sc= new Scanner(System.in);

    int n;

    for(int i=0;i<30;i++) {
        int tempo = 10;
        
        n = sc.nextInt();
        
        if (n == 0) break;
        //vetor para armazenar os tempos
        int[] tempos = new int[n];
        //leitura dos tempos
        for (int j = 0; j < n; j++) {
            tempos[j] = sc.nextInt();
        }
        //contagem 
        for (int z = 1; z < n; z++) {
            if (tempos[z] - tempos[z - 1] >= 10) { 
                tempo += 10;
            } else {
                tempo += tempos[z] - tempos[z - 1];
            }

        }
        System.out.println(tempo);
    }
    sc.close();
    }
}
