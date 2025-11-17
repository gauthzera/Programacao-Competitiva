#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    while(n!=0){
            for(int i=0;i<n;i++){
        int vet[5];
        int q=0,pos;
        for(int i=0;i<5;i++){
            scanf("%d",&vet[i]);
            if(vet[i]<=127){
                    q++;
                    pos=i;
            }
        }
        if(q>1 || q==0){
                printf("*\n");
        }else if(q==1) {
            if(pos==0)printf("A\n");
            if(pos==1)printf("B\n");
            if(pos==2)printf("C\n");
            if(pos==3)printf("D\n");
            if(pos==4)printf("E\n");
        }
    }

    scanf("%d",&n);
    }

    return 0;
}