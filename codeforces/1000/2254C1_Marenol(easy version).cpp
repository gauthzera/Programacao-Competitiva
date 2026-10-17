#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve() {
    int n;cin>>n;
    string a;cin>>a;
    string b;cin>>b;
        
    int cntAP=0,cntAI=0;
    int cntBP=0, cntBI=0;

    for(int i=0; i<n; i++){
        if(a[i]=='1'){
            if(i%2==0)cntAP++;
            else cntAI++;
        }

        if(b[i]=='1'){
            if(i%2==0)cntBP++;
            else cntBI++;
        }
    }
    
    if(cntAP==cntBP && cntAI==cntBI){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}