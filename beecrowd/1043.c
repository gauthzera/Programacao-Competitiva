#include <stdio.h>

int main(){
   double a,b,c,P,A;
   int tri=0;
   scanf("%lf %lf %lf",&a,&b,&c);

   if(a+b<=c || a+c<=b || b+c<=a)tri=1;

    if(tri==0){
        P=a+b+c;
        printf("Perimetro = %.1lf\n",P);
    }else{
        A=((a+b)*c)/2.0;
        printf("Area = %.1lf\n",A);
    }

return 0;
}