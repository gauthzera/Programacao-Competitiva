#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){ //função cmp do qsort
    long long x=*(long long*)a;
    long long y=*(long long*)b;

    if(x<y)return -1;
    if(x>y)return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d",&n);
    long long v[n+1]; //custos não ordenados
    long long pref[n+1]; //prefix p custos não ordenados

    long long u[n+1]; //para custos ordenados
    long long prefU[n+1]; //prefix p custos ordenados
    v[0]=0;
    u[0]=0;
    pref[0]=0;
    prefU[0]=0;

    for(int i=1;i<=n;i++){
        scanf("%lld",&v[i]);
        pref[i]=pref[i-1]+v[i];
        u[i]=v[i];
    }

    qsort(u, n+1, sizeof(long long), cmp); 

    for(int i=1;i<=n;i++){
        prefU[i]=prefU[i-1]+u[i];
    }

    int m;
    scanf("%d",&m); //m questions
    int type,l,r;

    while(m--){
        scanf("%d %d %d",&type,&l,&r);
        long long res=0;
        if(type==1){
            res=pref[r]-pref[l-1]; //soma dos custos não ordenados
        }else{
            res=prefU[r]-prefU[l-1]; //soma dos custos ordenados;
        }
        printf("%lld\n",res);
    }

    return 0;
}