#include <stdio.h>

int main() {
    int k;
    scanf("%d",&k);
    int n,m;
    int x,y;
    while(k!=0){
            scanf("%d %d",&n,&m);
            for(int i=0;i<k;i++){
                    scanf("%d %d",&x,&y);
                    if(y==m || x==n)printf("divisa\n");
                    if(y>m && x>n)printf("NE\n");
                    if(y>m && x<n)printf("NO\n");
                    if(y<m && x>n)printf("SE\n");
                    if(y<m && x<n)printf("SO\n");
            }

            scanf("%d",&k);

    }

    return 0;
}