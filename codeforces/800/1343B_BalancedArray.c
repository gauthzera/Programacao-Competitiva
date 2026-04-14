#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    while(t--){
        int n;
        scanf("%d",&n);

        if((n/2)%2==0){
            int a[n];
            int aux1=2,aux2=1;
            int somaPar=0,somaImpar=0;

            for(int i=0;i<n-1;i++){
                if(i<n/2){ 
                    a[i]=aux1;
                    aux1+=2;
                    somaPar+=a[i];
                }else{ 
                    a[i]=aux2;
                    aux2+=2;
                    somaImpar+=a[i];
                }
            }

            a[n-1]=(somaPar-somaImpar); //calcula ultimo elemento do array
            printf("YES\n");
            for(int i=0;i<n;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        }else{
            printf("NO\n");
        }
        
        
    }

    return 0;
}