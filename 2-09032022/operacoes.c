#include <stdio.h> // bliblioteca standard de Imput/Output

int main(){
    int n1,n2,soma,sub,div,mult;                                     //declaração var n1 e n2 inteira

    printf("Digite um valor inteiro e Enter:\n");                   //mostrar na tela
    scanf("%d", &n1);                                               //ler o primeiro numero, NAO digitar NADA entre %d
    printf("\nDigite um segundo valor inteiro e Enter:\n");         //mostrar na tela
    scanf("%d", &n2);                                               //lero segundo número,NAO digita NADA entre %d

    soma = n1 + n2;
    printf("\nValor da soma é:%d\n",soma);                          //soma
    sub = n1 - n2;
    printf("\nValo da subtração: %d\n",sub);                         //subtração
    mult = n1 * n2;
    printf("\nValo da subtração: %d\n",mult);                        //multiplicação
    div = n1 / n2;
    printf("\nValo da divisão: %d\n",div);                          //divisão
    return 0;

}   //fim