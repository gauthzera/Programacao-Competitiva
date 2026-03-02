#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int q=0;
    char str[20];

    while(n-- >0){
       scanf("%s",str);

        if(str[0]=='T'){
          q+=4;
        }else if(str[0]=='I'){
          q+=20;
        }else if(str[0]=='C'){
          q+=6;
        }else if(str[0]=='D'){
          q+=12;
        }else if(str[0]=='O'){
        q+=8;
        }

     }

     printf("%d\n",q);

    return 0;
 }
