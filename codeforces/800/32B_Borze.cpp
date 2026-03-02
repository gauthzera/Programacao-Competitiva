#include <bits/stdc++.h>

using namespace std;

int main() {
        string code;
        cin>>code;

        string msg="";

        for(int i=0;i<code.length();i++){
            if(code[i]=='.'){
                    msg+="0";
            }else{  //será '-'
                if(code[i+1]=='.'){
                    msg+="1";
                }else{
                    msg+="2";
                }
                i++;
            }
        }

        cout<<msg;

    return 0;
}
