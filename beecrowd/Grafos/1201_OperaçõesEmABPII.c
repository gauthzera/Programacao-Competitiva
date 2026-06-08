#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    int valor;
    struct No *esq,*dir;
}No;

int primeiro=1; //para não dar presentation error

No* criaNo(int valor){
    No* n=malloc(sizeof(No));
    n->valor=valor;
    n->esq=n->dir=NULL;
    return n;
}

No* inserir(No* raiz,int valor){
    if(raiz==NULL){
        return criaNo(valor);
    }

    if(valor>raiz->valor){
        raiz->dir=inserir(raiz->dir,valor);
    }else if(valor<raiz->valor){
        raiz->esq=inserir(raiz->esq,valor);
    }
    return raiz;
}

int buscar(No* raiz,int valor){
    if(raiz==NULL)return 0;

    if(valor>raiz->valor){
        return buscar(raiz->dir,valor);
    }else if(valor<raiz->valor){
        return buscar(raiz->esq,valor);
    }
    return 1;
}

No* remover(No* raiz,int valor){
    if(raiz==NULL)return NULL;

    if(valor>raiz->valor){
        raiz->dir=remover(raiz->dir,valor);
    }else if(valor<raiz->valor){
        raiz->esq=remover(raiz->esq,valor);
    }else{
        if(raiz->esq==NULL && raiz->dir==NULL){
            free(raiz);
            return NULL;
        }else if(raiz->esq==NULL){
            No* tmp=raiz->dir;
            free(raiz);
            return tmp;
        }else if(raiz->dir==NULL){
            No* tmp=raiz->esq;
            free(raiz);
            return tmp;
        }else{
            No* tmp=raiz->esq;
            while(tmp->dir!=NULL){
                tmp=tmp->dir;
            }
            raiz->valor=tmp->valor;
            raiz->esq=remover(raiz->esq,tmp->valor);
        }
    }
    return raiz;
}

void infixa(No* raiz){
    if(raiz!=NULL){
        infixa(raiz->esq);
        if(primeiro){
            printf("%d",raiz->valor);
            primeiro=0;
        }else{
            printf(" %d",raiz->valor);
        }
        infixa(raiz->dir);
    }
}

void prefixa(No* raiz){
    if(raiz!=NULL){
        if(primeiro){
            printf("%d",raiz->valor);
            primeiro=0;
        }else{
            printf(" %d",raiz->valor);
        }
        prefixa(raiz->esq);
        prefixa(raiz->dir);
    }
}

void posfixa(No* raiz){
    if(raiz!=NULL){
        posfixa(raiz->esq);
        posfixa(raiz->dir);

        if(primeiro){
            printf("%d",raiz->valor);
            primeiro=0;
        }else{
            printf(" %d",raiz->valor);
        }
     }
}

int main() {
    char comando[20];
    
    No* raiz=NULL;

    while(scanf("%s",comando)!=EOF){
        if(strcmp(comando,"I")==0 || strcmp(comando,"R")==0 || strcmp(comando,"P")==0){
            int num;
            scanf("%d",&num);

            if(comando[0]=='I'){
               raiz=inserir(raiz,num) ;
            }else if(comando[0]=='R'){
                raiz=remover(raiz,num);
            }else{
                if(buscar(raiz,num)){
                    printf("%d existe\n",num);
                }else{
                    printf("%d nao existe\n",num);
                }
            }
        }else{
            if(strcmp(comando,"INFIXA")==0){
                primeiro=1;
                infixa(raiz);
                printf("\n");
            }else if(strcmp(comando,"PREFIXA")==0){
                primeiro=1;
                prefixa(raiz);
                printf("\n");
            }else{
                primeiro=1;
                posfixa(raiz);
                printf("\n");
            }

        }
    }
    
    return 0;
}
