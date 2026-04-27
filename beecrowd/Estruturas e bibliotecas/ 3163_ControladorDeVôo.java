import java.util.*;

class Aviao{
    String valor;
    Aviao prox;

    Aviao(String s){
        this.valor=s;
        this.prox=null;
    }
}

class Fila{
    Aviao primeiro,ultimo;

    Fila(){
        this.primeiro=null;
        this.ultimo=null;
    }

    void inserir(String s){
        Aviao novo=new Aviao(s);
        if(primeiro==null){

            primeiro=novo;
            ultimo=novo;
            return;
    }
    ultimo.prox=novo;
    ultimo=ultimo.prox;
}

void remover(){
    if(primeiro==null)return;
    Aviao tmp=primeiro;
    primeiro=primeiro.prox;
    tmp=null;
}

void mostrar(){
    Aviao a=primeiro;
    while(a!=null){

        if(a.prox==null){
        System.out.printf("%s\n",a.valor);
        }else{
        System.out.printf("%s ",a.valor);
        }
        a=a.prox;
    }

}

boolean isVazia(){
    return primeiro==null;
}

}

public class Main {
public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String p=sc.next();
        Fila norte=new Fila();
        Fila sul=new Fila();
        Fila leste=new Fila();
        Fila oeste=new Fila();

        Fila fim=new Fila();

        while(!p.equals("0")){
            String valor;
            if(p.equals("-4")){
                valor=sc.next();
                while(valor.charAt(0)!='-' && valor.charAt(0)!='0'){
                    leste.inserir(valor);
                    valor=sc.next();
                }
                p=valor;
            }else if(p.equals("-3")){
                valor=sc.next();
                while(valor.charAt(0)!='-' && valor.charAt(0)!='0'){
                    norte.inserir(valor);
                    valor=sc.next();
                }
                p=valor;
            }else if(p.equals("-2")){
                valor=sc.next();
                while(valor.charAt(0)!='-' && valor.charAt(0)!='0'){
                    sul.inserir(valor);
                     valor=sc.next();
                }
                p=valor;
            }else if(p.equals("-1")){
                valor=sc.next();
                while(valor.charAt(0)!='-' && valor.charAt(0)!='0'){
                    oeste.inserir(valor);
                    valor=sc.next();
                }
                p=valor;
            }
        }
        
        while(!(norte.isVazia() && leste.isVazia() && oeste.isVazia() && sul.isVazia())){
                if(!oeste.isVazia()){
                    fim.inserir(oeste.primeiro.valor);
                    oeste.remover();
                }
                if(!norte.isVazia()){
                    fim.inserir(norte.primeiro.valor);
                    norte.remover();
                }
                if(!sul.isVazia()){
                    fim.inserir(sul.primeiro.valor);
                    sul.remover();
                }
                if(!leste.isVazia()){
                    fim.inserir(leste.primeiro.valor);
                    leste.remover();
                }
        } 
        fim.mostrar();

        sc.close();
    }
}