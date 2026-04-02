import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        while(sc.hasNext()){
            String str=sc.nextLine();
            String newStr="";
            int min=1;
            for(int i=0;i<str.length();i++){
                char c=str.charAt(i);
                if(c!=' '){
                    if(min==1){
                        if(c>='a' && c<='z')c-=32;
                        min=0;
                    }else{
                        if(c>='A' && c<='Z')c+=32;
                        min=1;
                    }
                }
                newStr+=c;
            }
            System.out.println(newStr);
        }

        sc.close();
    }
}
