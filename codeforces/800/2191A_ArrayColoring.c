#include <stdio.h>

typedef struct{
    int valor;
    int cor;
}num;

void insertionSort(num arr[],int n){
    for(int i=1;i<n;i++){
        num key=arr[i];
        int j=i-1;
        while(j>=0 && key.valor<arr[j].valor){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        num arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i].valor);
            arr[i].cor=i%2; //cor 1 ou 0 depenendo da posição do elemento
        }
        insertionSort(arr,n);    

        int resp=1;
        for(int i=0;i<n-1;i++){
            if(arr[i].cor==arr[i+1].cor){
                resp=0;
                break;
            }
        }
        if(resp){
                printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}