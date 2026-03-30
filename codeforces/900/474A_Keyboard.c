#include <stdio.h>

int main() {
    char teclas[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    scanf("%c",&dir);

    char str[101];
    scanf("%s",str);
    
    int i;
    for(i=0;str[i]!='\0';i++){
        int pos;
        for(int j=0;teclas[j]!='\0';j++){
            if(str[i]==teclas[j]){
                pos=j; //posição no teclado
                break;
            }
        }
        if(dir=='R'){
            str[i]=teclas[pos-1];
        }else{
            str[i]=teclas[pos+1];
        }
    }
    str[i]='\0';
    printf("%s",str);
    
    return 0;
}