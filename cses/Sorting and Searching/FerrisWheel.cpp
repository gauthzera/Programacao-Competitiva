#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve() {
    int n,x;
    cin>>n>>x;
    
    vector<ll> a(n);

    for(int i=0; i<n; i++)cin>>a[i];

    sort(a.begin(),a.end());

    int ans=0;
    int i=0,j=n-1;
    
    while(i<=j){
        if(a[i]+a[j]<=x){
            i++;
        }
        j--;
        ans++;
    }

    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t;cin>>t;
    //while(t--)
    solve(); 
    return 0;
}