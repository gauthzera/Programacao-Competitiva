#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){
    int x=*(int*)a;
    int y=*(int*)b;
    
    return x-y;
}

int binarySearch(int arr[],int n,int num){
    int i=0,j=n-1;
    
    int resp=-1;
    while(i<=j){
        int meio=(i+j)/2;
        if(arr[meio]>num){
            j=meio-1;
        }else if(arr[meio]<num){
            i=meio+1;
        }else{
            resp=meio;
            j=meio-1;
        }
    }
    return resp; //retorna a primeira posição
}

int main(){
    int n;

    while(scanf("%d",&n)!=EOF){
        int arr[10000];
        int indx=0;
        while(n--){
            int x,y;
            scanf("%d %d",&x,&y);
            
            for(int i=x;i<=y;i++){
                arr[indx++]=i;
            }
        }

        qsort(arr,indx,sizeof(int),cmp);

        int num;
        scanf("%d",&num);

        int pos=binarySearch(arr,indx,num);
        if(pos!=-1){
            int inicio=pos;
            int fim=pos;

            while(fim<indx && arr[fim]==num)fim++;

            fim--;
            
            printf("%d found from %d to %d\n",num,inicio,fim);

        }else{
            printf("%d not found\n",num);
        }
    }

    return 0;
}