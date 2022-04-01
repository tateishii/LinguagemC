/*programa que realiza a soma usando array*/
#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

void main(){
    int v[10] = {12,23,54,6,75,12,32,14,56,7};
    soma(v,10);
    maiorValor(v,10);
    menorValor(v,10);
} 