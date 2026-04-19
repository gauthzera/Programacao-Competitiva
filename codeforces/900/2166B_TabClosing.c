#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        long long a,b,n;
        scanf("%lld %lld %lld",&a,&b,&n);
        if(a==b || a/n>=b ){
            printf("1\n");
        }else{
            printf("2\n");
        }

    }

    return 0;
}

