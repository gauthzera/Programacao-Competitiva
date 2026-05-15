#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int n,a,b;
    while(t--){
        scanf("%d %d %d",&n,&a,&b);
        char c[n+1];

        for(int i=0;i<n;i++){
            c[i]='a' + (i%b); //gera b caracteres distintos
        }

        c[n]='\0';

        printf("%s\n",c);
    }

    return 0;
}
