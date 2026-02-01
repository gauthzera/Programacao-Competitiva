#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;

    vector<int> p(n);

    for(int i=0;i<n;i++){
        cin>>p[i]; 
    }

    vector<int> result(n);

    for(int i=0;i<n;i++){
        int pos;
        result[p[i]-1]=i+1;
        }

        for(int x:result){
            cout<<x<<" ";
        }

    return 0;
}
