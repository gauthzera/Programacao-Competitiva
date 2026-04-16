#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        long long arr[n];

        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        
        int q=0;
            for(int i=n-2;i>=0;i--){
                while(arr[i]>=arr[i+1] && arr[i]>0){
                    arr[i]/=2;
                    q++;
                }

                if(arr[i]>=arr[i+1]){ //será maior ou ambos serão zero
                    q=-1;
                    break;
                }
            }
        printf("%d\n",q);
    }

	return 0;
}