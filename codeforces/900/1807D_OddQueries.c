#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int n,q;
        scanf("%d %d",&n,&q);
        long long arr[n+1];
        long long pref[n+1];//soma prefixada dos elementos de 1 até i
        pref[0]=0;

        long long sum=0; //soma total do elementos
        for(int i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
            sum+=arr[i];
            pref[i]=pref[i-1] + arr[i];
        }

        long long l,r,k;
        for(int i=0;i<q;i++){
        scanf("%lld %lld %lld",&l,&r,&k);

        long long dif=pref[r]-pref[l-1];
        long long aux=sum - dif;
            aux+=k*(r-l+1);
            if(aux%2!=0)printf("YES\n");
            else printf("NO\n");
        }
    }
    
    return 0;
}