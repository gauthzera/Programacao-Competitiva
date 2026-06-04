#include <stdio.h>

int main(){ 
    int n,t;
    scanf("%d %d",&n,&t);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
         
    int sum=0,l=0,q=0;
    
    for(int r=0;r<n;r++){
        sum+=arr[r];
        
        while(sum>t){
            sum-=arr[l++]; 
        }

        int tam=r-l+1;
        if(tam>q)q=tam;
    }
    
    printf("%d\n",q);

    return 0;
}