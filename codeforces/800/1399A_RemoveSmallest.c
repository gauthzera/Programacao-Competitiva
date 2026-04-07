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
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        quicksort(arr,0,n-1);
        
        int ok=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1)ok=0; //se for false é possível retirar o menor elemento do array
        }
        if(ok)printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}