#include <stdio.h>

#define ll long long

int main(){
    int t;
    scanf("%d",&t);

    ll x,y;
    while(t--){
        scanf("%lld %lld",&x,&y);
        
        if((x+y)%3==0 && y<=x/2 && y>=-x/4){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

    }

  	return 0;
}