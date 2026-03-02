#include <stdio.h>

int main() {

    int k,l,m,n,d;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);

    int q=0;

    for(int i=1;i<=d;i++){
          if(i%k==0 || i%l==0 || i%m==0 || i%n==0)q++; //se i for múltiplo de um valor, o dragão i será atacado
        }

      printf("%d\n",q);

     return 0;
  }