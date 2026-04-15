#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int q=1,max=1;
        
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                q++;    //tamanho da maior substring de caracteres iguais
                if(q>max)max=q;
            }else{
                q=1;
            }
        }
        printf("%d\n",max+1); 
        
    }

	return 0;
}
