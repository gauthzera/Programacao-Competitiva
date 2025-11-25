#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld",&n);

    int q=0;

    while(n!=0){
        int resto=n%10;
        if(resto==4 || resto==7)q++;
        n=n/10;
    }

    if(q==4 || q==7){
        printf("YES");
    }else{
        printf("NO");
    }

return 0;
}
