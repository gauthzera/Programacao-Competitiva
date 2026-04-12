#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int* arr;
    int primeiro,ultimo;
    int tam;
}Fila;

Fila* criaFila(int x){
    Fila* fila=malloc(sizeof(Fila)); 
    fila->arr=malloc(sizeof(int)*(x+1));
    fila->primeiro=0;
    fila->ultimo=x;
    fila->tam=x+1;
    for(int i=0;i<x;i++){
        fila->arr[i]=x-i; //preenche fila
    }
    return fila;
}

int operacao(Fila* fila){
    fila->ultimo=(fila->ultimo-1+fila->tam)%fila->tam; 
    int removido=fila->arr[fila->ultimo]; //remove ultimo elemento voltando ultimo 1 posição

    fila->ultimo=(fila->ultimo-1+fila->tam)%fila->tam; 
    int novaBase=fila->arr[fila->ultimo]; //remove o penúltimo elemento
    fila->primeiro=(fila->primeiro-1+fila->tam)%fila->tam; //volta primeira 1 posição

    fila->arr[fila->primeiro]=novaBase; //coloca o penúltimo na primeira posição
    return removido;
}

int verifica(Fila* fila){
    if((fila->primeiro+1)%fila->tam == fila->ultimo)return 1; //verifica se só tem 1 elemento
    return 0;
}

int ultimaCarta(Fila* fila){
    return fila->arr[fila->primeiro];
}

int main() {
    int n;
    scanf("%d",&n);

    while(n!=0){
        Fila* fila= criaFila(n);
        int discartadas[n-1];
        int indx=0;
        while(!verifica(fila)){
            int carta=operacao(fila);
            discartadas[indx++]=carta;
        }

        printf("Discarded cards: ");
        for(int i=0;i<n-1;i++){
            if(i<n-2){
            printf("%d, ",discartadas[i]);
            }else{
            printf("%d\n",discartadas[i]);
            }
        }
        int ultima=ultimaCarta(fila);
        printf("Remaining card: %d\n",ultima);
       
        scanf("%d",&n);
    }

    return 0;
}