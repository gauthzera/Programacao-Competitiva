#include <iostream>

using namespace std;

int main() {
    int n;cin>>n; //num de paradas

    int a,b; //a= sai; b=entra;
    int total=0,qMin=0;
    while(n-- >0){
        cin>>a>>b;
        total+=b-a;
        if(total>qMin){
            qMin=total;
        }
    }
    cout<<qMin<<endl;

   return 0;
}
