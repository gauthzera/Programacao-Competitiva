#include <stdio.h>

int main() {
     int n,k,l,c,d,p,nl,np;
     scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

     int totalNL=(k*l)/nl;
     int totalP=p/np;       //total de itens para brindes
     int totalD=c*d;

     int menorQitem=totalNL;
     if(totalP<menorQitem)menorQitem=totalP;
     if(totalD<menorQitem)menorQitem=totalD;

     if(menorQitem<n){
         menorQitem=0;
     }

     printf("%d\n",menorQitem/n);

     return 0;
}
