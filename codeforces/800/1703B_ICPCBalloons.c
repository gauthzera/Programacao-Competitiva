#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int solved[26]={0}; //marca problemas resolvidos
        int q=0;
        for(int i=0;i<n;i++){
            int problem=s[i]-'A';
            if(solved[problem]==0){
                q+=2; //se não tiver sido resolvido q+=2
                solved[problem]=1;
            }
            else{
                q++;
            }
        }
        printf("%d\n",q);
    }
    
    return 0;
}