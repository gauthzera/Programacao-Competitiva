#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int d=0,s=0; //meias diferentes e iguais

    while(a!=0 && b!=0){
        a--;
        b--;
        d++;
    }

    if(a>0){
        s=a/2; //total de pares da mesma cor
    }
    if(b>0){
        s=b/2;
    }
    printf("%d %d\n",d,s);


    return 0;
}