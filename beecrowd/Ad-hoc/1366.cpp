#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;

    while(n!=0){
        int c,v;
        int qPares=0;

        for(int i=0;i<n;i++){
        cin>>c>>v;
        qPares+=v/2;
        }

        cout<<qPares/2<<endl; //quantidade máxima de retangulos
        cin>>n;
    }

    return 0;
}
