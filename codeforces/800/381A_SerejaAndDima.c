#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int s=0,d=0;
    int cards[n];

    for(int i=0;i<n;i++){
        scanf("%d",&cards[i]);
    }

    int l=0,r=n-1; //ponteiros

    int turn=0;
    while(l<=r){
        if(turn==0){
            if(cards[l]>cards[r]){
                s+=cards[l];
                l++;
            }else{
                s+=cards[r];
                r--;
            }
            turn=1;
        }else{
           if(cards[l]>cards[r]){
                d+=cards[l];
                l++;
            }else{
                d+=cards[r];
                r--;
            }
        turn=0;
        }
    }
    
    
    printf("%d %d",s,d);
    
    return 0;
}
