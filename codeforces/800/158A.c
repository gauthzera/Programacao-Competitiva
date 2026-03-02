#include <stdio.h>

int main(){
    int n,k,media;
    scanf("%d  %d",&n,&k);

    int notas[n]; //vetor de notas

    for(int i=0;i<n;i++){
        scanf("%d",&notas[i]);
    }

    media=notas[k-1]; //a média é a nota do k-ésimo candidato
    int q=0;

    for(int i=0;i<n;i++){
        if(notas[i]>0 && notas[i]>=media)q++;
    }
    printf("%d",q);

return 0;
}
