import java.util.*;

public class Main {
public static int mdc(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
} 

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        
        while(n-- >0){
            int n1=sc.nextInt();
            sc.next();
            int d1=sc.nextInt();

            char op= sc.next().charAt(0);

            int n2=sc.nextInt();
            sc.next();
            int d2=sc.nextInt();
            
            int r1=0,r2;
            if(op=='+'){ //operações do enunciado 
                r1=(n1*d2 + n2*d1);
                r2=(d1*d2); 
            }else if(op=='-'){
                r1=(n1*d2 - n2*d1);
                r2=(d1*d2);
            }else if(op=='*'){
                r1=(n1*n2);
                r2=(d1*d2);
            }else{
                r1=(n1*d2);
                r2=(n2*d1);
            }
                   
            int mdc=mdc(Math.abs(r1),Math.abs(r2)); //mdc do numerador e denominados para simplificar

            int sr1=r1/mdc; //numerador e denominador simplificados
            int sr2=r2/mdc;
            if(sr2<0){
                sr2*=-1;
                sr1*=-1;
            }

            System.out.printf("%d/%d = %d/%d\n",r1,r2,sr1,sr2);
        }
        
        sc.close();
    }
}