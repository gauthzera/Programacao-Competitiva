#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int n;
    while(t-- >0){
        scanf("%d",&n);
        int parcelas[5]; //guarda as parcelas

        int i=0;
        int pot10=1; //potências de 10

        while(n>0){
            int dig=n%10; //pega cada dígito
            if(dig!=0){
                parcelas[i]=dig*pot10; //se for !=0 será uma parcela
                i++; //incrementa posicao no vetor
            }
            pot10*=10;
            n/=10;
        }

        printf("%d\n",i);

        for(int j=0; j<i; j++){
            printf("%d ",parcelas[j]);

        }

        printf("\n");

    }

    return 0;
}
