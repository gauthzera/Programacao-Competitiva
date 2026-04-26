import java.util.*;

public class Main {
public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.nextLine();
        while(n-- >0){
            String s1=sc.nextLine();
            String s2=sc.nextLine();
            String f="";
            
            int indx1=0,indx2=0;

            while(indx1<s1.length() && indx2<s2.length()){

                f+=s1.charAt(indx1++);
                if(indx1<s1.length()){
                    f+=s1.charAt(indx1++);
                }

                f+=s2.charAt(indx2++);
                if(indx2<s2.length()){
                    f+=s2.charAt(indx2++);
                }
            }

            System.out.println(f);
        }
        
        sc.close();
    }
}