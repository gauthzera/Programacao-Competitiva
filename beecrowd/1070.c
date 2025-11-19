#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int qNum=0;

   while(qNum<6){
    if(x%2!=0){
            printf("%d\n",x);
        qNum++;
    }
    x+=1;
   }

return 0;
}
