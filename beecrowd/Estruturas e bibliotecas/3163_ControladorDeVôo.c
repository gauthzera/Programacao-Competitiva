#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Celula{
    char valor[6];
    struct Celula* prox;
}Celula;

Celula* criaCelula(char s[]){
    Celula* c=malloc(sizeof(Celula));
    strcpy(c->valor,s);
    c->prox=NULL;
    return c;
}

typedef struct Fila{
    Celula* primeiro;
    Celula* ultimo;
}Fila;

Fila* criaFila(){
    Fila* f=malloc(sizeof(Fila));
    f->primeiro=NULL;
    f->ultimo=NULL;
    return f;
}

void inserir(Fila* f,char s[]){
    Celula* nova=criaCelula(s);
    if(f->primeiro==NULL){
        f->primeiro=nova;
        f->ultimo=nova;
        return;
    }
    f->ultimo->prox=nova;
    f->ultimo=nova;
}

void remover(Fila* f){
        if(f->primeiro==NULL)return;
        Celula* tmp=f->primeiro;
        f->primeiro=f->primeiro->prox;
        if(f->primeiro==NULL){
            f->ultimo=NULL;
        }
        free(tmp);
}

int isVazia(Fila* f){
    if(f->primeiro==NULL)return 1;
    
    return 0;
}

void mostrar(Fila* f){
    if(f->primeiro==NULL)return;
    Celula* aux=f->primeiro;
    while(aux!=NULL){
        if(aux->prox==NULL){
            printf("%s",aux->valor);
        }else{
            printf("%s ",aux->valor); 
        }
        aux=aux->prox;
    }
    printf("\n");
}

int main(){
    char p[6];

    Fila* norte=criaFila();
    Fila* sul=criaFila();
    Fila* oeste=criaFila();
    Fila* leste=criaFila();

    Fila* final=criaFila(); //fila fila na ordem certa

    scanf("%s",p);

    while(p[0]!='0'){
        char valor[6];
        if(p[0]=='-' && p[1]=='4'){ //leste
            scanf("%s",valor);
            while(valor[0]!='-' && valor[0]!='0'){
                inserir(leste,valor);
                scanf("%s",valor);
            }
            strcpy(p,valor);
            
        }else  if(p[0]=='-' && p[1]=='3'){ //norte
            scanf("%s",valor);
            while(valor[0]!='-' && valor[0]!='0' ){
                inserir(norte,valor);
                scanf("%s",valor);
            }
            strcpy(p,valor);
        }else  if(p[0]=='-' && p[1]=='2'){ //sul
            scanf("%s",valor);
            while(valor[0]!='-' && valor[0]!='0' ){
                inserir(sul,valor);
                scanf("%s",valor);
            }
            strcpy(p,valor);
        }else  if(p[0]=='-' && p[1]=='1'){ //oeste
            scanf("%s",valor);
            while(valor[0]!='-' && valor[0]!='0'){
                inserir(oeste,valor);
                scanf("%s",valor);
            }
            strcpy(p,valor);
        }
    }


    while(1){
        if(!isVazia(oeste)){
           inserir(final,oeste->primeiro->valor);
           remover(oeste);
        }
         if(!isVazia(norte)){
           inserir(final,norte->primeiro->valor);
           remover(norte);
        }
        if(!isVazia(sul)){
           inserir(final,sul->primeiro->valor);
           remover(sul);
        }
         if(!isVazia(leste)){
           inserir(final,leste->primeiro->valor);
           remover(leste);
        }
        if(isVazia(norte) && isVazia(sul) && isVazia(leste) && isVazia(oeste))break; //todos os listas vazias
    }

    mostrar(final);
    
    return 0;
}
