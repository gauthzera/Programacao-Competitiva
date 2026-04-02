#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        long long a[n];
        long long b[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%lld",&b[i]);
        }

        int i=0,j=0,q=0;
        while(i<n && j<n){
            if(a[i]<=b[j]){
                i++;
                j++;
            }else{
                j++; //mantem i e avança j
                q++;//adiciona um novo problema
            }
        }

        printf("%d\n",q);
    }
    
    return 0;
}