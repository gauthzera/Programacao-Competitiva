#include <stdio.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int sum[n+1];
    sum[0]=0;
    int h;
    for(int i=1;i<=n;i++){
        scanf("%d",&h);
        sum[i]=sum[i-1]+h;
    }

    int pos=0; //posição primeira cerca do subarray de soma mínima
    int min; //soma minima
    
    for(int i=1;i<=n-(k-1);i++){
        int r=i+k-1;
        if(i==1){
            min=sum[r]-sum[i-1];
            pos=1;
        }else{
            int aux=sum[r]-sum[i-1];
            if(aux<min){
             min=aux;
             pos=i;
            }
      }
    }
    printf("%d",pos);

    return 0;
}