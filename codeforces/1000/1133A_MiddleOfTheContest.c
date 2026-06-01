#include <stdio.h>

int main(){
    int h1,m1,h2,m2;
    scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
    
    int h3=h1,m3=m1;

    int dur=((h2*60 + m2)- (h1*60 + m1))/2;

    if(dur>=60){
        h3+=dur/60;
        m3+=dur%60;
    }else{
        m3+=dur;
    }

    if(m3>=60){
        h3++;
        m3=m3-60;
    }
       
    printf("%02d:%02d\n",h3,m3);
    
    return 0;
}
