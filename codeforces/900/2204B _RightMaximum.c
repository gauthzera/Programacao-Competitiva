#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
       
        int q=0;
        int max=0;    
        for(int i=0;i<n;i++){
            if(arr[i]>=max){
                max=arr[i];
                q++;
            }
        }

        printf("%d\n",q);
        
    }

    return 0;
}
