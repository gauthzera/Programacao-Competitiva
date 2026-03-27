#include <stdio.h>
#include <string.h>

int main(){
    char str[201];
    scanf("%s",str);
    int tam=strlen(str);
    
    char str2[201];
    int indx=0; //index de str2
    for(int i=0;i<tam;){
        if(i<=tam-3 && str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){ //verificação de caracteres
            if(indx!=0 && str2[indx-1]!=' '){
                str2[indx++]=' ';
            }
            i+=3;
        }else{
            str2[indx++]=str[i];
            i++;
        }
    }
    
    str2[indx]='\0';
    printf("%s",str2);
    
    return 0;
}
