#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int q,max=0;
    char aux1,aux2;
    char letra1;
    char letra2;
    
    for(int i=0;i<n-1;i++){
        q=1;
        aux1=str[i];
        aux2=str[i+1];
        for(int j=i+1;j<n-1;j++){
            if(str[j]==aux1 && str[j+1]==aux2)q++; //as 2 letras aparecem juntas
        }
        if(q>max){
            max=q;
            letra1=aux1; //letras que mais apareceram juntas
            letra2=aux2;
        }
    }

    printf("%c%c\n",letra1,letra2);
    
    
    return 0;
}