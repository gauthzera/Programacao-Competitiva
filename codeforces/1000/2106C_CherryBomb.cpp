#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);
    vector<ll> b(n);
    
    ll maxA=-1,minA=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(maxA==-1 || a[i]>maxA)maxA=a[i];
        if(minA==-1 || a[i]<minA)minA=a[i];
    }
    ll sum=-1;
    int ok=1;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]!=-1){
            if(sum!=-1 && a[i]+b[i]!=sum)ok=0;
            sum=a[i]+b[i];
        }
    }
    
    if(!ok){
        cout<<"0"<<"\n";
    }else{
        if(sum==-1){
            cout<<(k+minA)-maxA + 1<<"\n";
        }else{
           if((minA+k < sum) || sum<maxA){
                cout<<"0"<<"\n";
           }else{
                cout<<"1"<<endl;
           }
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;

    while(t--){
        solve();
    }

    return 0;
}