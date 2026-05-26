#include <stdio.h>
#include <stdlib.h>

#define ll long long

int cmp(const void *a, const void *b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;
 
    return x - y;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
        
    ll arr[n];
    for(int i=0;i<n;i++){
       scanf("%lld",&arr[i]);
    }
    
    qsort(arr, n, sizeof(ll), cmp);
    
    if(k>n){
        printf("-1\n");
    }else if(k==1){
        printf("%lld 0\n",arr[n-1]);
    }else{
        printf("%lld 0\n",arr[n-k]);
    }
    
    return 0;
}
