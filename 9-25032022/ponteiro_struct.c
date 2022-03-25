/*
Programa para cadastrar clientes com os seguintes 
dados: nome, idade, emails
*/
#include <stdio.h>
#include <stdlib.h>
void main(){
    struct cliente{ //sempre que usar struct colocar }; pois ele é uma estrutura com informações 
        char nome[150];
        char email[100];
        int idade;
    };
    struct cliente novoCliente,*pNovoCliente;
}