#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    char x[n+1];
    int meio=n%2==0 ? n/2 -1 : n/2;

    x[meio]=s[0];

    int dir=meio+1,esq=meio-1; //indices

    for(int i=1;i<n;i++){
        if(n%2==0){ //dir->esq
            if(i%2!=0){
                x[dir++]=s[i];
            }else{
                x[esq--]=s[i];
            }
        }else{ //esq->dir
            if(i%2!=0){
                x[esq--]=s[i];
            }else{
                x[dir++]=s[i];
            }
        }
    }
    x[n]='\0';
    printf("%s\n",x);
    
    return 0;
}