#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<ll> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    set<ll> disponiveis;

    for(int i=0;i<n;i++){
        ll x;cin>>x;
        disponiveis.insert(x);
    }
        
    vector<ll> escolhido(n);
    for(int i=0;i<n;i++){
        auto it=disponiveis.lower_bound(a[i]); //retorna um iterador para o elemento >=a[i]

        if(it == disponiveis.end()){ //n encontrou >=a[i]
            cout<<-1<<'\n';
            return;
        }
        escolhido[i]= *it;
        disponiveis.erase(it);
    }
    int q=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(escolhido[i]>escolhido[j])q++;
        }
    }
    cout<<q<<'\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0; 
}