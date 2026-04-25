#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Pacote{
    char num[4];
   struct Pacote* prox;
}Pacote;

Pacote* criaPacote(char s[]){
    Pacote* p=malloc(sizeof(Pacote));
    strcpy(p->num,s);
    p->prox=NULL;
    return p;
}

typedef struct Lista{
    Pacote* primeiro;
}Lista;

Lista* criaLista(){
    Lista* l=malloc(sizeof(Lista));
    l->primeiro=NULL;
    return l;
}

void inserir(Lista* lista,char s[]){
    Pacote* novo=criaPacote(s);
    novo->prox=lista->primeiro;
    lista->primeiro=novo;
}

void mostrar(Lista* l){
        Pacote* aux=l->primeiro;
        while(aux!=NULL){
            printf("Package %s\n",aux->num);
            aux=aux->prox;
        }
}

void ordenaLista(Lista* l){ //selectionSort
    for(Pacote* i=l->primeiro;i!=NULL;i=i->prox){
        Pacote* min=i;

        for(Pacote* j=i->prox;j!=NULL;j=j->prox){
            if(strcmp(j->num,min->num)<0){
                min=j;
            }
        }
        char tmp[4]; //troca de num
        strcpy(tmp,i->num);
        strcpy(i->num,min->num);
        strcpy(min->num,tmp);

    }
}

int main(){
    int op;
    
    while(scanf("%d",&op)!=EOF){
        Lista* l=criaLista();
        char num[4],p[8];
        scanf("%s",p); //lê o package

        while(p[0]!='0'){
            scanf("%s",num);
            inserir(l,num);
            scanf("%s",p);
        }
        ordenaLista(l);
        mostrar(l);
        printf("\n");
    }
    
    return 0;
}