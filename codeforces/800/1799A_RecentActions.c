#include <stdio.h>

int main(){ 
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int arr[n];
        
        int posts[m],p[n+m];
        for(int i=0;i<m;i++){
            scanf("%d",&posts[i]);
            p[posts[i]]=0; //n tá no feed 
        }

        for(int i=0;i<n;i++){
            arr[i]=-1;
            p[i+1]=1; //tá no feed os posts de 1 até n;
        }

        int ind=n-1,time=1;
        
        for(int i=0;i<m;i++){
            if(p[posts[i]]==0){
                arr[ind--]=time;
                p[posts[i]]=1; //tá no feed
            }
            time++;
        }
        
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

    }

    return 0;
}