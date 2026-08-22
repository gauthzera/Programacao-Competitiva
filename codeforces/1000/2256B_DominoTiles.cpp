#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    
    int ans=0;

    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            bool valid=true;
            
            for(int k=0; k<n; k++){
                int esperado;
                
                if(k%4==0)esperado=i; //valores esperados de cada posição
                if(k%4==1)esperado=j;
                if(k%4==2)esperado=1-i;
                if(k%4==3)esperado=1-j;

                if(s[k]!='?' && s[k]-'0' != esperado){
                    valid=false;
                    break;
                }
            }
            
            //percorreu a string toda sem achar erros
            if(valid)ans++;
        }
    }
    cout<<ans<<'\n'; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}