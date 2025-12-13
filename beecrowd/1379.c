#include <stdio.h>

int main(){
    long int a,b,c;
    long int mediana;

    scanf("%d %d",&a,&b);

    while(a!=0 && b!=0){
        if(a<b){
            mediana=a;
        }else{
            mediana=b;
            }
        c=mediana*3 - a - b;
        printf("%d\n",c);
        scanf("%d %d",&a,&b);
    }

return 0;
}
