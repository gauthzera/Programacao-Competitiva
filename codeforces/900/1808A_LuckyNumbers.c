#include <stdio.h>

int luck(int v){
    int menor=v%10;
    int maior=menor;
        
    while(v>0){
        int n=v%10;
        v/=10;

        if(n>maior)maior=n;
        if(n<menor)menor=n;
    }
    
    return maior-menor;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int l,r;
        scanf("%d %d",&l,&r);
        
        int best=-1;
        int bL=-1;
        for(int i=l;i<=r;i++){
            int aux=luck(i);

            if(aux>bL){
                bL=aux;
                best=i;
            }
            if(aux==9)break;
        }
        
        printf("%d\n",best);

    }
    
    return 0;
}