#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int q=1; //quantidade de elementos em ordem crescente
    int max=1;

    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            q++;
            if(q>max)max=q; //atualiza o máximo de elementos em ordem crescente
        }else{
        q=1;
        }
    }
    printf("%d\n",max);

    return 0;
}