#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        for(int j=0;j<2;j++){
            for(int i=1;i<=n;i++){
                printf("%d ",i);       
            }
        }
        
        if(n%2==0){
            for(int i=n;i>=1;i--)printf("%d ",i);
            
            for(int i=1;i<=n;i++)printf("%d ",i);
        }else{
            printf("%d %d ",(n/2) + 1,(n/2)+1);
            for(int i=1;i<=n;i++){
                if(i!= (n/2)+1)printf("%d %d ",i,i);
            } 
             
        }
        printf("\n");
    }

    return 0;
}
