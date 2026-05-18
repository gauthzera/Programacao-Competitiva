#include <stdio.h>

typedef struct intervalo{
    int u,v;
}intervalo;

void insertionSort(intervalo arr[],int s){
    for(int i=1;i<s;i++){
        intervalo x=arr[i];
        int j=i-1;
        while(j>=0 && arr[j].u>x.u){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=x;
    }
}

int main(){
    int p,s;
    scanf("%d %d",&p,&s);
       
    int teste=1;
    while(!(p==0 && s==0)){
        intervalo arr[s];
        for(int i=0;i<s;i++){
            scanf("%d %d",&arr[i].u,&arr[i].v);
        }
       
        insertionSort(arr,s);
        int novoU=0,novoV=0;

        if(s>0){
           novoU=arr[0].u;
           novoV=arr[0].v;
        }    

        printf("Teste %d\n",teste++);
        for(int i=1;i<s;i++){
            if(novoV >= arr[i].u){
                novoV= (novoV > arr[i].v) ? novoV : arr[i].v; //verifica a interseção entre os intervalos
            }else{
                printf("%d %d\n",novoU,novoV);
                novoU=arr[i].u;
                novoV=arr[i].v;
            }
       }

        printf("%d %d\n\n",novoU,novoV);

        scanf("%d %d",&p,&s);
    }
    
    return 0;
}