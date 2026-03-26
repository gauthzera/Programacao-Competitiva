#include <stdio.h>
    
int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        int n;
        scanf("%d",&n);
        int freq[10001]={0}; //frequencia dos elementos
 
        int num;
        int q=n*(n-1); //frequencia máxima possível
 
        int possivel=1;
        for(int i=0;i<n*n;i++){
            scanf("%d",&num);
            freq[num]++;
            if(freq[num]>q)possivel=0;
        }
 
        if(possivel){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    
 
    return 0;
}