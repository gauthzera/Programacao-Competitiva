#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        char s[200005];
        scanf("%s",s);

        int tam=strlen(s);
        
        int sum=0,ok=1;

        for(int i=1;i<tam-1;i++){
            if(s[i]=='(')sum++;
            if(s[i]==')')sum--;

            if(sum==-1){
                ok=0;
                break;
            }
        }
        if(ok){
            printf("NO\n");
        }else{
            printf("YES\n");
        }

    }

    return 0;
}
