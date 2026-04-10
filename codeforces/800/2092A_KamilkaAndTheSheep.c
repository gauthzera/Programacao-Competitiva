#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        long long x,maior,menor;

        for(int i=0;i<n;i++){
            scanf("%lld",&x);

            if(i==0){
                maior=x;
                menor=x;
            }else{
                if(x>maior)maior=x;
                if(x<menor)menor=x;
            }
        }

        printf("%lld\n",maior-menor);
        
    }
    
    return 0;
}