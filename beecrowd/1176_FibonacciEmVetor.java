import java.util.*;
   
   public class Main {
       public static long fib(long x,long y,int n){ //retorna long para valores grandes de n
           if(n==0) return x;

           if(n==1) return y;
    
           return fib(y,x+y,n-1);   //x vira y e y vira (x+y)
  
      }
  
      public static void main(String[] args) {
      Locale.setDefault(Locale.US);
      Scanner sc= new Scanner(System.in);
  
      int t=sc.nextInt();
      int n; //quantidade de passos do fibonacci
  
      while(t-- >0){
       n=sc.nextInt();
       System.out.printf("Fib(%d) = %d\n",n,fib(0,1,n));
      }
  
 
      sc.close();
        }
   }