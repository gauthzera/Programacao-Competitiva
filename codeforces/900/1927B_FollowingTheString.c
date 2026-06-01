#include <stdio.h>

int busca(int freq[],int q){
    for(int i=0;i<26;i++){
        if(freq[i]==q)return i;
    }
    return 0;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int freq[26]={0};
        int n;
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        
        int inc=0;

        char s[n+1];

        for(int i=0;i<n;i++){
            int q=arr[i];
            if(q==0){
                freq[inc]++;
                s[i]='a'+ inc;
                inc++;
            }else{
                int val=busca(freq,q);
                s[i]='a'+val;
                freq[val]++;
            }
        }

        s[n]='\0';
        printf("%s\n",s);
    }

    return 0;
}