#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    int maior=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>maior)maior=arr[i];
    }

    int total=0;
    for(int i=0;i<n;i++){
        total+=(maior-arr[i]);
    }
    
    printf("%d\n",total);
    return 0;
}
