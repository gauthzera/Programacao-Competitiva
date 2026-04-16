#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    while(n--){
        int l;
        scanf("%d",&l);
        int arr[l];
        for(int i=0;i<l;i++){
            scanf("%d",&arr[i]);
        }

        int trocas=0;

        for(int i=0;i<l-1;i++){
            for(int j=0;j<l-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    trocas++; //quantidade de trocas de elemento adjacentes
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",trocas);
        
    }

    return 0;
}