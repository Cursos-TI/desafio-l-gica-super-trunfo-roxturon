#include <stdio.h>

int main(){
//Declaração de variáveis
int pontos1, pontos2;
float area1, area2, pib1, pib2, densidade1, densidade2, pibcapita1, pibcapita2;
unsigned int populacao1, populacao2, superpoder1, superpoder2;

//Valores pré definidos para economizar tempo
populacao1 = 590;
populacao2 = 452;

area1 = 240.54;
area2 = 349.62;

pib1 = 982.41;
pib2 = 784.29;

pontos1 = 50;
pontos2 = 30;

//Calcula Densidade Populacional e pib per capita da carta 1
densidade1 =  populacao1 / area1;
pibcapita1 =  pib1 / populacao1;

//Calcula o Super Poder da carta 1
superpoder1 = (double) populacao1+area1+pib1+pontos1+pibcapita1+(1/densidade1);

//Calcula Densidade Populacional e pib per capita da carta 2
densidade2 =  populacao2 / area2;
pibcapita2 =  pib2 / populacao2;

//Calcula o Super Poder da carta 2
superpoder2 = (double) populacao2+area2+pib2+pontos2+pibcapita2+(1/densidade2);

//Mostra os dados coletados da Carta 1
printf("Carta 1: \n");
printf("Estado: Ceara\n");
printf("Código: F\n");
printf("Nome da Cidade: Fortaleza\n");
printf("População: %d mil habitantes\n", populacao1);
printf("Área: %0.2f mil km²\n", area1);
printf("PIB: %0.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);
printf("A Densidade Populacional é: %.2f hab/km²\n", densidade1);
printf("O PIB per capita é: R$%.2f\n", pibcapita1);
printf("O Super poder dessa carta é: %u\n", superpoder1);

//Mostra os dados coletados da Carta 2
printf("\n");
printf("Carta 2: \n");
printf("Estado: Pernambuco\n");
printf("Código: P01\n");
printf("Nome da Cidade: Recife\n");
printf("População: %d mil habitantes\n", populacao2);
printf("Área: %0.2f mil km²\n", area2);
printf("PIB: %0.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);
printf("A Densidade Populacional é: %.2f hab/km²\n", densidade2);
printf("O PIB per capita é: R$%.2f\n", pibcapita2);
printf("O Super poder dessa carta é: %u\n", superpoder2);

//Imprime os valores da população de ambas as cartas
printf("\n");
printf("*** População ***\n");
printf("Carta 1 - Ceara: %d mil habitantes.\n", populacao1);
printf("Carta 2 - Pernambuco: %d mil habitantes\n", populacao2);

//Faz um comparativo entre os valores e indica o resultado vencedor
if (populacao1 > populacao2)
{
    printf("CARTA 1 (Ceara) VENCE!\n");
}else{
    printf("CARTA 2 (Pernambuco) VENCE!\n");
}

printf("\n");
printf("*** Área ***\n");
printf("Carta 1 - Ceara: Área de %.2f mil km²\n", area1);
printf("Carta 2 - Pernambuco: Área de %.2f mil km².\n", area2);
if (area1 > area2)
{
    printf("CARTA 1 (Ceara) VENCE!\n");
}else{
    printf("CARTA 2 (Pernambuco) VENCE!\n");
}

printf("\n");
printf("*** PIB ***\n");
printf("Carta 1 - Ceara: PIB %.2f bilhões de reais.\n", pib1);
printf("Carta 2 - Pernambuco: PIB %.2f bilhões de reais.\n", pib2);
if (pib1 > pib2)
{
    printf("CARTA 1 (Ceara) VENCE!\n");
}else{
    printf("CARTA 2 (Pernambuco) VENCE!\n");
}

printf("\n");
printf("*** Pontos Túristicos ***\n");
printf("Carta 1 - Ceara: %d Pontos Túristicos.\n", pontos1);
printf("Carta 2 - Pernambuco: %d Pontos Túristicos.\n", pontos2);
if (pontos1 > pontos2)
{
    printf("CARTA 1 (Ceara) VENCE!\n");
}else{
    printf("CARTA 2 (Pernambuco) VENCE!\n");
}

printf("\n");
printf("*** Densidade Populacional ***\n");
printf("Carta 1 - Ceara: Densidade Populacional %.2f hab/km².\n", densidade1);
printf("Carta 2 - Pernambuco: Densidade Populacional %.2f hab/km².\n", densidade2);
if (densidade1 > densidade2)
{
    printf("CARTA 2 (Pernambuco) VENCE!\n");
}else{
    printf("CARTA 1 (Ceara) VENCE!\n");
}

printf("\n");
printf("*** PIB per Capita ***\n");
printf("Carta 1 - Ceara: PIB per Capita de R$%.2f.\n", pibcapita1);
printf("Carta 2 - Pernambuco: PIB per Capita de R$%.2f.\n", pibcapita2);
if (pibcapita1 > pib2)
{
    printf("CARTA 1 (Ceara) VENCE!\n");
}else{
    printf("CARTA 2 (Pernambuco) VENCE!\n");
}

printf("\n");
printf("*** Super Poder ***\n");
printf("Carta 1 - Ceara: Super poder %u.\n", superpoder1);
printf("Carta 2 - Pernambuco: Super poder %u.\n", superpoder1);
if (superpoder1 > superpoder2)
{
    printf("CARTA 1 (Ceara) VENCE!\n");
}else{
    printf("CARTA 2 (Pernambuco) VENCE!\n");
}
    return 0;
}