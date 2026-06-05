#include <stdio.h>

int main(){ 
    int t;
    scanf("%d",&t);

    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n+1];

        scanf("%s",s);

       int q=0,awake=-1,qA=0;

        for(int i=0;i<n;i++){
           if(s[i]=='1'){
                awake=i + k;
            }
            
           if(i>awake && s[i]=='0'){
            q++;
           }
             
        }

        printf("%d\n",q);
    }

    return 0;
}