#include <bits/stdc++.h>

using namespace std;

int main() {
        int n,t;
        cin>>n>>t;

        string q;
        cin>>q;

        for(int i=0;i<t;i++){
            for(int j=1;j<n;j++){
                if(q[j]=='G' && q[j-1]=='B'){
                    char temp=q[j];
                    q[j]=q[j-1];
                    q[j-1]=temp;
                    j++; //n troca com o próximo G
                }
            }
        }

        for(char c : q){
            cout<<c;
        }

    return 0;
}
