import java.util.*;
 
  public class Main {
      public static void main(String[] args) {
      Locale.setDefault(Locale.US);
      Scanner sc= new Scanner(System.in);
  
        int[] arr=new int[5];
  
        boolean crescente=true;
        boolean descrescente=true;
  
      for(int i=0;i<5;i++){
          arr[i]=sc.nextInt();
      }
  
  
      for(int i=0;i<4;i++){
          if(arr[i]>arr[i+1])crescente=false;
          if(arr[i]<arr[i+1])descrescente=false;
      }
  
      if(crescente){
          System.out.println('C');
      }else if(descrescente){
          System.out.println('D');
      }else{
          System.out.println('N');
      }
  
  
     sc.close();
        }
   }