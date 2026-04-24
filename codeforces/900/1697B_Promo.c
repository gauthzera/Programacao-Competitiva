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
    int n,q;
    scanf("%d %d",&n,&q);
    int p[n+1];
    p[0]=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    
    quicksort(p,1,n);

    long long pSum[n+1];
    pSum[0]=0;
    for(int i=1;i<=n;i++){
        pSum[i]=pSum[i-1]+p[i];
    }
     
    int x,y;
    while(q--){
        scanf("%d %d",&x,&y);
        long long resp=pSum[n-x+y]-pSum[n-x];
        printf("%lld\n",resp);
    }
    
    return 0;
}