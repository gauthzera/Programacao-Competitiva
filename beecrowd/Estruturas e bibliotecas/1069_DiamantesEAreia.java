import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        
        while(n-- >0){
        String s=sc.next();
        
        int abre=0,q=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='<'){
                abre++;
            }else if(s.charAt(i)=='>'){
                if(abre!=0){
                    q++;
                    abre--;
                }
            }
        }
        System.out.println(q);
        }

        sc.close();
    }
}
