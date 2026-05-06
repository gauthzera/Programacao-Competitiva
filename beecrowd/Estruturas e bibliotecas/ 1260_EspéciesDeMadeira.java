import java.util.*;

class No{
    String nome;
    int freq;
    No dir,esq;

    No(String x){
        this.nome=x;
        this.freq=1;
        this.dir=null;
        this.esq=null;
    }
}

class Arvore{
    No raiz;
    int total;

    Arvore(){
        this.raiz=null;
    }
    
    No inserir(No raiz,String x){
        if(raiz==null){
            total++;
            return new No(x);
        }
        
        if(x.compareTo(raiz.nome)==0){
            raiz.freq++;
            total++;
        }else if(x.compareTo(raiz.nome)<0){
            raiz.esq=inserir(raiz.esq,x);
        }else{
            raiz.dir=inserir(raiz.dir,x);
        }
        return raiz;
    }

    void inserir(String x){
        this.raiz=inserir(raiz,x);
    }

    void infixo(No raiz){
        Locale.setDefault(Locale.US);
        if(raiz!=null){
            infixo(raiz.esq);
            System.out.printf("%s %.4f\n",raiz.nome,100* (double)raiz.freq/this.total);
            infixo(raiz.dir);
        }
    }
}


public class Main {
public static void main(String[] args){
        Scanner sc=new Scanner(System.in); 
            
        int n=sc.nextInt();
        sc.nextLine();
        sc.nextLine();
        for(int caso=0;caso<n;caso++){
            Arvore a=new Arvore();
            while(sc.hasNextLine()){
                String nome=sc.nextLine();

                if(nome.length()==0)break;

                a.inserir(nome);
            }

            a.infixo(a.raiz);
            if(caso<n-1)System.out.println();

        }
        
        sc.close();
    }
}