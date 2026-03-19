#include <stdio.h> 

void quicksort(long long int arr[],int low, int high){
    if(low>=high)return;
 
    long long int pivot=arr[(low+high)/2];
    int i=low;
    int j=high;
 
    while(i<=j){
        while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;
 
        if(i<=j){
            long long int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if(low<j)quicksort(arr,low,j);
    if(i<high)quicksort(arr,i,high);
    
    
}
 
int main(){
    int t;
    scanf("%d",&t);
 
    while(t--){
    int n;
    long long int k;
    scanf("%d %lld",&n,&k);
 
    long long int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
 
   quicksort(arr,0,n-1);
 
    int q=1;
    int max=1;
    int pos=n-1;
    for(int i=n-1;i>0;i--){
        if(arr[i]-arr[i-1]<=k){
            q++;
            if(q>max)max=q; //maior sequencia de ex possíveis
        }else{
            q=1; //quando a sequencia falhar, volta a ser 1 ex
        }
    }
 
    int min=n-max; //quantidade de exercícios a serem removidos
    printf("%d\n",min);
        
    }
 
	return 0;
}