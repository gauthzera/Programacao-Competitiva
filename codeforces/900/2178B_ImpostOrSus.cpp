#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s;cin>>s;
    
    int q=0;
    if(s[0]=='u')q++;
    if(s.back()=='u')q++;
    
    int n=s.size();

    int tam=0;
    for(int i=1;i<n-1;i++){
        if(s[i]=='u'){
            tam++;
        }else{
            if(tam>1){
                q+=tam/2;
            }
            tam=0;
        }
    }
    if(tam>1)q+=tam/2;

   cout<<q<<'\n'; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}
