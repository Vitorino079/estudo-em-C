#include <stdio.h>
int main() {
//entrar com as notas do aluno
//quantas notas serao? nota1 + nota2,
//entrar com os valores da nota
//calcular os valores da nota, soma e dividir por 2
//exibir o resultado - 
//SE A MEDIA for menor que 6,0 PONTOS, REPROVADO!!
//SE A MEDIA for maior que 6,0 PONTOS, APROVADO!!
//HORA DE CODAR NIVEL INTERMEDIARIO
    int nota1, nota2, nota3;
    float media;

    printf("***** PROGRAMA DE CALCULO DE MEDIA ****\n");

printf("Digite o valor da Primeira Nota: \n");
scanf("%d", &nota1);

printf("Digite o valor da Segunda Nota: \n");
scanf("%d", &nota2);

printf("Digite o valor da Terceira Nota: \n");
scanf("%d", &nota3);

media = (float) (nota1 + nota2 + nota3) / 3;

printf("A media do aluno e: %.2f", media);

return 0;


}