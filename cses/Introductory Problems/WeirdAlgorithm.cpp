#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
void solve() {
    ll n;cin>>n;
 
    while(n!=1){
        cout<<n<<' ';
        if(n%2==0){
            n/=2;
        }else{
            n*=3;
            n++;
        }
    }
    
    cout<<n;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    //int t;cin>>t;
    //while(t--)
    solve(); 
    return 0;
