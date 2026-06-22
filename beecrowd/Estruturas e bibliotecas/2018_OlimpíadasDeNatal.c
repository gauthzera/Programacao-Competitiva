#include <stdio.h>
#include <string.h>

typedef struct Pais{
    char nome[50];
    int o,p,b;
}Pais;

int buscar(char *s,Pais arr[],int n){
    for(int i=0;i<n;i++){
        if(strcmp(arr[i].nome,s)==0)return i;
    }
    return -1;
}

int cmp(Pais i,Pais j){
    if(i.o!=j.o)return i.o>j.o;

    if(i.p!=j.p)return i.p>j.p;

    if(i.b!=j.b)return i.b>j.b;
    
    if(strcmp(i.nome,j.nome)<0)return 1;

    return 0;
}

int insertionSort(Pais arr[],int n){
    for(int i=1;i<n;i++){
        Pais key=arr[i];
        int j=i-1;

        while(j>=0 && cmp(key,arr[j])){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    char modalidade[150];

    Pais arr[350];
    int indx=0;
    
    //int n=5;

    while(fgets(modalidade,50,stdin)){
        for(int i=0;i<3;i++){
            char p[50];
            fgets(p, 50,stdin);
            
            int aux=buscar(p,arr,indx);
            if(aux==-1){ //pais não existe
                Pais a;
                strcpy(a.nome,p);
                if(i==0){
                    a.o=1;
                    a.p=0;
                    a.b=0;
                }else if(i==1){
                    a.o=0;
                    a.p=1;
                    a.b=0;
                }else{
                    a.o=0;
                    a.p=0;
                    a.b=1;
                }
                arr[indx++]=a;
            }else{
                if(i==0)arr[aux].o+=1;
                if(i==1)arr[aux].p+=1;
                if(i==2)arr[aux].b+=1;
            }
        }
    }
    
    insertionSort(arr,indx);

    printf("Quadro de Medalhas\n");
    for(int i=0;i<indx;i++){
        arr[i].nome[strlen(arr[i].nome)-1]='\0';
        printf("%s %d %d %d\n",arr[i].nome,arr[i].o,arr[i].p,arr[i].b);
    }
    
    return 0;
}
