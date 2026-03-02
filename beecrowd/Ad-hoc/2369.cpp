#include <iostream>

using namespace std;

int main(){
        int n;
        cin>>n;
        int total=7;

        if(n>=11 && n<=30){ 
            total+=n-10;    //entre 11 e 30 o metro cúbico vale 1
        }

        if(n>=31 && n<=100){
            total+=20;
            total+=(n-30)*2; //entre 31 e 100 o metro cúbico vale  2
        }

        if(n>100){
            total+=160;
            total+=(n-100)*5;   //maior que 100 o metro cúbico vale 5
        }

        cout<<total<<endl;

    return 0;
}
