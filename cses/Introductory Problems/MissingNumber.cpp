#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
void solve() {
    int n;cin>>n;
 
    vector<bool> a(n+1);
 
    for(int i=1; i<n; i++){
        int x;cin>>x;
 
        a[x]=true;
    }
    
    int r=0;
    
    for(int i=1; i<=n; i++){
        if(a[i]==false){
            r=i;
            break;
        }
    }
    cout<<r;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    //int t;cin>>t;
    //while(t--)
    solve(); 
    return 0;
