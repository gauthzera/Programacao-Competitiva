#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
       
    int i=2;
    int a=1,q=0,sum=a;

    while(sum<=n){
        q++;
        a+=i++; //quantidade de cubos por nível
        sum+=a; //total de cubos utilizados
    }

    printf("%d\n",q);

  	return 0;
}