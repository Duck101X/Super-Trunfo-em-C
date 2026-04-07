#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// JOGO SUPER TRUNFO - Comparação de atributos entre duas cartas

int main () {

    // Variáveis dos jogadores
    char estado1[40] = "N/A", estado2[40] = "N/A";
    char codigo1[4]="A01", codigo2[4]="B02"; // Apenas numeração da carta
    char cidade1[40] = "N/A", cidade2[40] = "N/A";
    int populacao1 = 0, populacao2 = 0;  // Populações
    float area1 = 0, area2 = 0;  // Áreas
    float pib1 = 0, pib2 = 0;  // PIB
    int pontosTU1 = 0, pontosTU2 = 0;  // Pontos Turísticos
    int pontos1 = 0, pontos2 = 0;  // Pontos do jogo
    float densipopular1, densipopular2;  // Densidade populacional
    float pibcapita1 , pibcapita2;  // PIB per capita
    float inversoDensidade1, inversoDensidade2;  // Inverso da densidade
    char opcao;  // Opção do menu principal
    int opcao2;  // Opção do menu de comparação
    int loop = 1;  // Controla o loop principal


    // Gera valores aleatórios para as cartas
    srand(time(NULL));

    // População: 1 a 99999
    populacao1 = rand() % 99999 + 1;
    populacao2 = rand() % 99999 + 1;

    // Pontos Turisticos: 1 a 999
    pontosTU1 = rand() % 1000 + 1;
    pontosTU2 = rand() % 1000 + 1;

    // Área: 1.0 a 1000.0 (usando float)
    area1 = (float)(rand() % 1000) + (float)rand() / RAND_MAX;
    area2 = (float)(rand() % 1000) + (float)rand() / RAND_MAX;

    // PIB: 1.0 a 800.0
    pib1 = (float)(rand() % 800) + (float)rand() / RAND_MAX;
    pib2 = (float)(rand() % 800) + (float)rand() / RAND_MAX;

// Loop principal do jogo
while (loop)
{    

    printf("\n_______-------Vamos jogar Super Trunfo!-------_______ \n \n");

    printf("Selecione o Jogador\n");
    printf("A. Jogador 1\n");
    printf("B. Jogador 2\n");
    printf("C. Comparação de cartas\n");
    printf("D. Sair\n");
    printf("Opção escolhida: ");
    scanf(" %c", &opcao);






    switch (opcao)
    {
    // Opção A: Cadastro Jogador 1
    case 'A':
    case 'a':

        printf("\n*Jogador 1 Escolhido... \n\n");
        printf("Escolha o nome do seu Estado (*Sem Espaços*): \n");
        scanf(" %s", estado1 );
        printf("Escolha o nome da sua Cidade (*Sem Espaços*): \n");
        scanf(" %s", cidade1);
        


    
        break;

// Opção B: Cadastro Jogador 2
    case 'B':
    case 'b':

        printf("\n*Jogador 2 Escolhido... \n\n");
        printf("Escolha o nome do seu Estado (*Sem Espaços*): \n");
        scanf(" %s", estado2);
        printf("Escolha o nome da sua Cidade (*Sem Espaços*): \n");
        scanf(" %s", cidade2);



        break;
    // Opção C: Iniciar jogo
    case 'C':
    case 'c':

    // Calcula atributos derivados das cartas
    //Calculo de Super Poder 

    densipopular1 = (float) populacao1 / area1;  // Densidade = Pop / Área
    pibcapita1 =  1000000000.0 * pib1 / (float) populacao1;

    densipopular2 = (float) populacao2 / area2;
    pibcapita2 =  1000000000.0 * pib2 / (float) populacao2;

    inversoDensidade1 = 1.0 / densipopular1;
    inversoDensidade2 = 1.0 / densipopular2;

    float superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibcapita1 + inversoDensidade1;
    float superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibcapita2 + inversoDensidade2;

        loop = 0;  // Sai do loop principal
        int loop2 = 1;  // Inicia loop de comparações
        
 // Exibe as informações das cartas
 printf("\n\n_______________Vamos ver as informações agora!_______________ \n \n");

    printf("Pressione ENTER para continuar: \n");

    getchar();
    getchar();

    printf("---------------Carta número 1---------------- \n\n");



    printf("Estado: %s \n", estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhão(ões) de reais \n", pib1);
    printf("Número de Ponto(s) Túristico: %d: \n", pontosTU1);
    printf("Desidade Populacional: %.2f hab/km²\n", densipopular1);
    printf("PIB per Capita %.2f reais\n", pibcapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("-----------------Fim Carta 1------------------ \n\n\n");
    printf("Pressione ENTER para continuar: \n");

    getchar();
  


    /*Carta 2 abaixo*/

    printf("---------------Carta número 2---------------- \n\n");

    printf("Estado %s \n", estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhão(ões) de reais \n", pib2);
    printf("Número de Ponto(s) Túristico: %d: \n", pontosTU2);
    printf("Desidade Populacional: %.2f hab/km²\n", densipopular2);
    printf("PIB per Capita %.2f reais \n", pibcapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    printf("-----------------Fim Carta 2------------------ \n\n");
    
    printf("Pressione ENTER para continuar: ");
    getchar();



        // Loop de comparação das cartas
        while (loop2)
        {
            
        printf("\n------------Vamos a comparação de cartas------------\n");
        printf("*** Digite o atributo que deseja comparar ***\n\n");

        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Túristicos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("8. Comparação Total\n");
        printf("9. Sair\n");
        printf("Opção Selecionada: ");
        scanf("%d", &opcao2);

        switch (opcao2)
    {
    // Case 1: Comparar População
    case 1:
        
        printf("\nComparando População...\n");
        printf("Paises: %s e %s\n", cidade1, cidade2);
        printf("Populações: %d e %d\n", populacao1, populacao2);
        if (populacao1 > populacao2) {

            printf("Carta Número 1 Venceu!!! \n");

            pontos1 += 1;

        } else if (populacao2 > populacao1) {

            pontos2 += 1;

            printf("Carta Número 2 Venceu!!! \n");

        } else {

            printf("\n *** Empate!!! *** \n");

            pontos1 += 1;
            pontos2 += 1;

        

        }

        printf("\nPressione ENTER para continuar: ");
        getchar();
        getchar();
        
        break;    // Case 9: Sair do jogo    // Case 2: Comparar Área
    case 2:
        printf("\nComparando Área...\n");
        printf("Paises: %s e %s\n", cidade1, cidade2);
        printf("Áreas: %.2f e %.2f\n", area1, area2);
        if (area1 > area2) {
            printf("Carta Número 1 Venceu!!!\n");

            pontos1 += 1;

        } else if (area2 > area1) {

            printf("Carta Número 2 Venceu!!! \n");

            pontos2 += 1;

        } else {

            printf("\n *** Empate!!! *** \n");

            pontos1 += 1;
            pontos2 += 1;

        }
        printf("\nPressione ENTER para continuar: ");
        getchar();
        getchar();
        break;
    // Case 3: Comparar PIB
    case 3:
        printf("\nComparando PIB...\n");
        printf("Paises: %s e %s\n", cidade1, cidade2);
        printf("PIBs: %.2f e %.2f\n", pib1, pib2);
        if (pib1 > pib2) {

            printf("Carta Número 1 Venceu!!! \n");

            pontos1 += 1;

        } else if (pib2 > pib1) {

            printf("Carta Número 2 Venceu!!! \n");

            pontos2 += 1;

        } else {

            printf("\n *** Empate!!! ***");

            pontos1 += 1;
            pontos2 += 1;

        };
        printf("\nPressione ENTER para continuar: ");
        getchar();
        getchar();
        break;
    // Case 4: Comparar Pontos Turísticos
    case 4:
        printf("\nComparando Pontos Túristicos...\n");
        printf("Paises: %s e %s\n", cidade1, cidade2);
        printf("Pontos Túristicos: %d e %d\n", pontosTU1,
        pontosTU2);
        if (pontosTU1 > pontosTU2) {

            printf("Carta Número 1 Venceu!!!\n");

            pontos1 += 1;

        } else if (pontosTU2 > pontosTU1) {

            printf("Carta Número 2 Venceu!!!\n");

            pontos2 += 1;

        } else {

            printf("\n *** Empate!!! ***\n");

            pontos1 += 1;
            pontos2 += 1;

        }
        printf("\nPressione ENTER para continuar: ");
        getchar();
        getchar();
        break;
    // Case 5: Comparar Densidade Populacional
    case 5:
        printf("\nComparando Densidade Populacional...\n");
        printf("Paises: %s e %s\n", cidade1, cidade2);
        printf("Densidade Populacional: %.2f e %.2f\n",
        densipopular1, densipopular2);

        if (densipopular1 < densipopular2) {

            printf("Carta Número 1 Venceu!!!\n");

            pontos1 += 1;

        } else if (densipopular2 < densipopular1) {

            printf("Carta Número 2 Venceu!!!\n");

            pontos2 += 1;

        } else {

            printf("\n *** Empate!!! ***\n");

            pontos1 += 1;
            pontos2 += 1;

        }
        printf("\nPressione ENTER para continuar: ");
        getchar();
        getchar();
        break;
    // Case 6: Comparar PIB per Capita
    case 6:
        printf("\nComparando PIB per Capita...\n");
        printf("Paises: %s e %s\n", cidade1, cidade2);
        printf("PIB per Capita: %.2f e %.2f\n", pibcapita1, pibcapita2);
        if (pibcapita1 > pibcapita2) {

            printf("    Carta Número 1 Venceu!!!\n");

            pontos1 += 1;

        } else if (pibcapita2 > pibcapita1) {

            printf("Carta Número 2 Venceu!!!\n");

            pontos2 += 1;

        } else {

            printf("\n *** Empate!!! ***\n");

            pontos1 += 1;
            pontos2 += 1;

        }
        printf("\nPressione ENTER para continuar: ");
        getchar();
        getchar();
        break;
    // Case 7: Comparar Super Poder
    case 7:
        printf("\nComparando Super Poder...\n");
        printf("Paises: %s e %s\n", cidade1, cidade2);
        printf("Super Poder: %.2f e %.2f\n", superPoder1, superPoder2);
        if (superPoder1 > superPoder2) {

            printf("Carta Número 1 Venceu!!!\n");

            pontos1 += 1;

        } else if (superPoder2 > superPoder1) {

            printf("Carta Número 2 Venceu!!!\n");

            pontos2 += 1;

        } else {

            printf("\n *** Empate!!! ***\n");

            pontos1 += 1;
            pontos2 += 1;

        }
        printf("\nPressione ENTER para continuar: ");
        getchar();
        getchar();
        break;
    // Case 8: Ver todos os atributos
    case 8:

        printf("\nComparando Todos os Atributos...\n");

   
        break;

    case 9:

        printf("Saindo....");
        loop2 = 0;
        break;
        }
        
        // Verifica resultado de cada rodada
        if (pontos1 == 1 && pontos2 == 1) {

        printf("\n\n----------------- O JOGO ACABOU EM EMPATE!!! -----------------");


        loop2 = 0;

        } else if (pontos1 == 2)
        {


        printf("\n\n******** Vencedor do JOGO CARTA 1!!! ********");

        loop2 = 0;

        } else if (pontos2 == 2) {

        printf("\n\n******** Vencedor do JOGO CARTA 2!!! ********");

        loop2 = 0;

        }
        }

        
        break;
    
    // Opção D: Sair do programa
    case 'D':
    case 'd':

        printf("Saindo....");
        
        return 0;

        break;
    
    // Opção inválida
    default:

        printf("\n ------------- Opção inválida -------------\n");

        break;
    }

    }



    
}