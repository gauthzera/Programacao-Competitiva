#include <stdio.h>

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[],int n,int i){
    int maior=i;
    int esq=2*i+1,dir=2*i+2;

    if(esq<n && arr[esq]>arr[maior])maior=esq;
    if(dir<n && arr[dir]>arr[maior])maior=dir;

    if(maior!=i){
        swap(&arr[maior],&arr[i]);
        heapify(arr,n,maior); //verifica subarvores
    }
}

void heapsort(int arr[],int n){
    for(int i=n/2 -1;i>=0 ;i--){
        heapify(arr,n,i); //formação da primeira heap
    }

    for(int i=n-1;i>=1;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

int buscaBinaria(int arr[],int n,int x){
    int l=0,r=n-1;
    int resp=-1;
    while(l<=r){
        int meio=(l+r)/2;
        if(arr[meio]==x){
            resp=meio;
            r=meio-1; //continua procurando à esquerda
        }else if(arr[meio]< x){
            l=meio+1;
        }else{
            r=meio-1;
        }
    }
    return resp;
}


int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int c=1;
    while(!(n==0 && q==0)){
        int arr[n];
        
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        heapsort(arr,n);

        int consulta;
        printf("CASE# %d:\n",c);
        for(int i=0;i<q;i++){
            scanf("%d",&consulta);
            int pos=buscaBinaria(arr,n,consulta);
            if(pos!=-1){
                printf("%d found at %d\n",consulta,pos+1);
            }else{
                printf("%d not found\n",consulta);
            }
        }
        
        c++;
        scanf("%d %d",&n,&q);
    }

    return 0;
}