#include <stdio.h>

int main() {
    char str[101];
    scanf("%s",str);
    
    int letras[26]={0}; //vetor que marca as letras 
    
    for(int i=0;str[i]!='\0';i++){
        letras[str[i]-'a']=1; //a letra apareceu = 1
    }

    int q=0;
    for(int i=0;i<26;i++){
        if(letras[i]==1)q++;
    }


    if(q%2==0)printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

    return 0;
}