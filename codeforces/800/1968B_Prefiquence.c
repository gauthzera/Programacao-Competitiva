#include <stdio.h>

int main(){ 
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        char a[n+1],b[m+1];
        scanf("%s %s",a,b);
        
        int pA=0,pB=0;
        
        int q=0;
        while(pB<m && pA<n){
            if(a[pA]==b[pB]){
                q++;
                pA++;
                pB++;
            }else{
                pB++;
            }
        }
        printf("%d\n",q); 
    }
    
    return 0;
}
