#include <stdio.h>
#include <stdlib.h>

typedef struct dados_curso  //typedef é o tipo do arquivo, strcut é uma estrutura para criar dados
{
    char nomedocurso[30];
    char descricao[50];
    char cargahoraria[10];
    char datadeinicio[50];
    char datadetermino[50];
    char preco[10];    

}curso;