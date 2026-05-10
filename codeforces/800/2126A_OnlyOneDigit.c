#include <stdio.h>

int main(){
     int t;
     scanf("%d",&t);

     while(t--){
        int x;
        scanf("%d",&x);

        int arr[4]={0};
        int indx=0;

        while(x>0){
            arr[indx++]=x%10;
            x=x/10;
        }

        int menor=arr[0];

        for(int i=1;i<indx;i++){
            if(arr[i]<menor)menor=arr[i];
        }
        printf("%d\n",menor);
     }
     
    return 0;
}