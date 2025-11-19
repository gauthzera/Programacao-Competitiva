#include <stdio.h>

int main(){
    double N1,N2,N3,N4,MEDIA;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    MEDIA = (N1*2 + N2*3 + N3*4 + N4)/10.0;

    printf("Media: %.1lf\n",MEDIA);
    if(MEDIA>=7)printf("Aluno aprovado.\n");

    if(MEDIA<5)printf("Aluno reprovado.\n");

    if(MEDIA>=5 && MEDIA<=6.9){
        printf("Aluno em exame.\n");
        double notaExame;
        scanf("%lf",&notaExame);
        printf("Nota do exame: %.1lf\n",notaExame);
        MEDIA=(MEDIA + notaExame)/2.0;
            if(MEDIA>=5.0){
            printf("Aluno aprovado.\n");
            }else{
            printf("Aluno reprovado.\n");
            }
        printf("Media final: %.1lf\n",MEDIA);
    }

return 0;
}