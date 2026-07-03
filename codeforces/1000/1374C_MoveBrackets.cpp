#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    string s;
    cin>>s;

    int q=0,ans=0;
    for(int i=0;i<n;i++){
        if(s[i]==')')q--;
        if(s[i]=='(')q++;

        if(q<0){
            ans++;
            q=0;
        }
    }
    
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}