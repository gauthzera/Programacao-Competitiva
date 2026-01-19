#include <iostream>

using namespace std;

int main() {
       int par[5];
       int impar[5];
       int num,posPar=0,posImpar=0; //índices dos vetores

       for(int i=0;i<15;i++){
        cin>>num;
        if(num%2==0){   //quando num for par
                if(posPar==5){
                    for(int j=0;j<5;j++){
                        cout<<"par["<<j<<"] = "<<par[j]<<endl;
                    }
                     posPar=0;      //após imprimir o vetor zera o índice dele
                }
            par[posPar]=num;
            posPar++;
        }else{  //quando num for ímpar
            if(posImpar==5){
                    for(int j=0;j<5;j++){
                        cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
                    }
                    posImpar=0;     //após imprimir o vetor zera o índice dele
                }
            impar[posImpar]=num;
            posImpar++;
        }
    }
        //após imprimir os vetores que foram totalmente preenchindos
        //imprime os últimos números adicionados
        for(int j=0;j<posImpar;j++){
               cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
                }

        for(int j=0;j<posPar;j++){
                cout<<"par["<<j<<"] = "<<par[j]<<endl;
                    }

   return 0;
}
