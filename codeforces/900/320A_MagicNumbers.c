#include <stdio.h>
#include <string.h>

int main(){
    char s[11];
    scanf("%s",s);
    
    int tam=strlen(s);
    int ok=1;

         for(int i=0;i<tam;){
            if(s[i]!='1' && s[i]!='4'){
                ok=0;
                break;
            }

            if(i<tam-2 && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
                i+=3;
            }else if(i<tam-1 && s[i]=='1' && s[i+1]=='4'){
                  i+=2;  
            }else if(s[i]=='1'){
                i++;
            }else{
                ok=0;
                break;
            }
                   
         }

        if(ok)printf("YES\n");
        else printf("NO\n");
    
    return 0;
}
