#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    int n;
    while(t-- >0){
    scanf("%d",&n);
    
    int freq[n+1]; //vetor com a frequência de cada número

    for(int i=0;i<=n;i++){
        freq[i]=0; //inicializa elementos com zero
       }

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        freq[x]++; //lê x e incrementa freq[x];
    }

    int num=-1;
    for(int i=0;i<=n;i++){
        if(freq[i]>=3){
            num=i;
            break;
        }
    }
    printf("%d\n",num);
}

    return 0;
}