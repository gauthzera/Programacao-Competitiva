#include <stdio.h>

int main(){
    int n;

    while(scanf("%d",&n)!=EOF){
        int qLinhas=(n+1)/2; //total de linhas
        int espacos=qLinhas-1; //total de espaços antes de "*"

        for(int i=0;i<qLinhas;i++){
            for(int j=0;j<espacos;j++){
                printf(" ");
            }
                
            for(int j=0;j<2*i+1;j++){
                    printf("*");
            }    
            espacos--;
            printf("\n");
        }
        
        espacos=qLinhas-1;
        for(int i=0;i<2;i++){
            for(int j=0;j<espacos;j++){
                printf(" ");
            }
                
            for(int j=0;j<2*i+1;j++){
                    printf("*");
            }    
            espacos--;
            printf("\n");
        }
        printf("\n");

    }
    
    return 0;
}