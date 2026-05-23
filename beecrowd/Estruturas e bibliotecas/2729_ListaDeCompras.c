#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    char item[21];
    struct No *esq,*dir;
}No;

No* criaNo(char item[]){
    No* n=malloc(sizeof(No));
    strcpy(n->item,item);
    n->esq=n->dir=NULL;
    return n;
}

No* inserir(No* raiz,char item[]){
    if(raiz==NULL){
        return criaNo(item);
    }

    if(strcmp(item,raiz->item)>0){
        raiz->dir=inserir(raiz->dir,item);
    }else if(strcmp(item,raiz->item)<0){
        raiz->esq=inserir(raiz->esq,item);
    }
    
    //não adiciona repetidos
    return raiz;
}

void infixo(No* raiz,int *primeiro){
    if(raiz!=NULL){
        infixo(raiz->esq,primeiro);

        if(*primeiro==1){
            printf("%s",raiz->item);
            *primeiro=0;
        }else{
            printf(" %s",raiz->item);
        }

        infixo(raiz->dir,primeiro);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    
    getchar();
    char itens[21000]; //todos os possíveis itens

    while(n--){
        No* raiz=NULL;
        char item[21];
        int indx1=0,indx2=0;

        fgets(itens,21000,stdin);

        while(itens[indx1]!='\0'){

            if(itens[indx1]!=' ' && itens[indx1]!='\n'){
                item[indx2++]=itens[indx1++];
            }else{

                item[indx2]='\0'; //foram item por item e adiciona na árvore
                indx2=0;
                raiz=inserir(raiz,item);
                indx1++;
            }

        }

        int primeiro=1; //só para não dar o presentation error do beecrowd

        infixo(raiz,&primeiro); //imprime elementos ordenados
        printf("\n");

    } 
    
 	return 0;
}