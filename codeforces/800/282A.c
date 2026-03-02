#include <stdio.h>
#include <string.h>

int main(){
    int n,x=0;

    scanf("%d",&n);

    char op[4];
    for(int i=0;i<n;i++){
    scanf("%s",op);
    if(strcmp(op,"++X")==0 || (strcmp(op,"X++"))==0)x++;
    if(strcmp(op,"--X")==0 ||(strcmp(op,"X--"))==0)x--;
    }
    printf("%d",x);

return 0;
}
