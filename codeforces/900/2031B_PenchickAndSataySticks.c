#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int arr[n+1];
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
        }
        
        int ok=1;
        for(int i=1;i<=n;i++){
            if(abs(arr[i]-i)>1){
                ok=0;
                break;
            }
        }
    
        if(ok)printf("YES\n");
        else printf("NO\n");

    }
    
    return 0;
} 