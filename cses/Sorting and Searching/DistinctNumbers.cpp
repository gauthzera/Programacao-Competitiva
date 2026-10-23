#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
void solve() {
    int n;cin>>n;
 
    set<ll> s;
 
    for(int i=0; i<n; i++){
        ll x;cin>>x;
        s.insert(x);
    }
 
    cout<<s.size();
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    //int t;cin>>t;
    //while(t--)
    solve(); 
    return 0;
}
