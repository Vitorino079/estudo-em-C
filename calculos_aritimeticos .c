#include <stdio.h>
int main() {

    /*
    Soma (+)
    Subtraçao (-)
    Multiplicaçao (*)
    Divisao(/)
    */

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;
printf("Entre com o Numero 1:\n ");
scanf("%d", &numero1);
printf("Entre com o Numero 2:\n ");
scanf("%d", &numero2);
// operaçao soma
soma = numero1 + numero2;

// operaçao subtraçao
subtracao = numero1 - numero2;

// operaçao multiplicaçao
multiplicacao = numero1 * numero2;

// operacao divisao
divisao = numero1 / numero2;

    printf("A Soma e:  %d\n", soma);
    printf("A  Subtraçao e:  %d\n", subtracao);
    printf("A Multiplicaçao e:  %d\n", multiplicacao);
    printf("A Divisao e:  %d\n", divisao);



}