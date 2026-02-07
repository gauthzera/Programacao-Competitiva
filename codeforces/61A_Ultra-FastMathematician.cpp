#include <bits/stdc++.h>

using namespace std;

int main() {
    string num1,num2;
    cin>>num1>>num2;

    string result="";

    int tam=num1.length();

    for(int i=0;i<tam;i++){
        if(num1[i]!=num2[i]){
            result+="1";    //concatena 1
        }else{
            result+="0";   //contatena 0 se forem iguais
        }
    }

        cout<<result;

    return 0;
}
