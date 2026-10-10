#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve() { 
    string s;cin>>s;
    
    int n=s.length();

    if(s[0]!=s[n-1]){
        s[n-1]=s[0];
    }   

    cout<<s<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}