#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        
        int num=1; //até k

        int arr[n+1];

        for(int i=1;i<=n;i++){
            arr[i]=-1;
        }

        for(int i=k;i<=n;i+=k){
            arr[i]=num++;
        }
        
        for(int i=1;i<=n;i++){
            if(arr[i]==-1)arr[i]=num++;
        }
        
        for(int i=1;i<=n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

    }
    
    return 0;
}

