#include <stdio.h>
  
int main() {
    int n;
    scanf("%d",&n);
    int freq[2001]={0}; //vetor de 0 até 2000, todos iniciando com zero
   
    int num;
    int menor,maior;
 
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        
        if(i==0){
         maior=num;
         menor=num;
        }
 
        if(num>maior){
             maior=num;
        }else if(num<menor){
             menor=num;
        }
 
        freq[num]++;
    }
 
    for(int i=menor;i<=maior;i++){
        if(freq[i]>0){
        printf("%d aparece %d vez(es)\n",i,freq[i]);
        }
    }

     return 0;
 }
