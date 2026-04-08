#include <stdio.h>

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int k;
    int arr[12];

    scanf("%d",&k);
    for(int i=0;i<12;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,12);

    int q=0,aux=0,sum=0;
    for(int i=11;i>=0;i--){
        sum+=arr[i];
        q++;
        if(sum>=k){
            aux=1;
            break;
        }
    }
    if(aux==0)q=-1;
    if(k==0)q=0;

    printf("%d\n",q);
    
	return 0;
}