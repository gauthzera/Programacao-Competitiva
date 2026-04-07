#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
    int a[2],b[2];
    scanf("%d %d %d %d",&a[0],&a[1],&b[0],&b[1]);
    int pontos=0;
    
   for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int aQ=0,bQ=0; //quantidade de vitorias das cartas A e cartas B

            if(a[i]>b[j])aQ++;
            else if(a[i]<b[j])bQ++;
            //o 1-i faz com que as cartas restantes sejam comparadas
            if(a[1-i] > b[1-j])aQ++;
            else if(a[1-i] < b[1-j])bQ++;

            if(aQ>bQ)pontos++;
        }
    }
    
    printf("%d\n",pontos);
    }

    return 0;
}