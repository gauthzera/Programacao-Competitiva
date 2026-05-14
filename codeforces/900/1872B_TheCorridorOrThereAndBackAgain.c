#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n); //num de traps
        int d[n+1],s[n+1];

        scanf("%d %d",&d[1],&s[1]);

        int dist=d[1] + (s[1]-1)/2;

        for(int i=2;i<=n;i++){
            scanf("%d %d",&d[i],&s[i]);
            int aux=d[i] + (s[i]-1)/2;

            if(aux<dist)dist=aux;
        }

        printf("%d\n",dist);
        
    }

    return 0;
}