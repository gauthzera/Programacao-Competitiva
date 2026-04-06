#include <stdio.h>
 
int main(){
    int t;
    scanf("%d",&t);
 
    while(t--){
    int n;
    scanf("%d",&n); //quantidade de rodas
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
 
    for(int i=0;i<n;i++){
        int b;
        scanf("%d",&b); //total de movimentos
        char seq[b+1];
        scanf("%s",seq);
 
            for(int j=0;j<b;j++){
                if(seq[j]=='U'){
                    arr[i]=(arr[i]-1+10)%10; //altera a posição de forma circular
                }else{
                    arr[i]=(arr[i]+1)%10;
                }
            }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
        printf("\n");
    
    }
    
    return 0;
}