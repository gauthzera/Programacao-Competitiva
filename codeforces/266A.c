#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char pedras[n];
    scanf("%s",pedras);

    int q=0;
    //quando a letra[i] for igual a próxima 
    for(int i=0;i<n-1;i++){
        if(pedras[i]==pedras[i+1])q++;
    }

    printf("%d",q);

    return 0;
}

