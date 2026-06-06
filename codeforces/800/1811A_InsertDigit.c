#include <stdio.h>

int main(){ 
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        char d;
        scanf("%d %c",&n,&d);
    
        char num[n+1];
        scanf("%s",num);

        int pos=-1;
        for(int i=0;i<n;i++){
            if(num[i]-'0'<d-'0'){
                pos=i;
                break;
            }
        }
        
        if(pos==-1){
            printf("%s%c",num,d);
        }else{
            for(int i=0;i<n;i++){
                if(i==pos)printf("%c",d);
                printf("%c",num[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
