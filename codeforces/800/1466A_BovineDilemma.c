#include <stdio.h>
    
int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n); //num trees
        int arr[n];
        
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
       
        int bases[51]={0}; //marca 1 para todas as possíveis bases

        for(int i=n-1;i>0;i--){
            int arvore=arr[i];
            for(int j=i-1;j>=0;j--){
                int base=arvore-arr[j]; //calcula uma base possível
                bases[base]=1;
            }
        }
        int q=0;
        for(int i=1;i<51;i++){
            if(bases[i]==1)q++;
        }
        printf("%d\n",q);

    }
    
    return 0;
}
