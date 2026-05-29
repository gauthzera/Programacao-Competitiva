#include <stdio.h>
#include <string.h>

int verifica(char c){
    if(c>='A' && c<='Z')c+=32;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')return 1;
    return 0;
}

int main(){
    char s[102];
    scanf("%s",s);
    
    int tam=strlen(s);

    for(int i=0;i<tam;i++){
       if(!verifica(s[i])){
           if(s[i]>='A' && s[i]<='Z')s[i]+=32;
            printf(".%c",s[i]);
       }
    }
    
    return 0;
}