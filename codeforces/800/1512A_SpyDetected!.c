#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int pos=0; //começa supondo que arr[0] é o número diferente
    for(int i=1;i<n;i++){
        if(i<n-1){
            if(arr[i]!= arr[i-1] && arr[i-1]==arr[i+1]){
                pos=i;
                break;
            }
        }else{
            if(arr[i]!=arr[i-1] && arr[i-1]==arr[i-2]){
                pos=i;
            }
        }
    }
    printf("%d\n",pos+1);
     
    }

	return 0;
}