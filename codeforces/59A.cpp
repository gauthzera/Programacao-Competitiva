#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;

    int tam=s.length();

    int qMin=0,qMai=0;

    for(int i=0;i<tam;i++){
        if(s[i]>='a' && s[i]<='z')qMin++;
        if(s[i]>='A' &&  s[i]<='Z')qMai++;
    }

    for(int i=0;i<tam;i++){
        if(qMin>=qMai){
            if(s[i]>='A' &&  s[i]<='Z'){
                s[i]+=32;
            }
        }else{
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
        }
    }

    cout<<s;
    return 0;
}


