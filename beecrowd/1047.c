#include <stdio.h>

int main(){
    int horaI,minI,totalI;
    int horaF,minF,totalF;
    int total,horas,min;
    scanf("%d %d %d %d",&horaI,&minI,&horaF,&minF);

    totalI=horaI*60+minI;
    totalF=horaF*60+minF;

    if(totalF<=totalI){
        totalF+=24*60;
    }


    total=totalF-totalI;

    horas=total/60;
    min=total%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,min);

return 0;
}