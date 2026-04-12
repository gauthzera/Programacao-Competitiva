#include <stdio.h>
#include <string.h>

int verifica(char s1[],char s2[]){
    int tam1=strlen(s1),tam2=strlen(s2);
    if(tam2>tam1)return 0;
    int ok=1;
    int indx=0;
    for(int i=tam1-tam2;i<tam1;i++){
            if(s1[i]!=s2[indx++]){
                    ok=0;
                    break;
            }
    }
    return ok;
}

int main(){
    int n;
    scanf("%d",&n);
    
    while(n--){
        char s1[1000],s2[1000];
        scanf("%s %s",s1,s2);
        
        if(verifica(s1,s2)){
            printf("encaixa\n");
        }else{
            printf("nao encaixa\n");
        }
        
    }

    return 0;
}