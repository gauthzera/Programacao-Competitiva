#include <stdio.h>

struct mensagem{
    char planeta[50];
    int ano;
    int tempo;
};

int main(){

 int n;
 scanf("%d",&n);

 while(n!=0){
    struct mensagem vet[n];
    int pos; //guarda a posição, no vetor, do planeta que enviou a mensagem primeiro
    int menorAno; //menor ano de envio
    
    for(int i=0;i<n;i++){

    scanf("%s %d %d",vet[i].planeta,&vet[i].ano,&vet[i].tempo); //leitura dos dados
    int anoEnvio=vet[i].ano-vet[i].tempo; //ano em que a mensagem foi enviada
    

    if(i==0){
        menorAno=anoEnvio;
        pos=0;
    }else if(anoEnvio<menorAno){
                menorAno=anoEnvio;
                pos=i;
            }

    }
    printf("%s\n",vet[pos].planeta);
    scanf("%d",&n);

}

return 0;
}
