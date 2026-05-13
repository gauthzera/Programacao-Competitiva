#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Celula{
    int valor;
    struct Celula* prox;
}Celula;

Celula* criaCelula(int valor){
    Celula* c=malloc(sizeof(Celula));
    c->valor=valor;
    c->prox=NULL;
    return c;
}

typedef struct Pilha{
    Celula* topo;
    int menor;
}Pilha;

Pilha* criaPilha(){
    Pilha* p=malloc(sizeof(Pilha));
    p->topo=NULL;
    p->menor=-1;
    return p;
}

void empilhar(Pilha* p,int valor){
    Celula* nova=criaCelula(valor);
    nova->prox=p->topo;
    p->topo=nova;
    if(p->menor==-1 || valor<p->menor){
        p->menor=valor;
    }
}

void desempilhar(Pilha* p){
    if(p->topo==NULL){
       printf("EMPTY\n");
       return;
    }
    Celula* tmp=p->topo;
    p->topo=tmp->prox;
    if(p->menor==tmp->valor){
            if(p->topo==NULL){
                p->menor=-1;
            }else{
                int menor=p->topo->valor;
                for(Celula* i=p->topo;i!=NULL;i=i->prox){
                    if(i->valor<menor)menor=i->valor;
                }
                p->menor=menor;
            }
    }
    free(tmp);
}

void min(Pilha* p){
    if(p->menor==-1)printf("EMPTY\n");
    else printf("%d\n",p->menor);
}

int main(){
    int n;
    scanf("%d",&n);
    
    Pilha* p=criaPilha();

    while(n--){
        char op[5];
        scanf("%s",op);
        
        if(strcmp(op,"PUSH")==0){
            int valor;
            scanf("%d",&valor);
            empilhar(p,valor);
        }else if(strcmp(op,"POP")==0){
            desempilhar(p);
        }else if(strcmp(op,"MIN")==0){
            min(p);
        }

    }

    return 0; 
}
