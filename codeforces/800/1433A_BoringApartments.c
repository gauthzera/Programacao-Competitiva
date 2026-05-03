#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int x;
        scanf("%d",&x);
        int qDig=0,aux=x;
        while(aux>0){
            aux=aux/10;
            qDig++; //quantidade de digitos
        }
        int total=(x%10 - 1) * 10 ; 

        total+=qDig*(qDig+1)/2;

        printf("%d\n",total);

    }
    
    return 0;
}