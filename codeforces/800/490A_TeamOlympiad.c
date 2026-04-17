#include <stdio.h>

int menor(int a,int b,int c){
    int menor=a;
    if(b<menor)menor=b;
    if(c<menor)menor=c;
    return menor;
}

int main() {
    int n;
    scanf("%d",&n);
    int x;
    
    int g1[n+1],indx1=0; //guarda os índices de 1's, 2's e 3's
    int g2[n+1],indx2=0;
    int g3[n+1],indx3=0;
    
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x==1){
            g1[indx1++]=i;
        }else if(x==2){
            g2[indx2++]=i;
        }else{
            g3[indx3++]=i;
        }
    }
    int q=0;
    q=menor(indx1,indx2,indx3); //tamanho máximo de times

    printf("%d\n",q);
    if(q!=0){
        for(int i=0;i<q;i++){
            printf("%d %d %d\n",g1[i],g2[i],g3[i]);
        }
    }


    return 0;
}