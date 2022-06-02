#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    float val1, val2, result;
    printf("Digite a opcao = \n");
    printf("1 - Adicao = \n");
    printf("2 - subtracao = \n");
    printf("3 - multiplicacao = \n");
    printf("4 - Divisao = \n");
    scanf ("%d", &op);

    if (op==1){
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val1);
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val2);
    result = val1+val2;
    printf("O resultado eh = ");
    printf("%.2f \n", result);
    }
    else if (op==2){
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val1);
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val2);
    result = val1-val2;
    printf("O resultado eh = ");
    printf("%.2f \n", result);
    }
    else if (op==3){
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val1);
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val2);
    result = val1*val2;
    printf("O resultado eh = ");
    printf("%.2f \n", result);
    }
    else if (op==4){
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val1);
    printf("Digite o primeiro valor = \n");
    scanf ("%f", &val2);
    result = val1/val2;
    printf("O resultado eh = ");
    printf("%.2f \n", result);
    }

    else
    {
        printf("Valor Invalido");
        }

system ("pause");
        return 0;

}
