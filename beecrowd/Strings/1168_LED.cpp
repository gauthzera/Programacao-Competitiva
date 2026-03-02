#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;

    int leds[10]={6,2,5,5,4,5,6,3,7,6}; //leds necessários

    while(n-- >0){
        int q=0;

        string num;cin>>num;

        int tam=num.length();

        for(int i=0;i<tam;i++){
            int x=num[i];
            q+=leds[x-'0']; //subtria '0' para obter o índice correto
        }

        cout<<q<<" leds"<<endl;

    }

    return 0;
}
