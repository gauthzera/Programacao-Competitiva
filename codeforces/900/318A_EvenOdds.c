#include <stdio.h>

int main() {
    long long k,n;
    scanf("%lld %lld",&n,&k);

    long long x=(n+1)/2; //quantidade de numeros de 1 até n

    long long a;

    if(k<=x){ //parte dos ímpares
     a=2*k - 1;
    }else{  //parte dos pares
     k-=x;
     a=2*k;
    }
     printf("%lld",a);

     return 0;
 }
