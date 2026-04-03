#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    while(n--){
        char str[51];
        scanf("%s",str);
        int tam=0;
        for(int i=0;str[i]!='\0';i++)tam++;
        int d;
        scanf("%d",&d);
        
        char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i=0;i<tam;i++){
            char c=str[i]-'A';
            str[i]=alfabeto[(c-d+26)%26]; //volta -d caracteres no alfabeto
        }

        printf("%s\n",str);
        
    }
    
    return 0;
}