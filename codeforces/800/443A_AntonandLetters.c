#include <stdio.h>
#include <string.h>

 int main(){
     char str[1000];
     fgets(str,1000,stdin);

     int q=0;
     int n=strlen(str);
     int arr[26]={0};

     for(int i=0;i<n;i++){
         if(str[i]>='a' && str[i]<='z'){
            arr[str[i]-'a']=1;
         }
     }

     for(int i=0;i<26;i++){
         if(arr[i]==1)q++;
     }

     printf("%d\n",q);
     return 0;
 }
