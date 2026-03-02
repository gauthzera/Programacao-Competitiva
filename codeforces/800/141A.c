#include <stdio.h>

int main(){
    char s1[101]; //nome hospede
    char s2[101]; //nome anfitriao
    char s3[101]; //pilha

    fgets(s1,101,stdin);
    fgets(s2,101,stdin);
    fgets(s3,101,stdin);

    int freq1[26]= {0};
    int freq2[26]= {0};

    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i]>='A' && s1[i]<='Z')freq1[s1[i]-'A']++;
    }

    for(int i=0; s2[i]!='\0'; i++){
        if(s2[i]>='A' && s2[i]<='Z')freq1[s2[i]-'A']++;
    }

    //frequencia de palavras da linha3
    for(int i=0; s3[i]!='\0'; i++){
        if(s3[i]>='A' && s3[i]<='Z')freq2[s3[i]-'A']++;
    }

    int resp=1;

    for(int i=0; i<26; i++){
        if(freq1[i]!=freq2[i]){
            resp=0;
            i=26;
        }
    }

    if(resp==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


    return 0;
}
