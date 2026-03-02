#include <stdio.h>
#include <string.h>

int main(){
    char palavra [1000];
    scanf("%s",palavra);

    if(palavra[0] >= 65 && palavra[0] <= 90){
        printf("%s\n",palavra);
    }else{
        palavra[0]-=32;
        printf("%s\n",palavra);
    }

return 0;
}
