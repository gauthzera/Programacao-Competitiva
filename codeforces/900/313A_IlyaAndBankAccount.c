#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long v=0;
    
    if(n>0){
        v=n;
    }else{
        long long v1=n/10; //retira último digito
        int lastDig=n%10; 
        long long v2=(n/100)*10 + lastDig; //retira o penúltimo digito
        if(v1>v2)v=v1;
        else v=v2;
    }
    
    printf("%lld\n",v);

    return 0;
}