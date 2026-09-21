#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve() {
    int n;cin>>n;
    string s;cin>>s;

    string nova="";
    vector<string> silabas;
    for(int i=(int)s.length()-1; i>=0;){
        if(s[i]=='b' || s[i]=='c' || s[i]=='d'){
            nova+=s[i-2];
            nova+=s[i-1];
            nova+=s[i];
            i-=3;
        }else{
            nova+=s[i-1];
            nova+=s[i];
            i-=2;
        }
        silabas.push_back(nova);
        nova="";
    }
   
    for(int i=(int)silabas.size()-1; i>=0; i--){
        if(i>0)cout<<silabas[i]<<'.';
        else cout<<silabas[i]<<'\n';
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}
