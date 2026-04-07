#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    while(n--){
        char str1[51],str2[51];
        scanf("%s %s",str1,str2);
        
        int tam1=0,tam2=0;
        for(int i=0;str1[i]!='\0';i++)tam1++;
        for(int i=0;str2[i]!='\0';i++)tam2++;
        
        char str3[tam1+tam2+1];
        int indx=0,i=0,j=0;
        while(str1[i]!='\0' && str2[j]!='\0'){
            str3[indx++]=str1[i++];
            str3[indx++]=str2[j++];
        }

        if(i<tam1){
            while(i<=tam1){
                str3[indx++]=str1[i++];
            }
        }else if(j<tam2){
            while(j<=tam2){
                str3[indx++]=str2[j++];
            }
        }
        str3[indx]='\0';
        printf("%s\n",str3);

    }
        
    return 0;
}