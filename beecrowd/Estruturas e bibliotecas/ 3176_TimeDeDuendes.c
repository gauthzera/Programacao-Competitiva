#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Duende{
    char nome[21];
    int idade;
}Duende;

void selectionSort(Duende arr[],int n){ //guardo a posição
    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i+1;j<n;j++){
            if(arr[j].idade > arr[k].idade){
                k=j;
            }else if(arr[j].idade == arr[k].idade && strcmp(arr[j].nome,arr[k].nome)<0){
                k=j;
            }
        }
        Duende tmp=arr[i];
        arr[i]=arr[k];
        arr[k]=tmp;
    }
}

int main(){
    int n;
    scanf("%d",&n);

    Duende arr[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",arr[i].nome,&arr[i].idade);
    }
    
    selectionSort(arr,n);

    int times=1;
    for(int i=0;i<n/3;i++){ //depois da ordenação os primeiros 1/3 serão de líderes
        printf("Time %d\n",times++);
        printf("%s %d\n",arr[i].nome,arr[i].idade);
        printf("%s %d\n",arr[i + (n/3)*1].nome, arr[i + (n/3)*1].idade);
        printf("%s %d\n\n",arr[i + (n/3)*2].nome, arr[i + (n/3)*2].idade);
    }

    return 0;
}