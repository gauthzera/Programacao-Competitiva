#include <stdio.h>

int verifica(char str[],int tam){
    int q=0;
    for(int i=0;i<tam;i++){
        if(str[i]=='(')q++;
        if(str[i]==')')q--;
        if(q<0)return 0;
    }
    if(q==0)return 1;
    return 0;
}

int main(){
    char str[1001];
    while(scanf("%s",str)!=EOF){
    int tam=0;
    for(int i=0;str[i]!='\0';i++)tam++;
    
    if(verifica(str,tam)){
        printf("correct\n");
    }else{
        printf("incorrect\n");
    }

   }
    
    return 0;
}