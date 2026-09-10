#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    char c[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>c[i][j];
        }
    }
    
    bool red;
    
    for(int i=0; i<8; i++){
        if(c[i][0]=='R'){
            red=true;
            for(int j=0; j<7; j++){
                if(c[i][j]!=c[i][j+1]){
                    red=false;
                    break;
                }
            }
            if(red){
                cout<<"R\n";
                return;
            }
        }
    }
    
   cout<<"B\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)solve();
    return 0;
}