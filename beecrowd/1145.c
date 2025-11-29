#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int q=0;
    for(int i=1;i<=y;i++){
        printf("%d",i);
        q++;
        if(q==x){
            printf("\n");
            q=0;
        }else{
            printf(" ");
        }
    }

return 0;
}
