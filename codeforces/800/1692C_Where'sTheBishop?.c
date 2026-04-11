#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char tab[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                scanf(" %c",&tab[i][j]);
            }
        }
        
        int c,r;
        for(int i=1;i<7;i++){
            int aux1=0,aux2=0; //sinaliza que encontrou a dama
            for(int j=1;j<7;j++){
                if(tab[i][j]=='#')
                    if(tab[i-1][j-1]=='#' && tab[i-1][j+1]=='#'){
                        aux1=1; //linha anterior tem 2 # separados por um espaço
                    }
                    if(tab[i+1][j-1]=='#' && tab[i+1][j+1]=='#'){
                        aux2=1; //linhas posterior tem 2 # separados por um espaço
                    }
                    if(aux1==1 && aux2==1){
                        r=i;
                        c=j;
                        break;
                    }
            }
        }
        printf("%d %d\n",r+1,c+1);
        
    }
    
    return 0;
}