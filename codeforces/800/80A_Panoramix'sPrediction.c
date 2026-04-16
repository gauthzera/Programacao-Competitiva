#include <stdio.h>

int ehPrimo(int x){
    int qDiv=1; //div por 1;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            qDiv=2;
            break;
        }
    }
    if(qDiv==2)return 0;
    return 1;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int q=m-n;

    while(q--){
        n++;
        if(ehPrimo(n) && n==m){
            printf("YES\n");
            break;
        }else if(ehPrimo(n) && n!=m || !ehPrimo(m)){
            printf("NO\n");
            break;
        }
    }

	return 0;
}
