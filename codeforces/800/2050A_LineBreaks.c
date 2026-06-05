#include <stdio.h>
#include <string.h>

int main(){ 
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        
        int total=0,q=n;
        int resto=m;
        while(q--){
            char s[11];
            scanf("%s",s);         
            if(total==((n-1)-q) && strlen(s)<=resto){
                resto-=strlen(s);
                total++;
            }
        }
        printf("%d\n",total);
    }

    return 0;
}