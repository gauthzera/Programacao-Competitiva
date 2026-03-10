#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    int n;
    while(t-- >0){
    scanf("%d",&n);
    
    int a;
    int q=0;
    int maior=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a==0){
        q++;
            if(q>maior)maior=q; //atualiza maior espaço
        }else{
        q=0;
        }
    }
    printf("%d\n",maior);

    }

    return 0;
}