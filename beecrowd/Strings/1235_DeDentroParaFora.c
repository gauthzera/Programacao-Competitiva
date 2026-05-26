#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* metodo(char s[],int tam){
    char *str=malloc(sizeof(tam+1));
    
    int indx=0;
    for(int i=(tam/2) -1;i>=0;i--){
        str[indx++]=s[i];
    }

    for(int i=tam-1;i>=tam/2;i--){
        str[indx++]=s[i];
    }
    
    str[tam]='\0';
    return str;
}


int main(){
    int n;
    scanf("%d",&n);

    getchar();
    while(n--){
        char s[110];
        fgets(s,110,stdin);
        int tam=strlen(s);
        s[tam-1]='\0';
        tam--;
        
        char *str=metodo(s,tam);
        printf("%s\n",str);
    }
    
    return 0;
}