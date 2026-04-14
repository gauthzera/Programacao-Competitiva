#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n,x;
        scanf("%d %d",&n,&x);
        int arr[n];

        scanf("%d",&arr[0]);
        int distIda=arr[0]; //primeira distancia que vai percorrer

        for(int i=1;i<n;i++){
                scanf("%d",&arr[i]);
                int aux=arr[i]-arr[i-1];
                if(aux>distIda)distIda=aux;
        }

        int distVolta=(x-arr[n-1])*2; //maior distancia possivel da volta

        if(distIda>distVolta){
            printf("%d\n",distIda);
        }else{
            printf("%d\n",distVolta);
        }
            
    }
    
    return 0;
}
