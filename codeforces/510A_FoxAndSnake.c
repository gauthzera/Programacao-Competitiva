#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
            //ou 51 pois m<=50;
    char c1[m+1];
    char c2[m+1];
    char c3[m+1];

    //forma os padrões
    for(int i=0; i<m; i++){
        c1[i]='#';

        if(i<m-1){
            c2[i]='.';
        }
        else{
            c2[i]='#';
        }

        if(i==0){
            c3[i]='#';
        }
        else{
            c3[i]='.';
        }
    }

    c1[m]='\0';
    c2[m]='\0';
    c3[m]='\0';

    int xc2=1; //variável que marca quando imprimir c2 e c3

    for(int i=0; i<n; i++){
        if(i%2==0){
            printf("%s\n",c1);
        }
        else{
            if(xc2==1){
                printf("%s\n",c2);
                xc2=0;
            }
            else{
                printf("%s\n",c3);
                xc2=1;
            }
        }
    }

    return 0;
}
