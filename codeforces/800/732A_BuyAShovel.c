#include <stdio.h>

int main() {
    int k,r;
    scanf("%d %d",&k,&r);
    int q=1;

    int ultimo=(k*q)%10;
    while(!(ultimo==0 || ultimo==r)){
        q++;
        ultimo=(k*q)%10;
    }

    printf("%d",q);

    return 0;
}
