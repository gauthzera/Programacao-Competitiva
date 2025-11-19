#include <stdio.h>

int main(){
    double valor;
    int q100,q50,q20,q10,q5,q2; //quantidade de notas
    int qm1,qm50,qm25,qm10,qm5,qm01; //quantidade de moedas

    scanf("%lf",&valor);

    int valorInteiro=(int)valor;
//notas e moeda de 1;
    q100=valorInteiro/100;
    valorInteiro%=100;

    q50=valorInteiro/50;
    valorInteiro%=50;

    q20=valorInteiro/20;
    valorInteiro%=20;

    q10=valorInteiro/10;
    valorInteiro%=10;

    q5=valorInteiro/5;
    valorInteiro%=5;

    q2=valorInteiro/2;
    valorInteiro%=2;

    qm1=valorInteiro;
//pegando os centavos
double cents=valor-(int)valor;
    cents=cents*100;
    int centInt=(int)cents;

    qm50=centInt/50;
    centInt%=50;

    qm25=centInt/25;
    centInt%=25;

    qm10=centInt/10;
    centInt%=10;

    qm5=centInt/5;
    centInt%=5;

    qm01=centInt;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",q100);
    printf("%d nota(s) de R$ 50.00\n",q50);
    printf("%d nota(s) de R$ 20.00\n",q20);
    printf("%d nota(s) de R$ 10.00\n",q10);
    printf("%d nota(s) de R$ 5.00\n",q5);
    printf("%d nota(s) de R$ 2.00\n",q2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",qm1);
    printf("%d moeda(s) de R$ 0.50\n",qm50);
    printf("%d moeda(s) de R$ 0.25\n",qm25);
    printf("%d moeda(s) de R$ 0.10\n",qm10);
    printf("%d moeda(s) de R$ 0.05\n",qm5);
    printf("%d moeda(s) de R$ 0.01\n",qm01);
return 0;
}