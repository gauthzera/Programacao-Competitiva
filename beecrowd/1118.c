#include <stdio.h>

int main() {
    int q,cod=1;
    float nota,soma;


    while(cod==1){
            q=0;
            soma=0;

          while(q!=2){
            scanf("%f",&nota);
            if(nota>=0.0 && nota<=10.0){
            soma+=nota;
            q++;
            }else{
            printf("nota invalida\n");
            }
        }

         float media=soma/2.0;
            printf("media = %.2f\n",media);

            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&cod);
            while(cod!=1 && cod!=2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&cod);
            }
    }

    return 0;
}
