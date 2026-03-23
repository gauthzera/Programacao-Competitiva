#include <stdio.h>
//objetivo: não usar a biblioteca string.h

typedef struct crianca{
    char nome[21];
    char comp;

}crianca;

int verificaOrdem(crianca k,crianca j){ //verifica ordem lexicográfica, sem usar strcmp
    int i=0;
    while(k.nome[i]!='\0' && j.nome[i]!='\0'){
        if(k.nome[i] < j.nome[i])return 1;
        if(k.nome[i]>j.nome[i])return 0;
        i++;
    }
    if(j.nome[i]!='\0')return 0; 
    return 1;
}

void insertionSort(crianca arr[],int n){
    for(int i=1;i<n;i++){
        crianca key=arr[i];
        int j=i-1;
        while(j>=0 && verificaOrdem(key,arr[j])){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
        int n;
        scanf("%d",&n);

        crianca arr[n];
        int sComp=0,nComp=0;
        for(int i=0;i<n;i++){
            scanf(" %c %s",&arr[i].comp,arr[i].nome);
            if(arr[i].comp=='+')sComp++;
            else nComp++;
        }
        
        insertionSort(arr,n);
        
        for(int i=0;i<n;i++){
            printf("%s\n",arr[i].nome);
        }
        printf("Se comportaram: %d | Nao se comportaram: %d\n",sComp,nComp);

    return 0;
}
