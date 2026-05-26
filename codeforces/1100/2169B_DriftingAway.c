#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char s[300002];
        scanf("%s",s);
        int tam=strlen(s);

        int left=0,right=0,inf=0;

        for(int i=0;i<tam;i++){
            if(s[i]=='>')right++;
            if(s[i]=='<')left++;
        }
        
        for(int i=0;i<tam-1;i++){ 
            if(s[i]!='<' && s[i+1]!='>'){ //casos de loop
                inf=1;
                break;
            }
        }

        if(inf){
            printf("-1\n");
        }else{
            int min= left < right ? left : right;
            printf("%d\n",tam-min);
        }

    }

    return 0;
}