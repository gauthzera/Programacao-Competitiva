#include <stdio.h>
#include <stdlib.h>

#define ll long long

int cmp(const void *a, const void *b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;

    return x - y;
}

int main(){
    ll n,l;
    scanf("%lld %lld",&n,&l);
    
    ll arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    
    qsort(arr, n, sizeof(ll), cmp); 
    
    double max=0; //raio necessário

    for(int i=0;i<n-1;i++){
        ll dist=arr[i+1]-arr[i]; //distancia entre lâmpadas
        if(dist/2.0>max)max=dist/2.0;
    }
    
    if(arr[0] > max)max=arr[0];
    if((l - arr[n-1]) > max)max=l-arr[n-1];

    printf("%.10f",max);
    
  	return 0;
}