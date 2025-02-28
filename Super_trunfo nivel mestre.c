#include <stdio.h>

 int main(){

char Estado1[50];
char Codigodacarta1[50];
char Nomedacidade1[50];
int Populacao1;
float AreaemKm1;
float PIB1;
int Numerosdepontosturisticos1;

char Estado2[50];
char Codigodacarta2[50];
char Nomedacidade2[50];
int Populacao2;
float AreaemKm2;
float PIB2;
int Numerosdepontosturisticos2;

float Densidade0;
float PIBPercapital0;
float Densidade1;
float PIBPercapital1;
float SuperPoder0;
float SuperPoder1;
//criei as variaveis
printf("Digite seu estado:\n");
scanf("%s", Estado1);

printf("Digite seu Código:\n");
scanf("%s", Codigodacarta1);

printf("Digite sua cidade:\n");
scanf("%s", Nomedacidade1);

printf("Digite sua população:\n");
scanf("%d", &Populacao1);

printf("Digite sua área em Km²:\n");
scanf("%f", &AreaemKm1);

printf("Digite seu PIB:\n");
scanf("%f", &PIB1);

printf("Digite seus pontos turísticos:\n");
scanf("%d", &Numerosdepontosturisticos1);

printf("Estado:%s\n", Estado1);
printf("Código:%s\n", Codigodacarta1);
printf("Nome da Cidade:%s\n", Nomedacidade1);
printf("População:%d\n", Populacao1);
printf("Área:%f\n", AreaemKm1);
printf("PIB:%f\n", PIB1);
printf("Número de Pontos Turísticos:%d\n", Numerosdepontosturisticos1);
//fiz a entrada e impressão
Densidade0 = Populacao1 / AreaemKm1;
PIBPercapital0 = PIB1 / Populacao1;
SuperPoder0 = (Populacao1 + AreaemKm1 + PIB1 + PIBPercapital0 + Densidade0);
//fiz a divisão para densidade e pibpercapita e soma para o SuperPoder
printf("Densidade Populacional:%f\n", Densidade0);
printf("PIB per Capital:%f\n", PIBPercapital0);
printf("SuperPoder:%f\n", SuperPoder0);

printf("Digite seu estado:\n");
scanf("%s", Estado2);

printf("Digite seu Código:\n");
scanf("%s", Codigodacarta2);

printf("Digite sua cidade:\n");
scanf("%s", Nomedacidade2);

printf("Digite sua população:\n");
scanf("%d", &Populacao2);

printf("Digite sua área em Km²:\n");
scanf("%f", &AreaemKm2);

printf("Digite seu PIB:\n");
scanf("%f", &PIB2);

printf("Digite seus pontos turísticos:\n");
scanf("%d", &Numerosdepontosturisticos2);

printf("Estado:%s\n", Estado2);
printf("Código:%s\n", Codigodacarta2);
printf("Nome da Cidade:%s\n", Nomedacidade2);
printf("População:%d\n",Populacao2);
printf("Área:%f\n", AreaemKm2);
printf("PIB:%f\n", PIB2);
printf("Número de Pontos Turísticos:%d\n", Numerosdepontosturisticos2);
// copiei o que fiz na primeira carta para cria a carta 2
Densidade1 = Populacao2 / AreaemKm2;
PIBPercapital1 = PIB2 / Populacao2;
SuperPoder1 = (Populacao2 + AreaemKm2 + PIB2 + PIBPercapital1 + Densidade1);
// copiei oq fiz na primeira carta para a carta 2
printf("Densidade Populacional:%f\n", Densidade1);
printf("PIB per Capital:%f\n", PIBPercapital1);
printf("Super Poder:%f\n", SuperPoder1);

int opcao1, opcao2;
// criei o menu e int opcao
printf("Comparação de cartas e informações:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade\n");
    printf("Escolha o primeiro atributo:\n");
scanf("%d", &opcao1);

printf("Escolha o segundo atributo:\n");
scanf("%d", &opcao2);

if (opcao1 == opcao2)
{
    printf("Opção ja escolhida tente novamente");
}
// criei um switch case para cada opção
float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

// fiz um switch case para cada opção
switch (opcao1)
{
case 1: valor1_carta1 = Populacao1;
        valor1_carta2 = Populacao2;
    

    break;
case 2: valor1_carta1 = AreaemKm1;
        valor1_carta2 = AreaemKm2;
    break;
case 3: valor1_carta1 = PIB1;
        valor1_carta2 = PIB2;
    break;
case 4: valor1_carta1 = Numerosdepontosturisticos1;
        valor1_carta2 = Numerosdepontosturisticos2;
    break;
case 5: valor1_carta1 = Densidade0;
        valor1_carta2 = Densidade1;
    break;
default: printf("Opção inválida. Tente novamente.\n");
}
 switch (opcao2) // fiz um switch case para cada opção
{
case 1:
    valor2_carta1 = Populacao1;
    valor2_carta2 = Populacao2;
    break;
case 2:
    valor2_carta1 = AreaemKm1;
    valor2_carta2 = AreaemKm2;
    break;
case 3:
    valor2_carta1 = PIB1;
    valor2_carta2 = PIB2;
    break;      
case 4:
    valor2_carta1 = Numerosdepontosturisticos1;
    valor2_carta2 = Numerosdepontosturisticos2;
    break;
case 5:
    valor2_carta1 = Densidade0;
    valor2_carta2 = Densidade1;
    break;
default: printf("Opção inválida. Tente novamente.\n");
}
// fiz um sistema de pontos para cada carta e um sistema para densidade
int pontos_carta1 = 0, pontos_carta2 = 0;
if (opcao1 == 5){
if (valor1_carta1 < valor1_carta2) pontos_carta1++;
else if (valor1_carta1 > valor1_carta2) pontos_carta2++;
} else {
if (valor1_carta1 > valor1_carta2) pontos_carta1++;
else if (valor1_carta1 < valor1_carta2) pontos_carta2++;
}
if (opcao2 == 5){
if (valor2_carta1 < valor2_carta2) pontos_carta1++;
else if (valor2_carta1 > valor2_carta2) pontos_carta2++;
} 
// fiz a soma de cada carta
float soma_carta1 = valor1_carta1 + valor2_carta1;
float soma_carta2 = valor1_carta2 + valor2_carta2;

printf("\nResultado da comparação:\n");
printf("Carta 1 - %s\n", Nomedacidade1);
printf("Carta 2 - %s\n", Nomedacidade2);
printf("Atributo 1:");
switch (opcao1)
{ case 1: printf("População\n");
    break;
  case 2: printf("Área\n");
    break;
  case 3: printf("PIB\n");
    break;
  case 4: printf("Pontos turísticos\n");
    break;
  case 5: printf("Densidade\n");
    break;
} // a escolha do atributo
printf("Valores: %f vs %f\n", valor1_carta1, valor1_carta2);
printf("Atributo 2:");
switch (opcao2)
{ case 1: printf("População\n");
    break;
  case 2: printf("Área\n");
    break;
  case 3: printf("PIB\n");
    break;
  case 4: printf("Pontos turísticos\n");
    break;
  case 5: printf("Densidade\n");
    break;
} // a escolha do atributo
printf("Valores: %f vs %f\n", valor2_carta1, valor2_carta2);
printf("Soma dos Atributos:\n");
printf("Carta 1: %f\n", soma_carta1);
printf("Carta 2: %f\n", soma_carta2);
// a mostra dos valores
if (soma_carta1 > soma_carta2){

    printf("Carta 1 venceu!\n");
    
}
else if (soma_carta1 < soma_carta2){
    printf("Carta 2 venceu!\n");
    // a decisão de quem venceu
}
else{
    printf("Empate!\n"); // a decisão de empate
}
return 0;
}
