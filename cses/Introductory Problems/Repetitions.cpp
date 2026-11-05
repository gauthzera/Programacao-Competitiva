#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s;cin>>s;
    int n=s.length();

    int q=1;
    int resp=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            q++;
        }else{
            resp=max(resp,q);
            q=1;
        }
    }
    resp=max(resp,q);

    cout<<resp<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t;cin>>t;
    //while(t--)
    solve();
    return 0;
}