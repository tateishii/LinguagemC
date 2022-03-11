#include <stdio.h>

int main(){
    float valpr, valf, a;
    printf("Informe o valor do produto: ");
    scanf("%f", &valpr);
    valf = valpr - (valpr * ((float)20/(float)100));
    printf("O valor final do produto é: %f", valf);
    return 0;

}