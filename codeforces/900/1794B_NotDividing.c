#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        long long arr[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            if(arr[i]==1)arr[i]++;
        }
       
        for(int i=1;i<n;i++){
            if(arr[i]%arr[i-1]==0)arr[i]++;
        }
    
        for(int i=0;i<n;i++){
            printf("%lld ",arr[i]);
        }
       printf("\n"); 
    }
    
    return 0;
}
