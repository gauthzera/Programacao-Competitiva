#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[51];
    double preco;
}produto;

int main(){
    int n;
    scanf("%d",&n);

    while(n--){
        int m;
        scanf("%d",&m);
        produto feira[m];
        for(int i=0;i<m;i++){
            scanf("%s %lf",feira[i].nome,&feira[i].preco);
        }
        int p;
        scanf("%d",&p);
        
        char compra[51];
        int quantidade;

        double total=0;

        for(int i=0;i<p;i++){
            scanf("%s %d",compra,&quantidade);
                for(int j=0;j<m;j++){
                    if(strcmp(feira[j].nome,compra)==0){
                        total+=quantidade*feira[j].preco;
                        break;
                    }
                }

        }
        printf("R$ %.2lf\n",total);
    }
    
    return 0;
}