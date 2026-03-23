#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int dif=arr[0]-arr[1];
    if(dif<0)dif*=-1;
    int p1=1,p2=2;

    for(int i=0;i<n;i++){
        int dif2=arr[i]-arr[(i+1)%n];

        if(dif2<0)dif2*=-1;
        if(dif2<=dif){
            dif=dif2;
            p1=i+1,
            p2=(i+1)%n + 1;
        }
    }
   printf("%d %d\n",p1,p2); 

    return 0;
}
