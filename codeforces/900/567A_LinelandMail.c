#include <stdio.h>

long long int fMin(long long a,long long b){
    return a<b ? a : b;
}

long long fMax(long long a,long long b){
    return a>b ? a : b;
}

int main(){
    int n;
    scanf("%d",&n);

    long long int arr[n];

    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        long long int min,max;
        if(i==0){
            min=arr[i+1]-arr[i];
            max=arr[n-1]-arr[i];
        }else if(i==n-1){
            min=arr[i]-arr[i-1];
            max=arr[i]-arr[0];
        }else{
            min=fMin(arr[i]-arr[i-1],arr[i+1]-arr[i]);
            max=fMax(arr[i]-arr[0],arr[n-1]-arr[i]);
        }
        printf("%lld %lld\n",min,max);
    }
    
    return 0;
}
