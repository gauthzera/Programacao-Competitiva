import java.util.*;

public class Main {
public static void insertionSort(String arr[],int n){
    for(int i=1;i<n;i++){
        String key=arr[i];
        int j=i-1;
        while(j>=0 && (key.compareTo(arr[j])<0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        while(sc.hasNextInt()){
            int n=sc.nextInt();
            String[] nums=new String[n];
            for(int i=0;i<n;i++){
                nums[i]=sc.next();
            }
            insertionSort(nums,n);
            int tam=nums[0].length(); 
            int q=0;
            for(int i=1;i<n;i++){
                if(nums[i].charAt(0)==nums[i-1].charAt(0)){
                    q++;
                    for(int j=1;j<tam;j++){
                            if(nums[i].charAt(j)==nums[i-1].charAt(j)){
                                q++;
                            }else{
                                break;
                            }
                    }
                }else{
                    continue;
                }
                
            }
           System.out.println(q); 
        }

        sc.close();
    }
}