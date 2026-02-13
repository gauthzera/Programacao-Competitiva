#include <stdio.h>
//objetivo: resolver sem usar a biblioteca string.h

int main(){
    int n;
    scanf("%d",&n);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); //limpa o buffer

    while(n-- > 0){
        char str[1001];
        fgets(str, 1001, stdin);

        int tam = 0;
        while(str[tam] != '\0' && str[tam] != '\n'){
            tam++;
        }
        str[tam] = '\0';

        //1 passo
        for(int i = 0; i < tam; i++){
            if((str[i] >= 'a' && str[i] <= 'z') || 
               (str[i] >= 'A' && str[i] <= 'Z')){
                str[i] += 3;
            }
        }

        //2 passo (inversão)
        int l = 0, r = tam - 1;
        while(l < r){
            int temp = str[l];
            str[l] = str[r];
            str[r] = temp;
            l++;
            r--;
        }

        //3 passo
        int metade = tam / 2;
        for(int i = metade; i < tam; i++){
            str[i] -= 1;
        }

        printf("%s\n", str);
    }

    return 0;
}
