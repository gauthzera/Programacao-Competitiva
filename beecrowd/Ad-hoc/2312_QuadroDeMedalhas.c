#include <stdio.h>  
#include <string.h>

typedef struct pais{
    char nome[50];
    int ouro;
    int prata;
    int bronze;
}pais;

int vemAntes(pais j,pais key){ //função para verificar qual país ficou em primeiro de acordo com as codições do enunciado
    if(j.ouro!=key.ouro) return j.ouro<key.ouro;
    if(j.prata!=key.prata) return j.prata<key.prata;
    if(j.bronze!=key.bronze) return j.bronze<key.bronze;

    return strcmp(j.nome,key.nome)>0;
}

void insertionSort(pais arr[],int n){ //insertionSort, ordena o vetor em ordem decrescente da ordem de medalhas, conforme enunciado
    for(int i=1;i<n;i++){
        pais key=arr[i];;
        int j=i-1;
        int x=0;

        while(j>=0 && vemAntes(arr[j],key)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
   int n;
   scanf("%d",&n);
    
   pais vet[n];
   
   for(int i=0;i<n;i++){
    scanf("%s %d %d %d",vet[i].nome,&vet[i].ouro,&vet[i].prata,&vet[i].bronze);
   }

    insertionSort(vet,n);
   for(int i=0;i<n;i++){
        printf("%s %d %d %d\n",vet[i].nome,vet[i].ouro,vet[i].prata,vet[i].bronze);
   }
    
    return 0;
}     
