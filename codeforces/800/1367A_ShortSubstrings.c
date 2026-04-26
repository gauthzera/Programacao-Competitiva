#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char b[101];
        scanf("%s",b);
        int tam=strlen(b);
        int tamA=tam/2 + 1; //tamanho string A

        char a[tamA+1];
        a[0]=b[0];
        a[1]=b[1];
        int j=2;
        for(int i=3;i<tam;i+=2){
            a[j++]=b[i];
        }
        a[tamA]='\0';
        printf("%s\n",a);
    }
    
    return 0;
}