#include <stdio.h>

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}

int main() {
    int n; //columns
    scanf("%d",&n);
    int cubes[n];

    for(int i=0;i<n;i++){
        scanf("%d",&cubes[i]);
    }
    insertionSort(cubes,n);

    for(int i=0;i<n;i++){
        printf("%d ",cubes[i]);
    }

    return 0;
}
