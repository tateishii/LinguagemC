/*Programa pra calcular a situação do aluno, neste programa teremos as seguintes saídas
    Aprovado, quando nota maior ou igual a 7
    Reprovado, quando nota menor ou igual a 4
    Recuperação, quando nota entre maior que 4 e menor que 7 */
    #include <stdio.h>
    
    #define MEDAPROV 7.0
    #define MEDREPROV 4.0
    
    int main(){
        float na;
        printf("Digite a nota do aluno e teclar ENTER\n");
        scanf("%f",&na);

        if(na >= MEDAPROV){
            printf("O aluno está Aprovado");

        }
        else if(na <= MEDAPROV){
            printf("O aluno está reprovado");
        }
        else{
            printf("O aluno está em recuperação");
        }
        return 0;
    }