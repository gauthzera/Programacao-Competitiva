import java.util.*;

public class Main {
public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();   
        
        int q=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                q++;
            }else if(s.charAt(i)==')' && q!=0){
                q--;
            }
        }
        if(q==0){
            System.out.println("Partiu RU!");
        }else{
            System.out.printf("Ainda temos %d assunto(s) pendente(s)!\n",q);
        }

        sc.close();
    }
}