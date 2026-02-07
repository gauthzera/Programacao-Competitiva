#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin>>n;

        string feelings="";

        for(int i=1;i<=n;i++){
            if(i!=1){
                feelings+="that ";
                }
            if(i%2!=0){
                feelings+="I hate ";
            }else{
                feelings+="I love ";
            }

        }
        feelings+="it";
        cout<<feelings;
        
    return 0;
}
