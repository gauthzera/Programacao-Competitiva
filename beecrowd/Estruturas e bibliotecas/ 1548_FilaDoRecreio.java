import java.util.*;

public class Main {

public static void insertionSort(int[] arr,int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key>arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n=sc.nextInt();

        while(n-- >0){
            int m=sc.nextInt();
            int[] alunos=new int[m];
            int[] aux=new int[m];
            for(int i=0;i<m;i++){
                alunos[i]=sc.nextInt();
                aux[i]=alunos[i];
            }
            
            insertionSort(alunos,m);

            int q=0;
            for(int i=0;i<m;i++){
                if(aux[i]==alunos[i])q++;
            }
            System.out.println(q);
        }
        
        
        sc.close();
    }
}
