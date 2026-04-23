#include <stdio.h>

int main(){
    long long n,m;
    scanf("%lld %lld",&n,&m);
    long long a[m+1];
    for(int i=1;i<=m;i++){
        scanf("%lld",&a[i]);
    }
    int indx=1;
    long long atual=1,task=a[indx++];
    long long q=0;

    while(m!=0){
        q+=(task-atual+n)%n; //caminhos percorridos
        atual=task;
        task=a[indx++];
        m--;
    }
    printf("%lld\n",q);

	return 0;
}