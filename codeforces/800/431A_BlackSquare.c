#include <stdio.h>

int main(){
    int a[5];
    scanf("%d %d %d %d",&a[1],&a[2],&a[3],&a[4]);
    char s[100000];
    scanf("%s",s);
    long long q=0;
    for(int i=0;s[i]!='\0';i++){
        long long c=s[i]-'0';
        q+=a[c];
    }
    printf("%lld\n",q);

    return 0;
}
