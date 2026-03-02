#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    scanf("%s",palavra);

    int tam=strlen(palavra);
    int q=0;
    for(int i=0;i<tam;i++){     //vai percorrer todas as letras da palavra
            int repetido=0;
        for(int j=0;j<i;j++){   //verifica apenas as letras que foram percorridas
            if(palavra[i]==palavra[j]){
                repetido = 1;
                break;
            }
        }
        if(!repetido)q++;
    }
    if(q%2==0){
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}
