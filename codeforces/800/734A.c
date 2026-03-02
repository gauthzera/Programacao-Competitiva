#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    char result[n];
    scanf("%s",result);

    int qA=0,qD=0;

    for(int i=0;i<n;i++){
        if(result[i]=='A')qA++;
        if(result[i]=='D')qD++;
    }

    if(qA>qD){
        printf("Anton\n");
    }else if(qD>qA){
        printf("Danik\n");
    }else{
        printf("Friendship\n");
    }

    return 0;
}

