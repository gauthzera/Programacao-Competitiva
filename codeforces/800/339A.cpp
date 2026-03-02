#include <iostream>
#include <string>

using namespace std;

string selectionSort(string x){
        int tam=x.length();
        int menor;
        for(int i=0;i<tam-1;i=i+2){ //nao passa pelas posições ímpares que é onde tem o '+'
            menor=i;
            for(int j=i+2;j<tam;j=j+2){
                if(x[j]<x[menor]){
                    menor=j;
                }
            }

            if(menor!=i){
                char troca=x[i];
                x[i]=x[menor];
                x[menor]=troca;
            }

        }

        return x;

}

int main(){
        string x;
        cin>>x;

        cout<<selectionSort(x);

    return 0;
}