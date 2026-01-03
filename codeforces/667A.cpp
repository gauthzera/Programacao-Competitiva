#include <iostream>

using namespace std;

int main(){
        int n,h;
        cin>>n>>h;

        int altura,larg=0;
        
        for(int i=0;i<n;i++){
            cin>>altura;
            if(altura>h){
                larg+=2;
            }else{
                larg+=1;
            }
        }

        cout<<larg;
    return 0;
}


