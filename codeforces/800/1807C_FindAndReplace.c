#include <stdio.h>

int verifica(char s[],int n,int inicio){
    if(n==1)return 1;
    int letras[26]; //marca se vai ser 0 ou 1
    for(int i=0;i<26;i++){
        letras[i]=-1;
    }
    
    for(int i=0;i<n;i++){
        int c=s[i]-'a';
        int valor=(i%2==0) ? inicio : 1 - inicio //letra c recebe 1 ou 0;
        if(letras[c]==-1){
            letras[c]=valor;
        }else{
            if(letras[c]!=valor)return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);

        if(verifica(str,n,0) || verifica(str,n,1)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    
    return 0;
}