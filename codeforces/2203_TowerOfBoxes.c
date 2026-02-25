#include <stdio.h>

int main(){
        int t;
        scanf("%d",&t);

        int n,m,d;
        while(t-- >0){
            scanf("%d %d %d",&n,&m,&d);
            int sum=0; //soma dos pesos
            int towers=0;

            while(n>0){
                sum+=m;
                n--;

                if(sum>d || n==0){ //quando a quantidade total ultrapassa a durabilidade e acaba as caixas
                    towers++;
                    sum=0;
                }
            }

        printf("%d\n",towers);

        }

    return 0;
}
