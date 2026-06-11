#include <stdio.h>

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int comando;
    
    while(scanf("%d",&comando)!=EOF){
        char p[20];
        int num,qtd=0;
        int arr[1000];
        
        scanf("%s",p);
        while(p[0]!='0'){
            scanf("%d",&arr[qtd++]);
            scanf("%s",p);
        }

        insertionSort(arr,qtd);
        
        for(int i=0;i<qtd;i++){
            printf("Package %.03d\n",arr[i]);
        }
        printf("\n");
    }

    return 0; 
}
