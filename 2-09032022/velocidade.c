#include <stdio.h>

int main(){
    int a,ba,c;
    printf("Digite o tempo: \n");
    scanf("%d", &a);
    printf("Digite o espaço:    \n");
    scanf("%d", &ba);
    c = a / ba;
    printf("A velocidade média é: %d KM/H", c);
    return 0;
}