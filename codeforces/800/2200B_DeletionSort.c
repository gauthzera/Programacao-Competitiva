#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int arr[n];
        
        int ordenado=1;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(i>0 && arr[i]<arr[i-1])ordenado=0; 
        }

        if(ordenado){
            printf("%d\n",n);
        }else{
            printf("1\n");
        }
        
    }
    
    return 0;
}