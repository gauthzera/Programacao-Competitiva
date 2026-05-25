#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
    int n;
    long long a;
    scanf("%d %lld",&n,&a);
    
    long long arr[n];
    
    int qI=0,qM=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        if(arr[i]>a)qM++;
        if(arr[i]<a)qI++;
    }
    
    if(qI>qM){
        printf("%lld\n",a-1);
    }else{
        printf("%lld\n",a+1);
    }

    }
    
    return 0;
}