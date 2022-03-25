#include <stdio.h>
#include <stdlib.h>
void main(){
    int cargo;
    float salAtual, reajuste;
    printf("Informe o cargo do funcionario:");
    scanf("%d", &cargo);
    printf("Informe o salário atual:");
    scanf("%f", &salAtual);

    if (cargo == 1)
    reajuste = (salAtual * 7) / 100;
    else if (cargo == 2)
    reajuste = (salAtual * 9) / 100;
    else if (cargo == 3)
    reajuste = (salAtual * 5) / 100;
    else
    reajuste = (salAtual * 12) / 100;
    printf("O reajuste e: %f", reajuste);
    printf("O novo salário e: %f", salAtual + reajuste);        
}