#include <stdio.h>

typedef struct Consumo{
    int pessoas,quantidade;
}Consumo;

int busca(Consumo arr[],int tam,int valor){
    for(int i=0;i<tam;i++){
        if(arr[i].quantidade==valor)return i;
    }
    return -1;
}

void insertionSort(Consumo arr[],int tam){
    for(int i=1;i<tam;i++){
        Consumo key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j].quantidade>key.quantidade){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int cidade=1;
    while(n!=0){
        int x,y;
        
        Consumo arr[201];
        int tam=0;

        long long totalConsumo=0,totalPessoas=0;        
        for(int i=0;i<n;i++){//lê n cidades

            scanf("%d %d",&x,&y);
            totalConsumo+=y;
            totalPessoas+=x;

            int consumoPessoa=y/x;
            
            int buscaConsumo=busca(arr,tam,consumoPessoa);
            if(tam==0 || buscaConsumo==-1){
                arr[tam].pessoas=x;
                arr[tam].quantidade=consumoPessoa;
                tam++;
            }else{
                arr[buscaConsumo].pessoas+=x;
            }
        }

        insertionSort(arr,tam);
        
        long long consumoMedio = (totalConsumo * 100) / totalPessoas;
        if(cidade>1)printf("\n");

        printf("Cidade# %d:\n",cidade++);
        
        for(int i=0;i<tam;i++){
            if(i>0)printf(" ");
            printf("%d-%d ",arr[i].pessoas,arr[i].quantidade);
        }

        printf("\nConsumo medio: %lld.%02lld m3.\n", consumoMedio / 100, consumoMedio % 100);//formatação de saída do beecrowd

        scanf("%d",&n);
    }
   
    return 0;
}