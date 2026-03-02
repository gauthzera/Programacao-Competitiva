#include <stdio.h>

int main() {
    int diai,horai,mini,segi;
    int diaf,horaf,minf,segf;
    char x[5];

        scanf("%s %d",x,&diai);
        scanf(" %d : %d : %d",&horai,&mini,&segi);
        scanf("%s %d",x,&diaf);
        scanf(" %d : %d : %d",&horaf,&minf,&segf);

        int totali= diai*24*3600 + horai*3600 + mini*60 + segi;
        int totalf= diaf*24*3600 + horaf*3600 + minf*60 + segf;
        int total=totalf-totali;

        int dias,horas,min,seg;

        dias=(total)/(24*3600);
        total=(total)%(24*3600);
        horas=total/3600;
        total=total%3600;
        min=total/60;
        seg=total%60;

        printf("%d dia(s)\n",dias);
        printf("%d hora(s)\n",horas);
        printf("%d minuto(s)\n",min);
        printf("%d segundo(s)\n",seg);


    return 0;
}