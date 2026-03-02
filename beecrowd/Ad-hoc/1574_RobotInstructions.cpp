#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    int n;
    int pos;
    while(t-- >0){
        pos = 0;
        cin>>n;
        cin.ignore();

        vector<string> arr(n);  //array para as instruções

        for(int i=0;i<n;i++){

            getline(cin,arr[i]);    //leitura

            if(arr[i].length()>5){   //se a string tiver tamanho maior que 5 é do tipo "same as num"
                string sameAs=arr[i];
                int num=stoi(sameAs.substr(8)) ;   //pega o número e converte para int
                arr[i]=arr[num - 1];
            }

            if(arr[i]=="LEFT"){
                pos--;
            }else if(arr[i]=="RIGHT"){
                pos++;
            }
        }

         cout<<pos<<endl;

    }

    return 0;
}
