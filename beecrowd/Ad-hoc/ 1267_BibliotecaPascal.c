#include <stdio.h>
    2 
    3 int main() {
    4     int n,d; //numero de alunos e jantares
    5     scanf("%d %d",&n,&d);
    6    
    7     while(n!=0 && d!=0){
    8         int q=0; //armazena o total de alunos que 
    9         int x; //indica se foi(1) ou nao no jantar
   10         int tX;
   11         for(int i=0;i<n;i++){
   12             x=0;
   13             tX=0;
   14             for(int j=0;j<d;j++){
   15                 scanf("%d",&x);
   16                 tX+=x; //armazena total de jantare
   17             }
   18             if(tX==d)q++; //se o total for igual a
   19         }
   20         
   21         if(q>0)printf("yes\n");
   22         else printf("no\n");
   23                                
   24         scanf("%d %d",&n,&d);
   25     }                   
   26                              
   27     return 0;           
   28 }                 