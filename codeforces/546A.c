#include <stdio.h>

int main(){
    int custo1,qInicial,total;
    scanf("%d %d %d",&custo1,&qInicial,&total);

    int valorTotal=0;

    for(int i=1;i<=total;i++){
    valorTotal+=i*custo1;
    }

    if(qInicial>=valorTotal){
        printf("0");
    }else{
        printf("%d",valorTotal-qInicial);
    }

    return 0;
}

