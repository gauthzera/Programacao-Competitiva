#include <iostream>
#include <stdbool.h>

using namespace std;

int main(){
        int ano;
        cin>>ano;
        ano++;
        bool achou;

    while(true){

        achou=true;
        int digitos[4];
        digitos[0]=ano/1000;
        digitos[1]=(ano%1000)/100;
        digitos[2]=(ano%100)/10;
        digitos[3]=(ano%100)%10;

        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if(digitos[i]==digitos[j]){
                    ano++;
                    achou=false;
                    break;
                }
            }

        }

        if(achou){
            cout<<ano<<endl;
            break;
        }

    }

    return 0;
}
