#include <stdio.h>

int main() {
    int m,n;

    scanf("%d %d",&m,&n);

    while(m>0 && n>0){
        if(m>n){
            int temp=n;
            n=m;
            m=temp;
        }
        int soma=0;
        for(int i=m;i<=n;i++){
            printf("%d ",i);
            soma+=i;
        }
        printf("Sum=%d\n",soma);

       scanf("%d %d",&m,&n);
    }

    return 0;
}