//Programa de soma de valores

#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma, num1, num2;
    printf("Informe o primeiro número:");
    scanf("%d", &num1);
    printf("Informe o segundo número");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Resultado da soma %d", soma);
    
}