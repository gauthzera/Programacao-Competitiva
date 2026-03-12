#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
   int x=0; //1=par 0=impar
   if(arr[0]%2==0)x=1;
   int y=0;
   if(arr[1]%2==0)y=1;
   
   int check=1;
   for(int i=2;i<n;i+=2){
        if(x==1){
            if(arr[i]%2!=0)check=0; //compara a paridade dos elementos com indice par
        }else{
            if(arr[i]%2==0)check=0;
        }
   }

   for(int i=3;i<n;i+=2){
        if(y==1){
            if(arr[i]%2!=0)check=0; //compara a paridade dos elementos com indice impar
        }else{
            if(arr[i]%2==0)check=0;
        }
   }

    if(check){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    }

    return 0;
}