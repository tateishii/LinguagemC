#include <stdio.h> // biblioteca standard de Imput/Output
int main()
{
    int j;                                      // declara var. j inteira
    printf("Digite um valor inteiro e ENTER\n");// mostra na tela
    scanf("%d", &j);                            // ler j, NAO digitar NADA entre %d e "
    printf("Valor de j e ' %d\n", j);           // mostra na tela valor de j lido
    return 0;
} // fim