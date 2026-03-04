#include <stdio.h>
#include <string.h>

int main() {
   char p[101];
   scanf("%s",p);

   int tam=strlen(p);
   int l=0;

   for(int i=0;i<tam;i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            l=1;
            i=tam+1;
        }
   }

   if(l){
        printf("YES\n");
   }else{
        printf("NO\n");
   }

    return 0;
}
