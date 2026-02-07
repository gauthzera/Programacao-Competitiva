#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;

    int p,q;
    vector<int> levels(n,0); //todos elementos do array iniciam com valendo 0

    cin>>p;
    int x;

    for(int i=0;i<p;i++){
        cin>>x;      //indices levels X;
        levels[x-1]=1;   //marca no array se passou do leve x-1
    }

    cin>>q;

    for(int i=0;i<q;i++){
        cin>>x;   //indices levels Y;
        levels[x-1]=1;    //marca no array se passou do level x-1

    }

    int cont=0; //contador dos levels

    for(int num:levels){
        if(num==1)cont++;
    }

    if(cont==n){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }

    return 0;
}
