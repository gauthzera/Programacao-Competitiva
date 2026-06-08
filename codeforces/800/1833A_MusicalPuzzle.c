#include <stdio.h>

typedef struct note{
    char x;
    char y;
}note;

int sNote(note arr[],int n,char x,char y){
    for(int i=0;i<n;i++){
        if(arr[i].x==x && arr[i].y==y)return 1;
    }
    return 0;
}

int main() {
   int t;
   scanf("%d",&t);

   while(t--){
        int n;
        scanf("%d",&n);

        char s[n+1];
        scanf("%s",s);
        
        note arr[n];
        int indx=0;
        arr[indx].x=s[0];
        arr[indx++].y=s[1];

        for(int i=2;i<n;i++){
            if(!sNote(arr,n,s[i-1],s[i])){
                arr[indx].x=s[i-1];
                arr[indx++].y=s[i];
            }
        }

        printf("%d\n",indx);
    
   }
    
    return 0;
}

