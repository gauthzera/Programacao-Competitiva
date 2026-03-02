#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;cin>>n;

    int qt,s;
    while(n-- >0){
        cin>>qt>>s;
        vector<int> nums(qt);
        
        for(int i=0;i<qt;i++){
            cin>>nums[i];
        }

    int pos=0;
    int MenorDif=abs(s-nums[0]);

    for(int i=0;i<nums.size();i++){
        if(nums[i]==s){//verifica se alguem acertou o numero;
            pos=i;
            break;
        }

        int dif=abs(s-nums[i]); //diferença entre o numéro e a resposta

        if(dif<MenorDif){
            MenorDif=dif;
            pos=i;
       }
    }

    cout<<pos+1<<endl;

}

   return 0;
}
