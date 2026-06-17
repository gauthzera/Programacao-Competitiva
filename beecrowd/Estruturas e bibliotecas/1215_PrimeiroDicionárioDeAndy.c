#include <stdio.h>
#include <string.h>

int buscar(char arr[][205],int ind,char s[]){
    for(int i=0;i<ind;i++){
        if(strcmp(arr[i],s)==0)return 1;
    }

    return 0;
}

void insertionSort(char arr[][205],int ind){
    for(int i=1;i<ind;i++){
        char key[205];
        strcpy(key,arr[i]);
        int j=i-1;

        while(j>=0 && strcmp(key,arr[j])<0){
            strcpy(arr[j+1],arr[j]);
            j--;
        }
        strcpy(arr[j+1],key);
    }
}

int main(){
    char frase[205];
    
    char palavras[10000][205];
    int indPalavras;
    
    while(fgets(frase,205,stdin)){

        char nova[200];
        int indNova=0;

        for(int i=0;i<strlen(frase);i++){
            if(frase[i]>='a' && frase[i]<='z')nova[indNova++]=frase[i];
            if(frase[i]>='A' && frase[i]<='Z'){
                frase[i]+=32;
                nova[indNova++]=frase[i];
            }

            if(indNova>0 && (frase[i]==' ' || frase[i]=='\n' || !(frase[i]>='a' && frase[i]<='z')) ){
                nova[indNova]='\0';

                if(!buscar(palavras,indPalavras,nova))strcpy(palavras[indPalavras++],nova);

                indNova=0;
            }
        }
    }
    
    insertionSort(palavras,indPalavras);

    for(int i=0;i<indPalavras;i++){
        printf("%s\n",palavras[i]);
    }
   
    return 0;
}