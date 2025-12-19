#include <iostream>
#include <stdbool.h>

using namespace std;

bool verificaPrimo(int soma){
    int num=1;
    if(soma<2)return false;
    if(soma==2)return true;
    if(soma%2==0)return false;

    for(int i=2;i<=soma/2;i++){
        if(soma%i==0){num++;
                break;
            }
    }

    if(num==1){
        return true;
    }else{
        return false;
    }

}

int main() {
        int m;
        int salto;

        while(cin>>m){
            int moedas[m];
            for(int i=0;i<m;i++){
                cin>>moedas[i];
            }
            cin>>salto;
            int soma=0;

            for(int i=m-1;i>=0;i-=salto){
                soma+=moedas[i];
            }

            if(verificaPrimo(soma)){
                cout<<"You’re a coastal aircraft, Robbie, a large silver aircraft."<<endl;
            }else{
                cout<<"Bad boy! I’ll hit you."<<endl;
            }
        }

    return 0;
}
