#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int num,q=0;
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(5-num>=k)q++;
    }
    printf("%d\n",q/3);
    
	return 0;
}
