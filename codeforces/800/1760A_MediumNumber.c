#include <stdio.h>
    
int main(){
    int t;
    scanf("%d",&t);

    while(t-- >0){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int maior=a,menor=a;
        if(b>maior)maior=b;
        if(c>maior)maior=c;
        if(b<menor)menor=b;
        if(c<menor)menor=c;
        int med=(a+b+c)-maior-menor; //numero médio

        printf("%d\n",med);

    }
    
    return 0;
}
