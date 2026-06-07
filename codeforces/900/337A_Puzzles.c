#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){
    int x = *(int*)a;
    int y = *(int*)b;
 
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main(){ 
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,m,sizeof(int),cmp);

    int q=arr[m-1];
    
    int l=0;
    for(int i=n-1;i<m;i++){
        int dif=arr[i]-arr[l];
        if(dif<q)q=dif;
        l++;
    }
    
    printf("%d\n",q);

    return 0;
}