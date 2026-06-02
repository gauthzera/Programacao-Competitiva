#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int arr[],int l,int r){
    int i=l,j=r;
    int p=l + rand() % (r - l + 1);
    int pivot=arr[p];

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

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    srand(1);
    quicksort(arr,0,n-1);

    int l=0,q=0;
    for(int r=0;r<n;r++){ //sliding window
        while(arr[r] - arr[l] > 5)l++;

        int tam=r-l+1; //tamanho da janela

        if(tam>q)q=tam;
    }
    
    printf("%d\n",q);

    return 0;
}
