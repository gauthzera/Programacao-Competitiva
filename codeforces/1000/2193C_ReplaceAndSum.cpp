#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,q;
    cin>>n>>q;
    
    vector<int> a(n+1),b(n+1);
    vector<int> pref(n+1);

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        cin>>b[i];
        if(b[i]>a[i])a[i]=b[i];
    }
    
    for(int i=n-1;i>=0;i--){
        if(a[i+1]>a[i])a[i]=a[i+1];
    }
    
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+a[i];
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        int sum=pref[r]-pref[l-1];
        
        cout<<sum<<' ';

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
 