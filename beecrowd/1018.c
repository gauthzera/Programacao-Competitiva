#include <stdio.h>

int main(){
    int notas100=0,notas50=0,notas20=0,notas10=0,notas5=0,notas2=0,notas1=0;
    int valor,valor1;
    scanf("%d",&valor);
    valor1=valor;

    if(valor>=100){
        notas100=valor/100;
        valor=valor%100;
    }
    if(valor>=50){
        notas50=valor/50;
        valor=valor%50;
    }
    if(valor>=20){
        notas20=valor/20;
        valor=valor%20;
    }
    if(valor>=10){
        notas10=valor/10;
        valor=valor%10;
    }
    if(valor>=5){
        notas5=valor/5;
        valor=valor%5;
    }
    if(valor>=2){
        notas2=valor/2;
        valor=valor%2;
    }
    if(valor>=1){
            notas1=valor;
        }
printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor1,notas100,notas50,notas20,notas10,notas5,notas2,notas1);

return 0;
}