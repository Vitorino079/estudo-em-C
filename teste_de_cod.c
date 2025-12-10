//Codigo Fonte para o jogo Super Trunfo em C
#include <stdio.h>
int main(){
    //variaveis utilizadas no codigo
    char Estado; // string para importar variavel sobre a letra inicial  do Estado
    char Codigo [50]; // string para importar variavel sobre o Codigo da Carta usando o ESTADO+CODIGO 
    char Cidade [50]; // string para importar variavel sobre o nome da cidade
    int Populaçao; // dimensao do tamanho da populaçao habitada
    float Area; // tamanho da area do Estado por km2 
    float PIB; // importaçao do valor do PIB do Estado
    int Pontos; // quantidade de pontos turisticos existentes
    float Densidade;
    float Capita;
//// CADASTRO PARA A PRIMEIRA CARTA DO JOGO SUPER TRUNFO

printf("Olá, sejam bem vindos ao jogo Super Trunfo: Vamos começar?!\n"); // dando boas vindas ao jogador
printf("Cadastro da Carta 1:\n Por Favor, digite a primeira letra do seu Estado: "); // interaçao com o usuario, perguntas.
scanf("%c", &Estado);  // obtendo resposta de cadastro do jogador.
printf("Letra Inicial: %c\n", Estado); // mostrando resultado cadastrado pelo o jogador.

printf("Agora o Codigo do seu Estado: (de 01 ao 04): "); // interaçao com o usuario, perguntas.
scanf("%s", Codigo); // obtendo resposta de cadastro do jogador.
printf("Codigo Cadastrado: %c%s\n ", Estado, Codigo ); // mostrando resultado cadastrado pelo o jogador.

printf("Digite o nome da sua Cidade: "); // interaçao com o usuario, perguntas.
scanf("%s", Cidade); // obtendo resposta de cadastro do jogador.
printf("Cidade Registrada: %s\n", Cidade); // mostrando resultado cadastrado pelo o jogador.

printf("Qual é total da População da sua Cidade? "); // interaçao com o usuario, perguntas.
scanf("%d", &Populaçao); // obtendo resposta de cadastro do jogador.
printf("Total Populacional Registrado: %d\n", Populaçao); // mostrando resultado cadastrado pelo o jogador.

printf("Agora digite a Area total em km²: "); // interaçao com o usuario, perguntas.
scanf("%f", &Area); // obtendo resposta de cadastro do jogador.
printf("Area Total Registrada: %f\n", Area); // mostrando resultado cadastrado pelo o jogador.

printf("Digite o PIB da sua Cidade: "); // interaçao com o usuario, perguntas.
scanf("%f", &PIB); // obtendo resposta de cadastro do jogador.
printf("PIB Regitrado: %f\n", PIB); // mostrando resultado cadastrado pelo o jogador.

printf("Digite a quantidade de pontos turisticos: "); // interaçao com o usuario, perguntas.
scanf("%d", &Pontos); // obtendo resposta de cadastro do jogador.
printf("Pontos Turisticos Registrados: %d\n", Pontos); // mostrando resultado cadastrado pelo o jogador.

printf("\nCadastrado da Carta Finalizado!\n Resultado do Cadastro:\n"); // texto afirmando que finalizou o cadastro e mostrara o resultado final.
printf("\nCarta 1: \nEstado: %c. \nCodigo da Carta: %c%s. \nNome da Cidade: %s. \nPopulação: %d. \nArea em km²: %f. \nPIB: %f. \nNumeros de Pontos Turisticos: %d.\n", Estado, Estado,Codigo, Cidade, Populaçao, Area, PIB, Pontos); //apresentaçao dos dados de entrada e saida do jogador!

// CALCULAR A DENSIDADE POPULACIONAL
    printf("\n=== RESULTADOS CALCULADOS ===\n");
Densidade = (float) Populaçao / Area;
printf("Densidade populacional e: %.2f hab/km²\n", Densidade);

// CALCULAR A PIB Per Capita
    printf("\n=== RESULTADOS CALCULADOS ===\n");
Capita = (float) PIB / Populaçao;
printf("PIB per Capita e: R$ %.2f\n", Capita);

return 0;
}
