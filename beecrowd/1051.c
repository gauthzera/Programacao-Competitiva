#include <stdio.h>

int main() {
   double salario,taxa,imposto;
   scanf("%lf",&salario);

   if(salario>=0 && salario<=2000){
    imposto=0;
   }else if(salario>2000 && salario<=3000){
        imposto=(salario-2000)*0.08;
   }else if(salario>3000 && salario<=4500){
        imposto=(salario-3000)*0.18 + 1000*0.08;
   }else if(salario>4500){
        imposto=(salario-4500)*0.28 + 1500*0.18 + 1000*0.08;
   }else{
        imposto=0;
   }

   if(imposto==0){
    printf("Isento\n");
   }else{
    printf("R$ %.2lf\n",imposto);
   }

    return 0;
}