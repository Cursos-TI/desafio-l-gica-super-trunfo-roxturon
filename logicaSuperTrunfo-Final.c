#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
//Declaração de variáveis
int pontos1, pontos2;
float area1, area2, pib1, pib2, densidade1, densidade2, pibcapita1, pibcapita2;
unsigned int populacao1, populacao2, superpoder1, superpoder2;
int escolha1,escolha2,escolha3,escolha4;
int comparar;
int  PontuacaoCarta1=0, PontuacaoCarta2=0;
float atributo1, atributo2, atributo3, atributo4;
unsigned somaCarta1, somaCarta2;


//Valores pré definidos para economizar tempo
populacao1 = 590;
populacao2 = 452;

// Valores idênticos para provar que o Else if "EMPATE" da comparação Área está funcionando corretamente
area1 = 240.54;
area2 = 240.54;

pib1 = 982435.41;
pib2 = 784647.29;

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
printf("PIB: %0.2f\n", pib1);
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
printf("PIB: %0.2f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);
printf("A Densidade Populacional é: %.2f hab/km²\n", densidade2);
printf("O PIB per capita é: R$%.2f\n", pibcapita2);
printf("O Super poder dessa carta é: %u\n", superpoder2);
printf("\n");


//Menu onde mostrar as opções de escolha para a disputa de valores
printf("Opções para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per capita\n");
printf("7. Super poder\n");
printf("\n");
    
    //Código de escolha do primeiro atributo da Carta 1
    printf("Escolha o primeiro atributo da Carta 1: ");
    scanf("%d", &escolha1);
    if (escolha1>=1 && escolha1<=7)
    {   
        
        //Uso do switch para atribuir valor a escolha
        switch (escolha1)
        {
        case 1:
            atributo1=populacao1;
            break;
        case 2:
            atributo1=area1;
            break;
        case 3:
            atributo1=pib1;
            break;
        case 4:
            atributo1=pontos1;
            break;
        case 5:
            atributo1=densidade1;
            break;
        case 6:
            atributo1=pibcapita1;
            break;
        case 7:
            atributo1=superpoder1;
            break;
        }
        printf("\n");
        printf("Opções para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super poder\n");
        printf("\n");
        printf("Escolha o segundo atributo da Carta 1: ");
        scanf("%d", &escolha2);

        if (escolha2>=1 && escolha2<=7)
        {   

            switch (escolha2)
        {
        case 1:
            atributo2=populacao1;
            break;
        case 2:
            atributo2=area1;
            break;
        case 3:
            atributo2=pib1;
            break;
        case 4:
            atributo2=pontos1;
            break;
        case 5:
            atributo2=densidade1;
            break;
        case 6:
            atributo2=pibcapita1;
            break;
        case 7:
            atributo2=superpoder1;
            break;
        }   
            printf("\n");
            printf("Opções para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super poder\n");
            printf("\n");
            printf("Escolha o primeiro atributo da Carta 2: ");
            scanf("%d", &escolha3);
            if (escolha3>=1 && escolha3<=7)
            {   

        switch (escolha3)
        {
        case 1:
            atributo3=populacao2;
            break;
        case 2:
            atributo3=area2;
            break;
        case 3:
            atributo3=pib2;
            break;
        case 4:
            atributo3=pontos2;
            break;
        case 5:
            atributo3=densidade2;
            break;
        case 6:
            atributo3=pibcapita2;
            break;
        case 7:
            atributo3=superpoder2;
            break;
        }
            printf("\n");
            printf("Opções para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per capita\n");
            printf("7. Super poder\n");
            printf("\n");                
            printf("Escolha o segundo atributo da Carta 2: ");
            scanf("%d", &escolha4);
            printf("\n");
                if (escolha4>=1 && escolha4<=7)
                {   
        switch (escolha4)
        {
        case 1:
            atributo4=populacao2;
            break;
        case 2:
            atributo4=area2;
            break;
        case 3:
            atributo4=pib2;
            break;
        case 4:
            atributo4=pontos2;
            break;
        case 5:
            atributo4=densidade2;
            break;
        case 6:
            atributo4=pibcapita2;
            break;
        case 7:
            atributo4=superpoder2;
            break;
        }

            //Parte onde mostra cada valor escolhido para cada carta
            printf("CARTA 1 os atributos escolhidos foram:\n");
            printf("1º Atributo: %.2f - 2º Atributo: %.2f\n", atributo1, atributo2);
            printf("CARTA 2 os atributos escolhidos foram:\n");
            printf("1º Atributo: %.2f - 2º Atributo: %.2f\n", atributo3, atributo4);
            printf("\n");
            //Parte onde acontece a disputa entre os valores escolhidos e indica se ouve vencedor
            printf("**PRIMEIRA DISPUTA**\n");
            printf("1º Atributo CARTA 1 vs 1º Atributo CARTA 2\n");
            if (atributo1==densidade1 || atributo3==densidade2)
            {
            printf("CARTA 1(Ceara): %.2f  - CARTA 2(Pernambuco): %.2f\n", atributo1, atributo3);
            atributo1<atributo3 ? printf("CARTA 1 Vence no primeiro atributo!\n") : atributo1==atributo3 ? printf("EMPATE!\n"): printf("CARTA 2 Vence no primeiro atributo!\n");
                if (atributo1<atributo3)
                {
                    PontuacaoCarta1=PontuacaoCarta1+1;
                    
                }else if (atributo1==atributo3)
                {
                    
                }else{
                    
                    PontuacaoCarta2=PontuacaoCarta2+1;
                }
                
                

            }else{
            printf("CARTA 1(Ceara): %.2f  - CARTA 2(Pernambuco): %.2f\n", atributo1, atributo3);
            atributo1>atributo3 ? printf("CARTA 1 Vence no primeiro atributo!\n") : atributo1==atributo3 ? printf("EMPATE!\n"): printf("CARTA 2 Vence no primeiro atributo!\n");
            if (atributo1>atributo3)
                {
                    PontuacaoCarta1=PontuacaoCarta1+1;
                
                }else if (atributo1==atributo3)
                {
                    
                }else{
                    
                    PontuacaoCarta2=PontuacaoCarta2+1;
                }
            }

            printf("\n");
            printf("**SEGUNDA DISPUTA**\n");
            printf("2º Atributo CARTA 1 vs 2º Atributo CARTA 2\n");
            if (atributo2==densidade1 || atributo4==densidade2)
            {
            printf("CARTA 1(Ceara): %.2f  - CARTA 2(Pernambuco): %.2f\n", atributo2, atributo4);
            atributo2<atributo4 ? printf("CARTA 1 Vence no segundo atributo!\n") : atributo2==atributo4 ? printf("EMPATE!\n"): printf("CARTA 2 Vence no segundo atributo!\n");
            if (atributo2<atributo4)
                {
                    PontuacaoCarta1=PontuacaoCarta1+1;
                }else if (atributo2==atributo4)
                {
                    
                }else{
                    PontuacaoCarta2=PontuacaoCarta2+1;
                }

            }else{
            printf("CARTA 1(Ceara): %.2f  - CARTA 2(Pernambuco): %.2f\n", atributo2, atributo4);
            atributo2>atributo4 ? printf("CARTA 1 Vence no segundo atributo!\n") : atributo2==atributo4 ? printf("EMPATE!\n"): printf("CARTA 2 Vence no segundo atributo!\n");       
                
            }            
            if (atributo2>atributo4)
                {
                    PontuacaoCarta1=PontuacaoCarta1+1;
                }else if (atributo2==atributo4)
                {
                    PontuacaoCarta1=PontuacaoCarta1+0;
                }else{
                    PontuacaoCarta2=PontuacaoCarta2+1;
                }

                if (PontuacaoCarta1>PontuacaoCarta2)
                {
                    printf("\n");
                    printf("**RESULTADO FINAL**\n");
                    printf("Pontuação da CARTA 1: %d\nPontuação da CARTA 2: %d\n", PontuacaoCarta1, PontuacaoCarta2);
                    printf("CARTA 1 VENCE!!!\n");
                }else if (PontuacaoCarta1==PontuacaoCarta2)
                {
                    printf("\n");
                    printf("**RESULTADO FINAL**\n");
                    printf("Pontuação da CARTA 1: %d\nPontuação da CARTA 2: %d\n", PontuacaoCarta1, PontuacaoCarta2);
                    printf("EMPATE!!!\n");
                }else{
                    printf("\n");
                    printf("**RESULTADO FINAL**\n");
                    printf("Pontuação da CARTA 1: %d\nPontuação da CARTA 2: %d\n", PontuacaoCarta1, PontuacaoCarta2);
                    printf("CARTA 2 VENCE!!!\n");
                }
            

                    
                }else{
                    printf("Escolha invalida! Reinicie o programa.\n");
                }
                
            }else{
                printf("Escolha invalida! Reinicie o programa.\n");
            }
            
        }else{
            printf("Escolha invalida! Reinicie o programa.\n");
        }
        
    }else{
        printf("Escolha invalida! Reinicie o programa.\n");
    }
    
   

    return 0;
}