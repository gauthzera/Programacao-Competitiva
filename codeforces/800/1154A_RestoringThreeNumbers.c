#include <stdio.h>

//a+b, a+c, b+c e a+b+c.
int main() {
    long long x1,x2,x3,x4;
    scanf("%lld %lld %lld %lld",&x1,&x2,&x3,&x4);
    long long maior=x4;

    if(x1>maior){
        maior=x1;
        x1=x4;
    }

    if(x2>maior){
            maior=x2;
            x2=x4;
    }
    if(x3>maior){
            maior=x3;
            x3=x4;
    }

    x4=maior; //após as manipulações o x4 será o maior
    long long a,b,c;

    a=x4-x1;
    b=x4-x2;
    c=x4-x3;

    printf("%lld %lld %lld",a,b,c);
   return 0;
}
