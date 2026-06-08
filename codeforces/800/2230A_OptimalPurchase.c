#include <stdio.h>

#define ll long long

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        ll n,a,b;
        scanf("%lld %lld %lld",&n,&a,&b);
        
        ll total=0;
        ll g3=n/3;
        ll resto=n%3;
        
        if(b<3*a){
            total+=g3*b;
        }else{
            total+=3*g3*a;
        }
          
        if(a*resto<b){
             total+=a*resto;
         }else{
             total+=b;
         }

        printf("%lld\n",total);
    }

    return 0;
}
