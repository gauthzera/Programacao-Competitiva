#include <stdio.h>

void quicksort(int arr[],int l,int r){
    int i=l,j=r;
    int pivot=arr[(l+r)/2];

    while(i<=j){
        while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;
        
        if(i<=j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if(i<r)quicksort(arr,i,r);
    if(j>l)quicksort(arr,l,j); 
}

int main(){
    int n;
    scanf("%d",&n);
    int pares[n],impares[n];
    int indxP=0,indxI=0; //tamanho final dos arrays
    while(n--){
        int num;
        scanf("%d",&num);

        if(num%2==0)pares[indxP++]=num;
        else impares[indxI++]=num;
        }

        quicksort(pares,0,indxP-1);
        quicksort(impares,0,indxI-1);

        for(int i=0;i<indxP;i++){
            printf("%d\n",pares[i]);
        }

        for(int i=indxI-1;i>=0;i--){
            printf("%d\n",impares[i]);
        }
    
    return 0;
}