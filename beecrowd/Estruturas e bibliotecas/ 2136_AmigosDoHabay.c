#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa{
    char nome[15];
    int pos;
    struct Pessoa* prox;
}Pessoa;

Pessoa* criaPessoa(char nome[],int pos){
    Pessoa* p=malloc(sizeof(Pessoa));
    strcpy(p->nome,nome);
    p->pos=pos;
    p->prox=NULL;
    return p;
}

typedef struct Lista{
    Pessoa* primeiro;
}Lista;

Lista* criaLista(){
    Lista* l=malloc(sizeof(Lista));
    l->primeiro=NULL;
    return l;
}

void inserir(Lista* l,char nome[],int pos){
    Pessoa* nova=criaPessoa(nome,pos);
    nova->prox=l->primeiro;
    l->primeiro=nova;
}

int buscar(Lista* l,char nome[]){
    for(Pessoa* i=l->primeiro;i!=NULL;i=i->prox){
        if(strcmp(i->nome,nome)==0)return 1;
    }
    return 0;
}

void mostrar(Lista* l){
    for(Pessoa* i=l->primeiro;i!=NULL;i=i->prox){
        printf("%s\n",i->nome);
    }
}

Pessoa* amigo(Lista* l){
    Pessoa* escolhido=l->primeiro;
    Pessoa* tmp=l->primeiro;
    while(tmp!=NULL){
        if(strlen(tmp->nome)>strlen(escolhido->nome)){
            escolhido=tmp;
        }else if(strlen(tmp->nome)==strlen(escolhido->nome) && tmp->pos<escolhido->pos){
            escolhido=tmp;
        }
        tmp=tmp->prox;
    }

    return escolhido;
}

void selectionSort(Lista* l){
    for(Pessoa* i=l->primeiro;i!=NULL;i=i->prox){
        Pessoa* aux=i;

        for(Pessoa* j=i->prox;j!=NULL;j=j->prox){
            if(strcmp(j->nome,aux->nome)<0){
                aux=j;
            }
        }
        char tmp[15];
        strcpy(tmp,i->nome);
        strcpy(i->nome,aux->nome);
        strcpy(aux->nome,tmp);
    } 
}

int main(){
    Lista* listaS=criaLista();
    Lista* listaN=criaLista();
    
    int pos=0;
    char nome[15];
    scanf("%s",nome);
    while(strcmp(nome,"FIM")!=0){
        char op[5];
        scanf("%s",op);
        if(op[0]=='Y'){
            if(!buscar(listaS,nome)){
                inserir(listaS,nome,pos++);
            }
        }else{
            inserir(listaN,nome,0);
        } 
        scanf("%s",nome);
    }

    char escolhido[15];
    strcpy(escolhido,amigo(listaS)->nome);
    selectionSort(listaS);
    selectionSort(listaN);
    mostrar(listaS);
    mostrar(listaN);
    printf("\nAmigo do Habay:\n%s\n",escolhido); 


    return 0;
}