#include<stdio.h>
#include<stdlib.h>
#include "curso.h"
#include "unidade.h"

void gravar(){

    FILE *arquivo;

    arquivo = fopen("dadosdocurso.txt", "w");
    if(arquivo==NULL){
        printf("Arquivo não encontrado");
        exit(1);
    }
    curso cur, *pcur;
    unidade uni, *puni;

    pcur = &cur;
    puni = &uni;

    printf("Digite o nome do curso que você deseja criar:\n");
    fgets(pcur->nomedocurso,30,stdin);

    printf("Digite a descrição do curso:\n");
    fgets(pcur->descricao,50,stdin);

    printf("Digite a carga horária do curso:\n");
    fgets(pcur->cargahoraria,10,stdin);

    printf("Digite a data de início do curso:\n");
    fgets(pcur->datadeinicio,50,stdin);

    printf("Digite a data de término do curso:\n");
    fgets(pcur->datadetermino,50,stdin);

    printf("Digite o valor do curso:\n");
    fgets(pcur->preco,10,stdin);

    printf("Digite a unidade do curso:\n");
    fgets(puni->unidade,100,stdin);

    printf("Digite a localização:\n");
    fgets(puni->local,100,stdin);

    printf("Digite o horário de funcionamento:\n");
    fgets(puni->horariofuncionamento,30,stdin);

    printf("Digite o telefone da unidade:\n");
    fgets(puni->telefone,30,stdin);
    //
    fprintf(arquivo,puni->horariofuncionamento);
    fprintf(arquivo,puni->local);
    fprintf(arquivo,puni->unidade);
    fprintf(arquivo,puni->telefone);
    fprintf(arquivo,pcur->cargahoraria);
    fprintf(arquivo,pcur->datadeinicio);
    fprintf(arquivo,pcur->datadetermino);
    fprintf(arquivo,pcur->descricao);
    fprintf(arquivo,pcur->nomedocurso);
    fprintf(arquivo,pcur->preco);

    //fechar o arquivo
    fclose(arquivo);

}