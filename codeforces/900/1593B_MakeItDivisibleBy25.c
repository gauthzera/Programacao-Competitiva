#include <stdio.h>
#include <string.h>


int custo(char c[],char n1,char n2){
    int q=0;
    int tam=strlen(c);

    int indx=tam-1;

    while(indx>=0 && c[indx]!=n2){
        q++;
        indx--;
    }

    if(indx<0)return 100; //não encontrou

    indx--;
    while(indx>=0 && c[indx]!=n1){
        q++;
        indx--;
    }

    if(indx<0)return 100; //não encontrou
    
    return q; //quantidade de removidos
}


int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char num[20];
        scanf("%s",num);
        

        int c1=custo(num,'0','0');
        int c2=custo(num,'2','5');
        int c3=custo(num,'5','0');
        int c4=custo(num,'7','5');
        
        int menor=c1;
        if(c2<menor)menor=c2;
        if(c3<menor)menor=c3;
        if(c4<menor)menor=c4;

        printf("%d\n",menor);
    }
    
    return 0;
}
