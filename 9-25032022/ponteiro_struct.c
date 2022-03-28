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
    pNovoCliente = &novoCliente;

    printf("Entre com o nome do cliente:\n");
    scanf("%s", &pNovoCliente->nome);

    printf("Entre com o email do cliente:\n");
    scanf("%s", &pNovoCliente->email);

    printf("Entre com a idade do cliente:\n");
    scanf("%d", &pNovoCliente->idade);

    printf("O nome do cliente é %s",pNovoCliente->nome);
    printf("O email do cliente é %s\n",pNovoCliente->email);
    printf("A idade do cliente é %d\n",pNovoCliente->idade);
}