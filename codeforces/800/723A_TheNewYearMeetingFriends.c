#include <stdio.h>

int main() {
    int x1,x2,x3;
    scanf("%d %d %d",&x1,&x2,&x3);

    int maior=x1,menor=x1;
    if(x2>maior)maior=x2;
    if(x3>maior)maior=x3;

    if(x2<menor)menor=x2;
    if(x3<menor)menor=x3;

    printf("%d",maior-menor);

    return 0;
}
