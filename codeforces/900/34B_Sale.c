#include <stdio.h>

void quicksort(int arr[],int l,int r){
    int pivot=arr[(l+r)/2];
    int i=l;
    int j=r;
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
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    quicksort(arr,0,n-1);
    int q=0;
    for(int i=0;i<m;i++){
        if(arr[i]<0)q+=(-1*arr[i]);
    }
    
    printf("%d\n",q);
    return 0;
}
