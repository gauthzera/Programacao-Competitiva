#include <stdio.h>

int main(){
    int mat[5][5];
    int posI,posJ;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1){
                    posI=i;
                    posJ=j;
            }
        }
    }

    int q=0;//numero total de operações

    if(posI>2){
        q+=posI-2;
    }else{
        q+=2-posI;
    }
    if(posJ>2){
        q+=posJ-2;
    }else{
        q+=2-posJ;
    }

    printf("%d",q);

    return 0;
}
