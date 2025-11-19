#include <stdio.h>
#include <string.h>

int main(){
    char p1[100];
    char p2[100];
    char p3[100];

    fgets(p1,100,stdin);
    p1[strcspn(p1, "\n")] = '\0';
    fgets(p2,100,stdin);
    p2[strcspn(p2, "\n")] = '\0';
    fgets(p3,100,stdin);
    p3[strcspn(p3, "\n")] = '\0';

    if(strcmp(p1,"vertebrado")==0){
            if(strcmp(p2,"ave")==0){
                    if(strcmp(p3,"carnivoro")==0){
                        printf("aguia\n");
                    }else if(strcmp(p3,"onivoro")==0){
                        printf("pomba\n");
                    }

            }else if(strcmp(p2,"mamifero")==0){
                if(strcmp(p3,"onivoro")==0){
                        printf("homem\n");
                    }else if(strcmp(p3,"herbivoro")==0){
                        printf("vaca\n");
                    }
            }

    }else if(strcmp(p1,"invertebrado")==0){
         if(strcmp(p2,"inseto")==0){
                if(strcmp(p3,"hematofago")==0){
                        printf("pulga\n");
                    }else if(strcmp(p3,"herbivoro")==0){
                        printf("lagarta\n");
                    }

            }else if(strcmp(p2,"anelideo")==0){
                if(strcmp(p3,"hematofago")==0){
                        printf("sanguessuga\n");
                    }else if(strcmp(p3,"onivoro")==0){
                        printf("minhoca\n");
                    }
            }
    }


return 0;
}
