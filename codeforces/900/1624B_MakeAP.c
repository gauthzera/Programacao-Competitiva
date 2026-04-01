#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        
        //2b = c+a
        if(((2*b -c)%a==0 && 2*b-c >0)|| ((2*b-a)%c==0 && 2*b-a>0) || (a+c)%(2*b)==0){
                printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}