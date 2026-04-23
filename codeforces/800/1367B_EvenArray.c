#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int qpar=0,qimpar=0,x;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            if(i%2==0 && x%2!=0)qimpar++;
            if(i%2!=0 && x%2==0)qpar++;
        }

        if(qpar==qimpar){
            printf("%d\n",qpar);
        }else{
            printf("-1\n");
        }

    }
    
	return 0;
}
