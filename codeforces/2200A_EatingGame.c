#include <stdio.h>

int main() {
     int t;
     scanf("%d",&t);

     int n;

     while(t-- >0){
         scanf("%d",&n);
         int arr[n];
         for(int i=0;i<n;i++){
             scanf("%d",&arr[i]);
         }


         int maior=arr[0];
         int q=1;
         for(int i=1;i<n;i++){
             if(arr[i]>maior){ //se tiver um maior, troca e reinicia a contagem
                     maior=arr[i];
                     q=1;
             }else if(arr[i]==maior){
                 q++;   //incrementa quantidade de maiores
             }
         }
         printf("%d\n",q);

     }

     return 0;
}
