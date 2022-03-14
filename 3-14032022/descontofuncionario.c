    /*Programa para calcular o desconto de um funcionário. Onde o salário sendo
    maior que 5000.00, terá um desconto de 5%. Caso contrério não haverá desconto*/

    #include <stdio.h> 

    #define LIMITE 5000.00

    int main(){
        float salariofuncionario;
        printf("Digite o salário do funcionáio e tecle ENTER\n");
        scanf("%f",&salariofuncionario);
        if(salariofuncionario > LIMITE){
            printf("O desconto será de %.2f\n", (salariofuncionario*0.05)   );
            printf("O valor final é %.2f\n",salariofuncionario - (salariofuncionario*0.05));

        }
        else{
            printf("Não há desconto");
        }
        return 0;


    }   //fim