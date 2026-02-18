#include <stdio.h>
   
int main() {
       int n;
       float l,q;
   
       scanf("%d %f %f",&n,&l,&q);
       char part[n][13]; //vetor de strings
   
      for(int i=0;i<n;i++){
          scanf("%s",part[i]);
      }  //leitura dos nomes
  
      int x=0; //índice de onde para a divisão
      while(l>q){
        l-=q; 
        x++;
        if(x==n)x=0; 
  
      }
  
        
    printf("%s %.1f\n",part[x],l); 
      
      return 0;
  }     