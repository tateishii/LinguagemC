//programa p/ calcular area, dado o raio
#include <stdio.h> // biblioteca standard de Imput/Output
#define PI 3.14159 // constante pi
// a seguir a funcao main()
int main()
{
    float raio, area; // duas vars. declaradas
    // mostra na tela uma mensagem com printf
    printf("Digite o valor do raio do circulo, e ENTER\n");
    // le do teclado com scanf; note o & em &raio
    scanf("%f", &raio); //exemplos: 1.23 12.3e-1
    // a sguir mostra na tela o valor do raio lido
    // usando 12 coluna, e 2 decimais arredondados
    // por ex. 1576 e' arreondado para 1.58, so' na tela
    printf("Raio digitado e' %12.2f\n", raio);
    area = PI * raio * raio;
    printf("Area do circulo com raio %f e' %f\n", raio, area);
    return 0;

}   // fim main