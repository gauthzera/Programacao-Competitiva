#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n+1];
        scanf("%s",s);

        int maiorBloco1=-1,q=0;
        
        int p[n]; //array com a permutação
        for(int i=0;i<n;i++){
            p[i]=0;
            if(s[i]=='1'){
                q++;
                p[i]=-1;
            }

            if(s[i]=='0'){
                if(q>maiorBloco1)maiorBloco1=q;
                q=0;
            }
        }
        if(q>maiorBloco1)maiorBloco1=q;

        if(maiorBloco1>=k){
            printf("NO\n");
        }else{
        
        int num=n;
        for(int i=0;i<n;i++){
            if(p[i]==0)p[i]=num--;
        }
       
        printf("YES\n");
        for(int i=0;i<n;i++){
            if(p[i]==-1)p[i]=num--;
            printf("%d ",p[i]);
        }
        printf("\n"); 
    }
    }
    
    return 0;
}