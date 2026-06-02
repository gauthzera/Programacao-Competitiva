#include <stdio.h>

int main(){ 
    int n;
    scanf("%d",&n);
    
    int f[3];
    scanf("%d %d %d",&f[0],&f[1],&f[2]);
    n--;
    while(n--){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        f[0]+=x;
        f[1]+=y;
        f[2]+=z;
    }
    if(f[0]==0 && f[1]==0 && f[2]==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}