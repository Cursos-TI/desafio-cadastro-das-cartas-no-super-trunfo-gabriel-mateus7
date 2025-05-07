#include <stdio.h>

int main (){

    // ------------------- DECLARAÇÃO DE VARIÁVEIS PARA CARTA 1 -------------------
    char pais1 [50];
    char estado1 [50];
    char codigoDaCarta1 [7];
    char nomeCidade1 [50];
    signed long int populacao1; // Alterado para armazenar números maiores
    float area1;
    float PIB1;
    int QuantPontosTuristico1;
    float densidadePopulacional1;
    float PIBperCapita1;
    float superPoder1;
    int pontosCarta1;

    // ------------------- MENSAGEM INICIAL DO JOGO -------------------
    printf("========== BEM-VINDO AO JOGO DO SUPER TRUNFO ==========\n");
    printf("Nesse jogo, você deve inserir os dados de duas cartas. Bora começar!\n");
    printf("========================================================\n\n");

    // ------------------- COLETA DOS DADOS DA CARTA 01 -------------------
    printf("---------- Cadastro da Carta 01 ----------\n");

    printf("Digite o País da primeira carta (lembre-se de não colocar espaços, se precisar digite tudo junto): ");
    scanf("%s", pais1);  // Lê o nome do estado (sem espaços)

    printf("Digite o valor da população: ");
    scanf("%lu", &populacao1);  // Número inteiro da população

    printf("Digite o valor da área em metros quadrados: ");
    scanf("%f", &area1);  // Área da cidade

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB1);  // PIB da cidade

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &QuantPontosTuristico1);  // Total de pontos turísticos

    printf("\n-------------------------------------------\n\n");

    // ------------------- DECLARAÇÃO DE VARIÁVEIS PARA CARTA 2 -------------------
    char pais2 [50];
    char estado2 [50];
    char codigoDaCarta2 [7];
    char nomeCidade2 [50];
    signed long int populacao2;// Alterado para armazenar números maiores
    float area2;
    float PIB2;
    int QuantPontosTuristico2;
    float densidadePopulacional2;
    float PIBperCapita2;
    float superPoder2;
    int pontosCarta2;

    // ------------------- COLETA DOS DADOS DA CARTA 02 -------------------
    printf("Dados da carta 01 com o código: %s armazenados.\n", codigoDaCarta1);
    printf("Agora informe os dados da carta 02:\n\n");

    printf("---------- Cadastro da Carta 02 ----------\n");

    printf("Digite o País: ");
    scanf("%s", pais2);

    printf("Digite o valor da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o valor da área em metros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &QuantPontosTuristico2);

    printf("\n-------------------------------------------\n\n");

    // ------------------- CÁLCULOS -------------------
    densidadePopulacional1 = populacao1 / area1;

    densidadePopulacional2 = populacao2 / area2;


    // ------------------- EXIBIÇÃO DAS DUAS CARTAS -------------------
    printf("========== EXIBIÇÃO DAS CARTAS ==========\n\n");

    // ---- Carta 01 ----
    printf("---------- Carta 01 ----------\n");
    printf("País: %s\n", pais1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", QuantPontosTuristico1);
    printf("Densidade Populacional: %.2f km²\n", densidadePopulacional1);//exibindo na tela o valor da densidade populacional;
    printf("-----------------------------\n\n");

    // ---- Carta 02 ----
    printf("---------- Carta 02 ----------\n");
    printf("País: %s\n", pais2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", QuantPontosTuristico2);  
    printf("Densidade Populacional: %.2f km²\n", densidadePopulacional2);  //exibindo na tela o valor da densidade populacional;
    printf("-----------------------------\n");

    //Menu de interacao 
    int opcao; // variavel que vai receber a escolha do usuario

    printf("*---Escolha uma opção para comparar entre as cartas e decidir a vencedora---*\n");
    printf("Digite 1 para comparar: Populção \n");
    printf("Digite 2 para comparar: Área \n");
    printf("Digite 3 para comparar: PIB \n");
    printf("Digite 4 para comparar: Número de pontos turísticos: \n");
    printf("Digite 5 para comparar: Densidade Populacional\n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1: 
    printf("\n");
    printf("Você escolheu comparar a População.\n");
    printf("\n");
    printf("---------- Carta 01 ----------\n");
    printf("País: %s\n", pais1);
    printf("População: %ld\n", populacao1);
    printf("\n");
    printf("---------- Carta 02 ----------\n");
    printf("País: %s\n", pais2);
    printf("População: %ld\n", populacao2);
    printf("\n");
    if(populacao1 > populacao2){
        printf("Resultado: Carta 01 venceu\n");

    } else if(populacao1 < populacao2){
        printf("Resultado: Carta 02 venceu\n");           //If else para saber qual carta tem a maior população;
        pontosCarta2 ++;
    }else{
        printf("Resultado: Empate entre as cartas\n");
    }

        
        break;
        case  2:
        printf("Você escolheu comparar a Área.\n");
        printf("\n");
        printf("---------- Carta 01 ----------\n");
        printf("País: %s\n", pais1);
        printf("Área: %.2f km²\n", area1);
        printf("\n");
        printf("---------- Carta 02 ----------\n");
        printf("País: %s\n", pais2);
        printf("Área: %.2f km²\n", area2);
        printf("\n");

        if(area1 > area2){
            printf("Resultado: carta 01 venceu \n");
     
        }else if(area1 < area2){
            printf("Resultado: carta 02 venceu \n");                //If else para saber qual carta tem a maior area;
  
        }else{
            printf("Resultado: Empate entre as cartas\n");

        }

        break;
        case  3:
        printf("Você escolheu comparar a Área.\n");
        printf("\n");
        printf("---------- Carta 01 ----------\n");
        printf("País: %s\n", pais1);
        printf("PIB: %.2f \n bilhões de reais", PIB1);
        printf("\n");
        printf("---------- Carta 02 ----------\n");
        printf("País: %s\n", pais2);
        printf("PIB: %.2f \n bilhões de reais", PIB2);
        printf("\n");
        if(PIB1 > PIB2){
            printf("Resultado: carta 01 venceu \n");
        }else if(PIB1 < PIB2){
            printf("Resultado: carta 02 venceu \n");
        }else{                                                 //If else para saber qual carta tem o maior PIB;
            printf("Resultado: Empate entre as cartas\n");
        }


        
        break;
        case  4:

        printf("Você escolheu comparar a Números de Pontos Turísticos.\n");
        printf("\n");
        printf("---------- Carta 01 ----------\n");
        printf("País: %s\n", pais1);
        printf("Números de Pontos Turísticos: %.d\n", QuantPontosTuristico1);
        printf("\n");
        printf("---------- Carta 02 ----------\n");
        printf("País: %s\n", pais2);
        printf("Números de Pontos Turísticos: %.d \n", QuantPontosTuristico2);
        printf("\n");

        if(QuantPontosTuristico1 > QuantPontosTuristico2){
            printf("Resultado: carta 01 venceu \n");

        }else if(QuantPontosTuristico1 < QuantPontosTuristico2){             
            printf("Resultado: carta 02 venceu \n");

        }else{
            printf("Resultado: Empate entre as cartas\n");
        }
        
        break;
        case  5:
        printf("Você escolheu comparar a Densidade Populacional.\n");
        printf("\n");
        printf("---------- Carta 01 ----------\n");
        printf("País: %s\n", pais1);
        printf("Densidade Populacional: %.2f km²\n", densidadePopulacional1);
        printf("\n");
        printf("---------- Carta 02 ----------\n");
        printf("País: %s\n", pais2);
        printf("Densidade Populacional: %.2f km²\n", densidadePopulacional2);
        printf("\n");

        if(densidadePopulacional1 < densidadePopulacional2){
            printf("Densidade Populacional (menor vence): carta 01 venceu \n");
      
        }else if(densidadePopulacional1 > densidadePopulacional2){             //If else para saber qual carta tem a "menor" Densidade Populacional;
            printf("Densidade Populacional (menor vence): carta 02 venceu \n");

        }else{
            printf("Densidade Populacional: Empate entre as cartas\n");

        }        
        break;

    default:
    printf ("Opção inválida!");
        break;
    }
        
    printf("-----------------------------\n");

    return 0;
}