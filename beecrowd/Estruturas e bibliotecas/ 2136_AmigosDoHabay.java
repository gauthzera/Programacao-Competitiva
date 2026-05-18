import java.util.*;

class Pessoa{
    String nome;
    int pos;
    Pessoa prox;

    Pessoa(String nome,int pos){
        this.nome=nome;
        this.pos=pos;
        this.prox=null;
    }
}

class Lista{
    Pessoa primeiro;

    Lista(){
        this.primeiro=null;
    }

    void inserir(String nome,int pos){
        Pessoa nova=new Pessoa(nome,pos);
        nova.prox=primeiro;
        primeiro=nova;
    }
    
    boolean buscar(String nome){
        for(Pessoa i=primeiro;i!=null;i=i.prox){
            if(i.nome.compareTo(nome)==0)return true;
        }
        return false;
    }

    String amigo(){
        Pessoa aux=primeiro;

        Pessoa tmp=primeiro;

        while(tmp!=null){
            if(tmp.nome.length()>aux.nome.length()){
                aux=tmp;
                }else if(tmp.nome.length()==aux.nome.length() && tmp.pos<aux.pos){
                aux=tmp;
            }
            tmp=tmp.prox;
        }
        return aux.nome;
    }

    void mostrar(){
        for(Pessoa i=primeiro;i!=null;i=i.prox){
            System.out.println(i.nome);
    }
    }

    void selectionSort(){
    for(Pessoa i=primeiro;i!=null;i=i.prox){
        Pessoa aux=i;
        for(Pessoa j=i.prox;j!=null;j=j.prox){
            if(j.nome.compareTo(aux.nome)<0)aux=j;
        }
        String tmp=aux.nome;
        int postmp=aux.pos;

        aux.nome=i.nome;
        aux.pos=i.pos;

        i.nome=tmp;
        i.pos=postmp;
    }
}

  
}


public class Main {

public static void main(String[] args){
        Scanner sc=new Scanner(System.in); 
        Lista listaS=new Lista();
        Lista listaN=new Lista();
        
        int pos=0;
        String nome=sc.next();
        while(nome.compareTo("FIM")!=0){
         
            String op=sc.next();

            if(op.compareTo("NO")==0){
                listaN.inserir(nome,0);
            }else{
                if(!(listaS.buscar(nome))){
                    listaS.inserir(nome,pos++);
                }
            }
            nome=sc.next();
        }

    
        String amigo=listaS.amigo();

        listaS.selectionSort();
        listaN.selectionSort();

        listaS.mostrar();
        listaN.mostrar();
        System.out.println();

        System.out.printf("Amigo do Habay:\n%s\n",amigo);

        sc.close();
    }
}