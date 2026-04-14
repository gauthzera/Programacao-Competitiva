#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int ordenado=1;
        long long num1=0,num2=0;

        for(int i=0;i<n;i++){
            scanf("%lld",&num1);
            if(i>0){
                if(num1<num2)ordenado=0;
            }
            num2=num1;
        }

        if(ordenado || k>=2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}
