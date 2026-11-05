#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;

    vector<ll> a(n);
    vector<int> resp;
    
    int indx=-1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>0)indx=i;
    }

    bool flip= false;
    int q=0;

    for(int i=indx; i>=0; i--){
        if(i!=indx && flip){
            a[i]*=-1;
        }
        
        if(a[i]>0){
            flip=!flip;
            a[i]*=-1;
            resp.push_back(i+1);
            q++;
        }
    }

    cout<<q<<'\n';
    for(int x : resp){
        cout<<x<<' ';
    }
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}