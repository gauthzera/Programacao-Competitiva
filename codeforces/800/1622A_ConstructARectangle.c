#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int l1,l2,l3;
    while(t--){
        scanf("%d %d %d",&l1,&l2,&l3);  
        int ok=1;
        
        if(l1!=l2 && l1!=l3 && l2!=l3){ //se todos forem diferentes o maior deve ser igual a soma dos 2 menores
            int maior=l1;
            if(l2>maior){
                int temp=l2;
                l2=maior;
                maior=temp;
            }
            if(l3>maior){
                int temp=l3;
                l3=maior;
                maior=temp;
            }
            
            if(maior!=l3+l2)ok=0;
        }else{ //se tiver no mínimo 2 iguais e o terceiro for impar, ok=0
            if(l1==l2 && l3%2!=0)ok=0; 
            if(l1==l3 && l2%2!=0)ok=0;
            if(l2==l3 && l1%2!=0)ok=0;
        }
        
        if(ok)printf("YES\n");
        else printf("NO\n"); 
        
    }
    
	return 0;
}