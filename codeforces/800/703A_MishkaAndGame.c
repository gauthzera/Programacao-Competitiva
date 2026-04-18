#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int qM=0,qC=0,m,c;

    for(int i=0;i<n;i++){
        scanf("%d %d",&m,&c);
        if(m>c)qM++;
        if(c>m)qC++;
    }
    
    if(qM>qC)printf("Mishka\n");
    else if(qC>qM)printf("Chris\n");
    else printf("Friendship is magic!^^\n");
    
    
    return 0;
}
