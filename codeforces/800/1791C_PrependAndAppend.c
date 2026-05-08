#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);

        int i=0,j=n-1,q=0;

        while(i<=j){
            if(s[i++]!=s[j--]){
                q+=2;
            }else{
                break;
            }
        }
        printf("%d\n",n-q);
    }

    return 0;
}

