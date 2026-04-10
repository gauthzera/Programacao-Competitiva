#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);

        int m;
        scanf("%d",&m);
        char b[m+1];
        scanf("%s",b);

        char c[m+1];
        scanf("%s",c);
    
        int tam=m+n;
        char str[tam+1];
        for(int i=0;i<n;i++){
            str[i]=a[i]; //copia string a para str
        }
        
        int indxC=0,indxB=0;
        for(int i=n;i<tam;i++){
            if(c[indxC]=='D'){
                str[i]=b[indxB]; //adiciona caracter da string b no final de str
            }else{
                for(int j=i;j>0;j--){
                    str[j]=str[j-1]; //desloca caracteres
                }
                str[0]=b[indxB]; //adiciona caracter de b no início de str
            }
            indxC++;
            indxB++;
        }

        str[tam]='\0';
        printf("%s\n",str);
         
    }

    return 0;
}