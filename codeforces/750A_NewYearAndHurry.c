#include <stdio.h>

int main() {
     int n,k;
     scanf("%d %d",&n,&k);

     int q=n;

     int tempo=5*n*(n+1)/2; //tempo total com os problemas

         while(q> && tempo+k>240){
             tempo-=q*5;
             q--; //diminui a quantidade de problemas sempre que tempo + k > 240
         }

         printf("%d",q);

     return 0;
}
