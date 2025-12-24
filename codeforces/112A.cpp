#include <iostream>
#include <string>

using namespace std;

int main()
{       string p1,p2;
        int result=0;

        cin>>p1>>p2;

        for(int i=0;i<p1.length();i++){

            //transformando tudo em minusculo
            if(p1[i]>='A' && p1[i]<='Z'){
                p1[i]+=32;
            }
            if(p2[i]>='A' && p2[i]<='Z'){
                p2[i]+=32;
            }

            if(p1[i]>p2[i]){
                result=1;
                break;
            }else if(p2[i]>p1[i]){
                result=-1;
                break;
            }

            }

       cout<<result;


    return 0;
}
