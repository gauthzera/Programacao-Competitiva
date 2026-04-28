#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        char s[101];
        scanf("%s",s);
        int tam=strlen(s);

        if(tam%2!=0){
            printf("NO\n");
        }else{
            int ok=1;
            for(int i=0;i<tam/2;i++){
                if(s[i]!=s[i+tam/2])ok=0;
            }
            if(!ok)printf("NO\n");
            else printf("YES\n");
        }
        
    }
    
    return 0;
}
