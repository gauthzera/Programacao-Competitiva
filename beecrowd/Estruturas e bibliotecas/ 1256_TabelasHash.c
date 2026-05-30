#include <stdio.h>
#include <stdlib.h>

//LISTA ENCADEADA
typedef struct Celula{
    int valor;
    struct Celula *prox;
}Celula;

Celula* criaCelula(int valor){
    Celula* c=malloc(sizeof(Celula));
    c->valor=valor;
    c->prox=NULL;
    return c;
}

typedef struct Lista{
    Celula *primeiro;
    Celula *ultimo;
}Lista;

Lista* criaLista(){
    Lista* l=malloc(sizeof(Lista));
    l->primeiro=NULL;
    l->ultimo=NULL;
    return l;
}

void inserir(Lista *l,int valor){
    Celula* c=criaCelula(valor);
    if(l->primeiro==NULL){
        l->primeiro=c;
        l->ultimo=c;
        return;
    } 
    l->ultimo->prox=c; //insere no fim da lista
    l->ultimo=c; 
}

void mostrar(Lista *l){
    Celula* aux=l->primeiro;

    while(aux!=NULL){
        printf("%d -> ",aux->valor);
        aux=aux->prox;
    }
    printf("\\\n");

}

int main(){
    int n;
    scanf("%d",&n);

    while(n--){
        int m,c;
        scanf("%d %d",&m,&c);

        Lista* arr[m]; //array de listas

        for(int i=0;i<m;i++){
            arr[i]=criaLista();
        }

        for(int i=0;i<c;i++){
            int num;
            scanf("%d",&num);
            int h=num%m; 
            
            inserir(arr[h],num); //adiciona na lista h
        }
    

        for(int i=0;i<m;i++){
            printf("%d -> ",i);
            mostrar(arr[i]);
        }
        if(n!=0)printf("\n");
    }

  	return 0;
}