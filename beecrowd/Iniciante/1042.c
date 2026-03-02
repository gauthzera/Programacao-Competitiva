#include <stdio.h>

int main(){
    int v1,v2,v3,temp;
    scanf("%d %d %d",&v1,&v2,&v3);
    int n1=v1,n2=v2,n3=v3;

    if(v2<v1){
        temp=v1;
        v1=v2;
        v2=temp;
    }

    if(v3<v1){
        temp=v1;
        v1=v3;
        v3=temp;
    }

    if(v2>v3){
        temp=v3;
        v3=v2;
        v2=temp;
    }

    printf("%d\n%d\n%d\n\n",v1,v2,v3);
    printf("%d\n%d\n%d\n",n1,n2,n3);

return 0;
}