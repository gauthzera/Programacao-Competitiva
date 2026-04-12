import java.util.*;

public class Main {

    public static void insertionSort(String[] arr,int n){
        for(int i=1;i<n;i++){
            String key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j].length()<key.length()){ //ordena de acordo com tamanho da string
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.nextLine();
        
        while(n-- >0){
            String str=sc.nextLine();
            String[] arr=str.split(" "); //array com strings lidas
            
            insertionSort(arr,arr.length);
            
            for(int i=0;i<arr.length;i++){
                if(i==arr.length -1 ){
                    System.out.printf("%s\n",arr[i]);
                }else{
                    System.out.printf("%s ",arr[i]);
                }
            }

        }

        sc.close();
    }
}