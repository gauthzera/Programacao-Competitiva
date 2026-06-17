#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,x,y,z;
        scanf("%d %d %d %d",&n,&x,&y,&z);
        
        int h1=n/(x+y);
        
        if(n%(x+y)!=0)h1++;

        int h2=0;
      
        int auxN=n-x*z;
        int l=10*y + x;
        h2= auxN/l + z;

        if(auxN%l!=0)h2++;
        
        printf("%d\n",h1 < h2 ? h1 : h2);
    }
    
    return 0;
} 