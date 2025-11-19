#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);

    char palavra[100];

    for(int i=0;i<n;i++){
        scanf("%s",palavra);
        int tam=strlen(palavra);

        if(tam<=10){
            printf("%s\n",palavra);
        }else{
            printf("%c%d%c\n",palavra[0],tam-2,palavra[tam-1]);
        }

    }

return 0;
}
