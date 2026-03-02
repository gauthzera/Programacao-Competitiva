#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n!=0){
        int vet[n]; //criação do vetor e leitura
        for(int i=0;i<n;i++){
        cin>>vet[i];
        }

        int picos=0;
        //contando os picos
        for(int i=0;i<n;i++){
                int prox;
                int ant;
           if(i==0){
            prox=vet[i+1];
            ant=vet[n-1];
           }else if(i==n-1){
                prox=vet[0];
                ant=vet[i-1];
           }else{
                prox=vet[i+1];
                ant=vet[i-1];
           }
           if(vet[i]>prox && vet[i]>ant)picos++;
           if(vet[i]<prox && vet[i]<ant)picos++;
        }
        cout<<picos<<endl;
        cin>>n;
    }

return 0;
}
