#include <iostream>
#include <string>

using namespace std;

int main(){
        int t,n;//quantidade de casos teste
        cin>>t;

        for(int i=0;i<t;i++){
           cin>>n;
           string s;
           cin>>s;

            bool achou=false;
                //verifica se tem 2026 na string
            for(int j=0;j<=n-4;j++){
                if(s.substr(j,4)=="2026"){
                cout<<"0"<<endl;
                achou=true;
                break;
                }
            }
            //se não tiver 2026, verifica se tem 2025
            if(achou==false){
                for(int j=0;j<=n-4;j++){
                if(s.substr(j,4)=="2025"){
                cout<<"1"<<endl;
                achou=true;
                break;
                }
            }
        }

            //se não tiver 2025 e 2026
            if(achou==false){
            cout<<"0"<<endl;
            }
    }

    return 0;
}
