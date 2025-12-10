#include <stdio.h>
int main() {

    /*
    Incremento (++)
    Pre-Incremento ++a
    Pos-Incremento a++
    Decremento (--)
    Pre-Decremento --a
    Pos-Decremento a---


    int numero1 = 1; // validando o numero com 1
    // da pra fazer a mesma coisa com calculos aritimeticos
    printf("Antes Incremento: %d\n", numero1);
    // serie numero1 = numero1 +1; - sendo a variavel + a variavel + a soma de 1
    //Aumentando o valor da viavel em 1 (um), exemplo, 2+1=3, 3+1=4, 4+1=5...
    //a mesma coisa de usar a variavel repetindo, exemplo, "numero1 = numero1 +1;"
    numero1++;
    printf("Pos-Incremento: %d\n", numero1);

    // o mesmo seria com as outras operações, -, *, e /.
    //Diminuindo o valor da variavel em 1 (um), exemplo, 5-1=4, 4-1=3, 3-1=2.....
    //a mesma coisa de usar a variavel repetindo, exemplo, "numero1 = numero1 1;"
    numero1--;
    printf("Pos-Decremento: %d\n", numero1);
    */



    /*
    int numero1 = 10, numero2, resultado;
    // resultado = resultado = 10
    resultado = 10;
    printf("Resultado: %d\n", resultado);

    // resultado = resultado + 20
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado - numero 1
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado * 6
    resultado *= 6;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado / 2
    resultado /= 2;
    printf("Resultado: %d\n", resultado);
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