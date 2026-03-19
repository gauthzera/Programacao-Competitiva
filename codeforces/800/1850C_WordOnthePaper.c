#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    while(t--){
    char str[9]; //8 caracteres e \0
    int indx=0; //index de str
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
           char c;
           scanf(" %c",&c);
            if(c!='.'){
                str[indx++]=c;
            }
        }
    }
    str[indx]='\0'; //coloca o \0
    printf("%s\n",str);

    }

    return 0;
}
