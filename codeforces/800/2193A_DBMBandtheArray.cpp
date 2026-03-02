#include <iostream>


using namespace std;

int main() {
    int t; cin>>t;

    int n,s,x;

    while(t-- >0){
    cin>>n>>s>>x;
    int soma=0;
    int num;
    
    for(int i=0;i<n;i++){
        cin>>num;
        soma+=num;
    }

    if(soma==s){
        cout<<"YES"<<endl;
    }else if((s-soma)%x==0 && soma<s){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

   return 0;
}
