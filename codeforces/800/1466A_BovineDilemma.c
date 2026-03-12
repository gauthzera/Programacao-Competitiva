#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int xs[n];
        for(int i=0;i<n;i++){
            scanf("%d",&xs[i]);
        }
        
        int qTri=n*(n-1)/2;//quantidade de triangulos
        int arrT[qTri]; //array com a quantidade de todas as bases;

        int ind=0;
        for(int i=1;i<n;i++){
            int x=xs[i];
            for(int j=i-1;j>=0;j--){
                int base=x-xs[j];
                arrT[ind++]=base; //adiciono todas as possíveis bases no array
            }
        }

        int bases[51]={0}; // possiveis bases= 1 até 50;
        for(int i=0;i<qTri;i++){
               bases[arrT[i]]++; //marca a quantidade de vezes que aparece um triângulo a base arrT[i]
        }

        int total=0;
        for(int i=1;i<=50;i++){
                if(bases[i]!=0)total++; //quantidade de bases diferentes
        }
        printf("%d\n",total);
        
    }
    
	return 0;
}