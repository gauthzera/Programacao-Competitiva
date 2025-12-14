#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int d1,d2;
    char x;

    for(int i=0;i<n;i++){
    int result;

    cin>>d1>>x>>d2;

    if(d1==d2){
        result=d1*d2;
    }else{
        if(x>=65 && x<=90)result=d2-d1;
        if(x>=97 && x<=122)result=d1+d2;
    }
    cout<<result<<endl;
    }

return 0;
}
