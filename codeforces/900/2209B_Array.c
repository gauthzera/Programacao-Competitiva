#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        long long arr[n];

        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }

        for(int i=0;i<n;i++){
            int maiores=0,menores=0; //quantidade de maiores e menores que a[i];
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    maiores++;
                }else if(arr[j]<arr[i]){
                    menores++;
                }
            }
            int q=maiores>menores ? maiores : menores;
            if(i==n-1){
                printf("%d\n",q);
            }else{
                printf("%d ",q);
            }
            
        }
        
    }
    
    
    return 0;
}
