#include <stdio.h>
    
void quicksort(int arr[],int l,int r){
    int pivot=arr[(l+r)/2];
    int i=l,j=r;
    
    while(i<=j){
        while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;

        if(i<=j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    
    if(i<r)quicksort(arr,i,r);
    if(j>l)quicksort(arr,l,j);
}


int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m];

    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    
    int pos=0;
    int dif=1000; //valor maximo de peças
    
    quicksort(arr,0,m-1); //ordenação

    while(n<=m){
        int maior=arr[pos],menor=maior;

        for(int i=pos;i<n;i++){ 
            if(arr[i]>maior)maior=arr[i];
            if(arr[i]<menor)menor=arr[i];
        }
        //pega a diferença entre o maior e menor a cada n elementos
        int aux=maior-menor;
        if(aux<dif)dif=aux;
        pos++;
        n++;
    }

    printf("%d\n",dif);
    
    return 0;
}
