#include <stdio.h>

 int main() {
     int n;
     scanf("%d",&n);

     char tab[n+1][n+1]; //array de strings

     for(int i=0;i<n;i++){
         scanf("%s",tab[i]);
     }

     int q=0;
     int best=0;

     for(int i=0;i<n;i++){
         if(i%2==0){
             for(int j=0;j<n;j++){
                 if(tab[i][j]=='o')q++;
                 if(tab[i][j]=='A'){
                     if(q>best)best=q;
                     q=0;
                 }
              if(q>best) best=q; //atualiza os pontos
             }
         }else{
              for(int j=n-1;j>=0;j--){
                if(tab[i][j]=='o')q++;
                if(tab[i][j]=='A'){
                     if(q>best)best=q;
                      q=0;
                  }

              }
         }
         if(q>best) best=q;
     }

     printf("%d\n",best);

     return 0;
 }
