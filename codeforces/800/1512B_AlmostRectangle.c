#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
    int n;
    scanf("%d",&n);

    char m[n][n];
    int x1=-1,y1=-1,x2=-1,y2=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf(" %c",&m[i][j]);
            if(m[i][j]=='*'){
                if(x1==-1){ //marca as coordenadas de *
                    x1=i;
                    y1=j;
                }else{
                    x2=i;
                    y2=j;
                }
            }
        }
    }
   //possiveis casos 
    if(x1==x2){
        if(x1<n-1){
        m[x1+1][y1]='*';
        m[x2+1][y2]='*';
        }else{
            m[x1-1][y1]='*';
            m[x2-1][y2]='*';
        }
    }else if(y1==y2){
        if(y1<n-1){
            m[x1][y1+1]='*';
            m[x2][y2+1]='*';
        }else{
            m[x1][y1-1]='*';
            m[x2][y2-1]='*';
        }
    }else{
        m[x1][y2]='*';
        m[x2][y1]='*';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",m[i][j]);
        }
        printf("\n");
    }
    
    }
    
	return 0;
}