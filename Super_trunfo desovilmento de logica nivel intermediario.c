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

int opcao;
// criei o menu e int opcao
printf("Comparação de cartas e informações:\n");
printf("1. Nome das cidades:\n");
printf("2. População\n");
printf("3. Área\n");
printf("4. PIB\n");
printf("5. Pontos turístico\n");
printf("6. Densidade\n");
scanf("%d", &opcao);
// fiz os menus e criei o switch abaixo
switch (opcao)
{
case 1:
   printf("Nome das cidades %s e %s\n", Nomedacidade1, Nomedacidade2);
    // nao estou utilizando Países mais usei os nomes da cidades inserida no codigo
   break;
case 2:
   if (Populacao1 > Populacao2)
   {printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
    printf("Atributo usado é População:\n");
    printf("Valores das cartas:%d\n", Populacao1, Populacao2);
    printf("Carta vencedora e a Carta1:\n");
    // criei as cases interligadas aos menu
   }else if (Populacao1 == Populacao2)
{
    printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
    printf("Atributo usado é População:\n");
    printf("Valores das cartas:%d\n", Populacao1, Populacao2);
    printf("Empate:\n");
 }  // fiz o else if ao caso de der empate e copiei logo abaixo  
   else
   {printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
    printf("Atributo usado é População:\n");
    printf("Valores das cartas:%d\n", Populacao1, Populacao2);
    printf("Carta vencedora e a Carta2:\n");
   }
    break;

    case 3:
   if (AreaemKm1 > AreaemKm2)
   {printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
    printf("Atributo usado é Área:\n");
    printf("Valores das cartas:%d\n", AreaemKm1, AreaemKm2);
    printf("Carta vencedora e a Carta1:\n");
   
}else if (AreaemKm1 == AreaemKm2)
{
    printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
    printf("Atributo usado é População:\n");
    printf("Valores das cartas:%d\n", AreaemKm1, AreaemKm2);
    printf("Empate:\n");
}
    else
   {printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
    printf("Atributo usado é Área:\n");
    printf("Valores das cartas:%f\n", AreaemKm1, AreaemKm2);
    printf("Carta vencedora e a Carta2:\n");
   }
    break;

    case 4:
    if (PIB1 > PIB2)
    {   printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é PIB:\n");
        printf("Valores das cartas:%f\n", PIB1, PIB2);
        printf("Carta vencedora e a Carta1:\n");
    
    }else if (PIB1 == PIB2)
    {
        printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é População:\n");
        printf("Valores das cartas:%d\n", PIB1,PIB2);
        printf("Empate:\n");
    }
        else
    {   printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é PIB:\n");
        printf("Valores das cartas:%f\n", PIB1, PIB2);
        printf("Carta vencedora e a Carta2:\n");
    }
     break;
 
     case 5:
     if (Numerosdepontosturisticos1 > Numerosdepontosturisticos2)
     {  printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é Pontos turísticos:\n");
        printf("Valores das cartas:%d\n", Numerosdepontosturisticos1, Numerosdepontosturisticos2);
        printf("Carta vencedora e a Carta1:\n");
     
    }else if (Numerosdepontosturisticos1 == Numerosdepontosturisticos2)
    {
        printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é População:\n");
        printf("Valores das cartas:%d\n", Numerosdepontosturisticos1, Numerosdepontosturisticos2);
        printf("Empate:\n");
    }
        else
     {  printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é Pontos turísticos:\n");
        printf("Valores das cartas:%d\n", Numerosdepontosturisticos1, Numerosdepontosturisticos2);
        printf("Carta vencedora e a Carta2:\n");
     }
      break;
  
      case 6:
      if (Densidade0 < Densidade1)
      { printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é Densidade:\n");
        printf("Valores das cartas:%f\n", Densidade0, Densidade1);
        printf("Carta vencedora e a Carta1:\n");
      
    }else if (Densidade0 == Densidade1)
    {
        printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é População:\n");
        printf("Valores das cartas:%d\n", Densidade0, Densidade1);
        printf("Empate:\n");
    }
        else
      { printf("Nome das cidades: %s e %s\n", Nomedacidade1, Nomedacidade2);
        printf("Atributo usado é Densidade:\n");
        printf("Valores das cartas:%f\n", Densidade0, Densidade1);
        printf("Carta vencedora e a Carta2:\n");
      } // copiei o que fiz encima e modifiquei
       break;
   default:
   printf("Opção invalida tente novamente:\n");
// criei o default caso nenhum numero correspondente seja selecionado no menu
}

return 0;
}