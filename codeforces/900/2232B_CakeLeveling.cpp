#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<ll> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    ll ans=a[0];
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        
        ans=min(ans,sum/(i+1));

        cout<<ans<<' ';
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