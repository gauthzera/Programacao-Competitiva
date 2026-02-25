#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int crimes=0;
    int policiais=0;
    int evento[n];

     for(int i=0;i<n;i++){
         scanf("%d",&evento[i]);
         if(evento[i]==-1){
             crimes++;
            if(policiais!=0){ //se tiver policial disponível
                 policiais--; //diminui um crime e um policial
                 crimes--;
             }
         }
         if(evento[i]!=-1)policiais+=evento[i];
     }

     printf("%d\n",crimes);

     return 0;
}
