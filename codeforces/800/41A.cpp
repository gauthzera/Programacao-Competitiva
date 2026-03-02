#include <iostream>
#include <string>

using namespace std;

int main(){
        string s,t;
        cin>>s>>t;

        int tam=s.length();

        string x="";
        //invertendo a string com laço for;


        for(int i=tam-1;i>=0;i--){
            x+=s[i];
        }

        if(x==t){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    return 0;
}