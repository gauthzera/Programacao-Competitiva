#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
void solve() {
    
    ll mod=1e9 + 7;
 
    int n;cin>>n;
 
    vector<int> dp(n+1,0);
    dp[0]=1;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6; j++){
            if(i-j>=0){
                dp[i]=(dp[i] + dp[i-j]) % mod;
            }
        }
    }
 
    cout<<dp[n];
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    //int t;cin>>t;
    //while(t--)
    solve(); 
    return 0;
