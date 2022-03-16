#include <stdio.h>

int main(){

    char cargo[15];

    printf("Digite o cargo e tecle Enter\n");
    scanf("%s",cargo);

    if(strcmp(cargo,"diretor")==0){
        printf("O salário do diretor é R$ 15.000.00");
    }
    else if(strcmp(cargo,"gerente")==0){
        printf("O salário do gerente é R$ 12.000.00");
    }
    else if(strcmp(cargo,"analista")==0){
        printf("O salário do analista é R$ 8.000.00");
    }
    else if(strcmp(cargo,"assistente")==0){
        printf("O salário do assistente é R$ 4.000.00");
    }
    else if(strcmp(cargo,"auxiliar")==0){
        printf("O salário de auxiliar é R$ 2.000.00");
    }
    else{
        printf("Não há salário");
    }
    return 0;
}