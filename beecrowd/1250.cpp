#include <iostream>
#include <string>

using namespace std;

int main(){
   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    int t;
    cin>>t;
    int alturas[t];
        //leitura das alturas
        for(int j=0;j<t;j++){
            cin>>alturas[j];
        }
        //leitura string com os pulos
    string pulos;
    cin>>pulos;

    int atingido=0;

    for(int j=0;j<t;j++){   //verifica se foi atingido ou nao
        if(alturas[j]>2 && pulos[j]=='J')atingido++;
        if(alturas[j]<=2 && pulos[j]=='S')atingido++;
    }

    cout<<atingido<<endl;
   }

return 0;
}
