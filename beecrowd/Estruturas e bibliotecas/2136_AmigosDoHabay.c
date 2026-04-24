#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Celula{
    char nome[20];
    struct Celula* prox;
    int pos;
}Celula;

Celula* criaCelula(char s[],int x){
    Celula* cell=malloc(sizeof(Celula));
    int i;
    for(i=0;s[i]!='\0';i++){
        cell->nome[i]=s[i];
    }
    cell->nome[i]='\0';
    cell->prox=NULL;
    cell->pos=x;
    return cell;
}
typedef struct listaN{
    Celula* primeiro;
}listaN;

void inserirN(listaN* l,char s[],int pos){
    Celula* nova=criaCelula(s,pos);
    nova->prox=l->primeiro;
    l->primeiro=nova;
}

listaN* criaListaN(){
    listaN* l=malloc(sizeof(listaN));
    l->primeiro=NULL;
    return l;
}

typedef struct listaS{
    Celula* primeiro;
}listaS;

listaS* criaListaS(){
    listaS* l=malloc(sizeof(listaS));
    l->primeiro=NULL;
    return l;
}

void inserirS(listaS* l,char s[],int pos){
    Celula* nova=criaCelula(s,pos);
    nova->prox=l->primeiro;
    l->primeiro=nova;
}

int verificaRepetido(listaS* l,char s[]){
    if(l->primeiro==NULL)return 0;
    Celula* aux=l->primeiro;
    while(aux!=NULL){
        if(strcmp(aux->nome,s)==0){
            return 1;
        }
        aux=aux->prox;
    }
    return 0;
}

Celula* amigo(listaS* l){
    Celula* aux=l->primeiro;
    Celula* amigo=aux;
  
    int tam=strlen(aux->nome);
    while(aux!=NULL){
        if(strlen(aux->nome)>tam){
            amigo=aux;
            tam=strlen(aux->nome);
        }else if(strlen(aux->nome)==tam){
            if(aux->pos<amigo->pos){
                amigo=aux;
            }
        }
        aux=aux->prox;
    }
    return amigo;
}

char** toArrayS(listaS* l,int q){
    char** arr=malloc(sizeof(char*)*q);
    for(int i=0;i<q;i++){
        arr[i]=malloc(sizeof(char)*20);
    }
    int indx=0;
    Celula* aux=l->primeiro;
    while(aux!=NULL){
        strcpy(arr[indx++],aux->nome);
        aux=aux->prox;
    }
    return arr;
}

char** toArrayN(listaN* l,int q){
    char** arr=malloc(sizeof(char*)*q);
    for(int i=0;i<q;i++){
        arr[i]=malloc(sizeof(char)*20);
    }
    int indx=0;
    Celula* aux=l->primeiro;
    while(aux!=NULL){
        strcpy(arr[indx++],aux->nome);
        aux=aux->prox;
    }
    return arr;
}

void insertionSort(char** arr,int q){
    for(int i=1;i<q;i++){
        char* key=arr[i];
        int j=i-1;
        while(j>=0 && (strcmp(key,arr[j])<0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void mostrar(char** arr,int q){
    for(int i=0;i<q;i++){
        printf("%s\n",arr[i]);
    }
}

int main(){
    listaS* lS=criaListaS();
    listaN* lN=criaListaN();

    char str[20];
    int tamS=0,tamN=0;
    scanf("%s",str);
    int pos=0;
    while(strcmp(str,"FIM")!=0){
        char op[4];
        scanf("%s",op);
        if(strcmp(op,"NO")==0){
            inserirN(lN,str,0);
            tamN++;
        }else{
            if(verificaRepetido(lS,str)==0){
                inserirS(lS,str,pos++);
                tamS++;
            }
        }
        scanf("%s",str);
    }
    char** arrS=toArrayS(lS,tamS);
    char** arrN=toArrayN(lN,tamN);
    insertionSort(arrS,tamS);
    insertionSort(arrN,tamN);

    mostrar(arrS,tamS);
    mostrar(arrN,tamN);
    printf("\n");
    
    Celula* a=amigo(lS);
    printf("Amigo do Habay:\n%s\n",a->nome);
   
    return 0;
}