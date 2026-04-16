#include <stdio.h>

int main(){
   int t;
   scanf("%d",&t);

   while(t--){
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long result;
        if(a>b){
            result=(a-b); 
        }else{
            result=(b-a);
        }
        
        if(result==0){
            printf("0\n");
        }else if(result<10){
            printf("1\n");
        }else{
            if(result%10==0){
                printf("%lld\n",result/10);
            }else{
                printf("%lld\n",result/10 + 1);
            }
            
        }
        
   }

	return 0;
}