#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve(){
    int n;cin>>n;
    string s;cin>>s;

    bool bloco0=false;
    string f="";

    for(int i=0; i<(int)s.size(); i++){
        if(s[i]=='1'){
            if(bloco0){
                f+='0';
            }
            bloco0=false;
            f+='1';
        }else{
            bloco0=true;
        }
    }
    if(bloco0)f+='0';

    int c0=0,c1=0;

    for(char c : f){
        if(c=='0')c0++;
        if(c=='1')c1++;
    }

    if(c1>c0)cout<<"YES\n";
    else cout<<"NO\n";
    
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