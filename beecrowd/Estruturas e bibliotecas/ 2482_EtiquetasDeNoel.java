import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        String[][] linguas=new String[n][2];

        for(int i=0;i<n;i++){
            linguas[i][0]=sc.next();
            sc.nextLine();
            linguas[i][1]=sc.nextLine();
        }

        int m=sc.nextInt();

        for(int i=0;i<m;i++){
            sc.nextLine();
            String nome=sc.nextLine();
            String lingua=sc.next();
            System.out.println(nome);

            for(int j=0;j<n;j++){
                    if(lingua.equals(linguas[j][0])){
                        System.out.println(linguas[j][1] + '\n');
                    }
            }
        }

        sc.close();
    }
}
