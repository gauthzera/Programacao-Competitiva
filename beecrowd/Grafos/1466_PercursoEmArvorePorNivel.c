#include <stdio.h>
#include <stdlib.h>

typedef struct No{ 
    int valor;
    struct No* esq,*dir;
}No;

No* criaNo(int x){
    No* n=malloc(sizeof(No));
    n->valor=x;
    n->esq=NULL;
    n->dir=NULL;
    return n;
}

No* inserir(No* raiz,int x){ //inserção na árvore
    if(raiz==NULL)return criaNo(x);

    if(x<raiz->valor){
        raiz->esq=inserir(raiz->esq,x);
    }else if(x>raiz->valor){
        raiz->dir=inserir(raiz->dir,x);
    }
    return raiz;
}

typedef struct Celula{
    No* no;
    struct Celula* prox;
}Celula;

Celula* criaCelula(No* x){
    Celula* c=malloc(sizeof(Celula));
    c->no=x;
    c->prox=NULL;
    return c;
}

typedef struct Fila{ //fila para imprimir bfs
    Celula* primeiro;
    Celula* ultimo;
}Fila;

Fila* criaFila(){
    Fila* f=malloc(sizeof(Fila));
    f->primeiro=NULL;
    f->ultimo=NULL;
    return f; 
}

//funções fila
void enqueue(Fila* f,No* x){
    Celula* nova=criaCelula(x);
    if(f->primeiro==NULL){
        f->primeiro=nova;
        f->ultimo=nova;
        return;
    }
    f->ultimo->prox=nova;
    f->ultimo=nova;
}

No* dequeue(Fila* f){
    if(f->primeiro==NULL)return NULL;
    
    Celula* tmp=f->primeiro;
    No* valor=tmp->no;
    f->primeiro=tmp->prox;
    if(f->primeiro==NULL){
        f->ultimo=NULL;
    }
    free(tmp);
    return valor;
}

void bfs(No* raiz, int x){
    if(raiz==NULL)return;
    Fila* f=criaFila();
    
    enqueue(f,raiz);
    int q=0;
    while(f->primeiro!=NULL){
        No* atual=dequeue(f);
        q++;
        if(q==x){ //para printar o ultimo valor sem espaço
            printf("%d",atual->valor);
        }else{
            printf("%d ",atual->valor);
        }

        if(atual->esq!=NULL)enqueue(f,atual->esq);
        if(atual->dir!=NULL)enqueue(f,atual->dir);
    }
    printf("\n\n");
}


int main() {
    int t;
    scanf("%d",&t);
    int q=1;
    while(t--){
        No* raiz=NULL;
        int n;
        scanf("%d",&n);
        
        for(int i=0;i<n;i++){
            int valor;
            scanf("%d",&valor);
            raiz=inserir(raiz,valor);
        }
        printf("Case %d:\n",q++);
        bfs(raiz,n);
    }

    return 0;
}
