#include <stdio.h>

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int a,d;

    scanf("%d %d",&a,&d);
    while(!(a==0 && d==0)){
        int distA[a]; //distancia dos atacantes
        for(int i=0;i<a;i++){
            scanf("%d",&distA[i]);
        }
        int distD[d]; //distancia dos defensores
        for(int i=0;i<d;i++){
            scanf("%d",&distD[i]);
        }

    insertionSort(distA,a);
    insertionSort(distD,d);

        if(distA[0]<distD[1])printf("Y\n");
        else printf("N\n");
        scanf("%d %d",&a,&d);
    }


    return 0;
}
