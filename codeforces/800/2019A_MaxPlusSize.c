#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int maior=0,pos=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]>maior){
                maior=arr[i];
            }
        }

        for(int i=0;i<n;i++){
            if(arr[i]==maior && i%2==0){
                pos=1; //verifica se tem o maior em posição par
                break;
            }
        }

        int c=n/2; //quando n é par ou n é impar e só tem maior em posiçao impar
        if(n%2!=0){
            if(pos)c=n/2 + 1;
        }
             
        printf("%d\n",c+maior);
        
    }
    
    return 0;
}