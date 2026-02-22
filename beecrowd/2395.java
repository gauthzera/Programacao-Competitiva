import java.util.*;
 
 public class Main {
     public static void main(String[] args) {
     Locale.setDefault(Locale.US);
     Scanner sc=new Scanner(System.in);
 
     int a,b,c;
     a=sc.nextInt();
     b=sc.nextInt();
     c=sc.nextInt();
     int x,y,z;
     x=sc.nextInt();
     y=sc.nextInt();
     z=sc.nextInt();
 
     int qZ=z/c; //quantidade de containers que a altura é <= z
 
     int qXY=(x/a) * (y/b); //containers em x e y
 
     int result= qZ*qXY;
 
     System.out.println(result);
 

     sc.close();
       }
  }