#include <stdio.h>

int main() {
    int j=7;
    int temp;

    for(int i=1;i<=9;i+=2){
            temp=j-2;
        for(;j>=temp;j--){

                printf("I=%d J=%d\n",i,j);
                if(j==temp){
                    j+=4;
                    break;
                }
        }
    }

   return 0;
}