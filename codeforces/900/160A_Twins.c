#include <stdio.h>
    
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key>arr[j]){ //deixa em ordem decrescente
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int coins[n];
    
    int total=0;
    for(int i=0;i<n;i++){
        scanf("%d",&coins[i]);
        total+=coins[i];
    }
    
    insertionSort(coins,n); 

    int q=0; //total de moedas
    int res=0,i=0; //valor total das moedas 
    while(res<=total/2){
        res+=coins[i++];
        q++;
    }
    printf("%d",q);
    
    return 0;
}
