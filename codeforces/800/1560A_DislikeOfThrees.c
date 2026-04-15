#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int k;
        scanf("%d",&k);
        int num=1;
        while(k>1){
           num++;
           if(num%3==0 || num%10==3){
                continue;
           }else{
                k--;
            }
            
        }
        printf("%d\n",num);

    }
    
    return 0;
}