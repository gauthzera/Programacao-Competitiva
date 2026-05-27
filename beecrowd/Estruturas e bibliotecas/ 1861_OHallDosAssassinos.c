#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    char nome[11];
    int quant;
    struct No *esq,*dir;
}No;

No* criaNo(char nome[],int quant){
    No* n=malloc(sizeof(No));
    strcpy(n->nome,nome);
    n->quant=quant;
    n->esq=n->dir=NULL;
    return n;
}

No* inserir(No* raiz,char nome[],int quant){
    if(raiz==NULL){
        return criaNo(nome,quant);
    }
    
    if(strcmp(nome,raiz->nome)>0){
        raiz->dir=inserir(raiz->dir,nome,quant);
    }else if(strcmp(nome,raiz->nome)<0){
        raiz->esq=inserir(raiz->esq,nome,quant);
    }
    
    return raiz;
}

No* buscar(No* raiz,char nome[]){
    if(raiz==NULL)return NULL;

    if(strcmp(nome,raiz->nome)>0){
        return buscar(raiz->dir,nome);
    }else if(strcmp(nome,raiz->nome)<0){
        return buscar(raiz->esq,nome);
    }

    return raiz;
}

void infixo(No* raiz){
    if(raiz!=NULL){
        infixo(raiz->esq);
        if(raiz->quant!=-1)printf("%s %d\n",raiz->nome,raiz->quant);
        infixo(raiz->dir);
    }
};

int main(){
    char A[11],M[11];
    No* raiz=NULL;

    while(scanf("%s %s",A,M)==2){
       if(buscar(raiz,A)==NULL){
            raiz=inserir(raiz,A,1);
       }else if(buscar(raiz,A)!=NULL){
            No* n=buscar(raiz,A);
            if(n->quant!=-1)n->quant++;
       }
       if(buscar(raiz,M)==NULL){
            raiz=inserir(raiz,M,-1);
       }else{
            No* n=buscar(raiz,M);
            n->quant=-1;
       } 
    }
    printf("HALL OF MURDERERS\n");
    infixo(raiz);


    return 0; 
}
