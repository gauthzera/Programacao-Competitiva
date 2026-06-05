#include <stdio.h>

int main(){ 
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        char s[n+1];
        scanf("%s",s);
        
        int q=0;
        for(int i=0;i<n;i++){
            if(n-(i+1)>=4 && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' &&  s[i+3]=='i' && s[i+4]=='e'){
                q++;
                i+=4;
            }else if(n-(i+1)>=2){
                if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                    q++;
                }else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
                    q++;
                }
            }
        } 
        printf("%d\n",q);
    }

    return 0;
}