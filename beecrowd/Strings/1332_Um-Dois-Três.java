import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            String num=sc.next();
            if(num.length()>3){
                System.out.println("3");
            }else{
                if((num.charAt(1)=='n' && num.charAt(2)=='e') || (num.charAt(0)=='o' && num.charAt(1)=='n') || num.charAt(0)=='o' && num.charAt(2)=='e'){
                    System.out.println("1");
                }else{
                    System.out.println("2");
                }
            }
        }
        
        sc.close();
    }
}
