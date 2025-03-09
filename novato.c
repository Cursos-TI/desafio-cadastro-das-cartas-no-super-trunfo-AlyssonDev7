#include <stdio.h>
//Aqui serao inceridas as informações das variaveis da carta 1 e 2 do jogo do Super Trunfo//

int main(){
char estado1;
char estado2;
char codigo1[20];
char codigo2[20];
char cidade1[25];
char cidade2[25];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int pontosturisticos1;
int pontosturisticos2;

   //Aqui a baixo sera inserida as informações utilizando printf e scanf para que o usuario consiga inserir as
   //informações das carta 1//

printf("Escolha uma letra de A a H para representar o primeiro estado.\n");
printf("Estado: ");
scanf(" %c", &estado1);

printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
printf("Numero: ");
scanf(" %2s", codigo1);

printf("Insira o nome da primeira cidade.\n");
printf("Nome da cidade: ");
scanf("  %s", cidade1);

   
printf("Insira a quantidade de habitantes. \n");
printf("População: ");
scanf(" %d", &populacao1);

printf("Insira a área territorial da cidade. \n");
printf("Área Km²: ");
scanf(" %f", &area1);

printf("Insira o valor referente ao Produto Interno Bruto. \n");
printf("PIB: ");
scanf(" %f", &pib1);

printf("Insira a quantidade de pontos turisticos: \n");
printf("Pontos Turisticos: ");
scanf(" %d", &pontosturisticos1);

//Aqui estaram as informações da Carta 2//

printf("Escolha uma letra de A a H para representar o segundo estado.\n");
printf("Estado: ");
scanf(" %c", &estado2);

printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
printf("Numero: ");
scanf(" %2s", codigo2);

printf("Insira o nome da segunda cidade. \n");
printf("Nome da cidade: ");
scanf(" %s", cidade2);

printf("Insira a quantidade de habitantes. \n");
printf("População: ");
scanf(" %d", &populacao2);

printf("Insira área territorial da cidade. \n");
printf("Área Km²: ");
scanf(" %f", &area2);

printf("Insira o valor referente ao Produto Interno Bruto. \n");
printf("PIB: ");
scanf(" %f", &pib2);

printf("Insira a quantidade de pontos turisticos: \n");
printf("Pontos Turisticos: ");
scanf(" %d", &pontosturisticos2);

//Abaixo sera impresso informando as informações da primeira carta do jogo//

printf("Estado: %c \n", estado1);
printf("Código: %c%2s \n", estado1, codigo1);
printf("Nome da cidade: %s\n",cidade1);
printf("Polulação: %d\n", populacao1);
printf("Área: %.3f\n", area1);
printf("PIB: %.3f bilhões de reais\n", pib1);
printf("Pontos turisticos: %d\n", pontosturisticos1);

// Em seguida abaixo estara a impressao informando a segunda carta do jogo//

printf("Estado: %c \n", estado2);
printf("Código: %c%2s \n", estado2, codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Polulação: %d\n", populacao2);
printf("Área: %.3f\n", area2);
printf("PIB: %.3f bilhões de reais\n", pib2);
printf("Pontos turisticos: %d", pontosturisticos2);

return 0;
}
