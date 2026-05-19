#include <stdio.h>

#define ll long long

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int i,j;
        ll n,m;
        scanf("%lld %lld %d %d",&n,&m,&i,&j);
        
        int x1,y1,x2,y2;
        x1=1,y1=1;
        x2=n,y2=m;
        
        printf("%d %d %d %d\n",x1,y1,x2,y2);
        
    }

    return 0;
}