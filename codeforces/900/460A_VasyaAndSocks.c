#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int q=0,dia=1;
    while(n >0){
        n--;
        if(dia%m==0)n++;
        dia++;
        q++;
    }
    printf("%d\n",q);

    return 0;
}