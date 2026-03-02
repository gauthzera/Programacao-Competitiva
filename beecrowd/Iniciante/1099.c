#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int x,y,soma=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            int temp=x;
            x=y;
            y=temp;
        }

        for(int j=x+1;j<y;j++){
            if(j%2!=0)soma+=j;
        }

        printf("%d\n",soma);
        soma=0;
    }


    return 0;
}