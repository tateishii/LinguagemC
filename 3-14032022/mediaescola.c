    /*Programa para calcular o resultado da situação do aluno se está arovado ou reprovado.
    Vamos levar em consideração a nota do aluno e compará-la a média de aprovação escola.
    Caso a nota do aluno seja maior ou igual 7, então o aluno estará aprovado, caso contrário
    estará reprovado*/

    /*Incluir o cabeçalho de netrada e saida de dados padrão: std(standard -> Padrão) io
    (i->imput | output)*/
    #include <stdio.h>

    //Definir uma constante. Sempre em letras maiúsculas
    #define MEDIAESCOLA 7.0

    int main(){
        //declaração de variavel notaAluno com o tipo float
        float notaAluno;
        printf("Digite a nota do aluno e tecle Enter\n");
        scanf("%f",&notaAluno);

        //Desvio de fluxo com if .. else
       if(notaAluno >= MEDIAESCOLA){
           printf("O aluno esá aprovado");       
       }
       else{
           printf("o aluno está reprovado");
       }
       return 0;

    }   //fim