/*
Programa que exibe uma mensagem de boas vindas ao
nosso usuário
*/
#include <stdio.h>

int main(){

    char texto [21] = "Olá! Seja Bem Vindo";    // char é usado para comentar algo de 1 até 20 caracteres

    printf("%s",texto);         //caso utilize mais que 20 caracteres use o %S

    return 0;
}      //fim