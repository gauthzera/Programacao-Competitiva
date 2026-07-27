#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<ll> a(n);
    
    ll k=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
        if(i>0 && a[i]<a[i-1]){
            k=max(a[i-1]-a[i],k);
        }
    }

    if(k==-1){
        cout<<"YES\n";
        return;
    }
    
    bool ans=true;
    
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            a[i]+=k;
        }

    }
    
    if(!is_sorted(a.begin(),a.end()))ans=false; 
    
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}