#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int x,freq[100001]={0};
        
        int qDif=0; //quantidade de valores diferentes

        for(int i=0;i<n;i++){
            scanf("%d",&x);
            if(freq[x]==0)qDif++;
            freq[x]++;
        }

        if(qDif==1){

            printf("Yes\n");
        }else if(qDif==2){
            int nums[2],indx=0;

            for(int i=0;i<100001;i++){
                if(freq[i]!=0)nums[indx++]=freq[i];
            }
            
            if(nums[0]==nums[1] || nums[0]==nums[1]-1 || nums[0]==nums[1]+1){
                printf("Yes\n");
            }else{
                printf("No\n");
            }

        }else{
            printf("No\n");
        }
        
    }

 	return 0;
}
