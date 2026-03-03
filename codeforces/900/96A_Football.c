#include <stdio.h>

int main() {
    char str[101];
    scanf("%s",str);

    int q1=0,q0=0;
    int flag=0; //variável para parar o loop e caso seja 0, imprimir 'NO'

     for(int i=0;str[i]!='\0' && flag==0;i++){
         if(str[i]=='1'){
             q1++;
             q0=0;
         }
         if(str[i]=='0'){
            q0++;
            q1=0;
         }
         if(q1==7 || q0==7){ //se um contador for igual a 7 imprime na tela
          printf("YES\n");
          flag=1;
         }

     }

     if(flag==0)printf("NO\n");

     return 0;
}
