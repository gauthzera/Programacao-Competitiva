#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    string x;
    cin>>x;

    for(char &c : x){
        c=tolower((unsigned char)c); //deixa em letra minúscula
    }

    vector<bool> quant(26,false);  //vetor para marcar as letras

    for(int i=0;i<n;i++){
        char c=x[i];
        quant[c-'a']=true;  //marca as letras que aparecem no vetor
    }

    for(int i=0;i<26;i++){
        if(quant[i]==false){
            cout<<"NO";     //se faltar letra imprime NO
            return 0;
        }
    }

    cout<<"YES"; //tem todas as letras do alfabeto

    return 0;
}
