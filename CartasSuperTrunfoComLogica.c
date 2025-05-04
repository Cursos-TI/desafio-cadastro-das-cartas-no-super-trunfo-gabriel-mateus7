#include <stdio.h>

int main (){

    // ------------------- DECLARAÇÃO DE VARIÁVEIS PARA CARTA 1 -------------------
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

    printf("Digite o estado da primeira carta (lembre-se de não colocar espaços, se precisar digite tudo junto): ");
    scanf("%s", estado1);  // Lê o nome do estado (sem espaços)

    printf("Digite o código da carta: ");
    scanf("%s", codigoDaCarta1);  // Lê o código identificador da carta

    printf("Digite o nome da cidade (lembre-se de não colocar espaços, se precisar digite tudo junto): ");
    scanf("%s", nomeCidade1);  // Nome da cidade (sem espaços)

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

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade (lembre-se de não colocar espaços, se precisar digite tudo junto): ");
    scanf("%s", nomeCidade2);

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
    PIBperCapita1 = PIB1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + PIB1 + QuantPontosTuristico1 + PIBperCapita1 + (1.0 / densidadePopulacional1);

    densidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + PIB2 + QuantPontosTuristico2 + PIBperCapita2 + (1.0 / densidadePopulacional2);


    // ------------------- EXIBIÇÃO DAS DUAS CARTAS -------------------
    printf("========== EXIBIÇÃO DAS CARTAS ==========\n\n");

    // ---- Carta 01 ----
    printf("---------- Carta 01 ----------\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", QuantPontosTuristico1);
    printf("Densidade Populacional: %.2f km²\n", densidadePopulacional1);//exibindo na tela o valor da densidade populacional;
    printf("PIB per Capita: %.2f  reais\n", PIBperCapita1);//exibindo na tela o valor do PIB per capita;
    printf("Super Poder: %.2f\n", superPoder1);
    printf("-----------------------------\n\n");

    // ---- Carta 02 ----
    printf("---------- Carta 02 ----------\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", QuantPontosTuristico2);  
    printf("Densidade Populacional: %.2f km²\n", densidadePopulacional2);  //exibindo na tela o valor da densidade populacional;
    printf("PIB per Capita: %.2f  reais\n", PIBperCapita2);  //exibindo na tela o valor do PIB per capita;
    printf("Super Poder: %.2f\n", superPoder2);
    printf("-----------------------------\n");

    // ------------------- RESULTADO DAS COMPARAÇÕES COM IF E ELSE -------------------

     pontosCarta1 = 0;           //inicializando as variaveis com valor 0
     pontosCarta2 = 0;

    printf("-------Resultado ----------\n");
    if(populacao1 > populacao2){
        printf("População: Carta 01 venceu\n");
        pontosCarta1 ++;
    } else if(populacao1 < populacao2){
        printf("População: Carta 02 venceu\n");           //If else para saber qual carta tem a maior população;
        pontosCarta2 ++;
    }else{
        printf("População: Empate entre as cartas\n");
        pontosCarta1 ++;
        pontosCarta2 ++;
    }


    if(area1 > area2){
        printf("Area: carta 01 venceu \n");
        pontosCarta1 ++;
    }else if(area1 < area2){
        printf("Area: carta 02 venceu \n");                //If else para saber qual carta tem a maior area;
        pontosCarta2 ++;
    }else{
        printf("Area: Empate entre as cartas\n");
        pontosCarta1 ++;
        pontosCarta2 ++;
    }


    if(PIB1 > PIB2){
        printf("PIB: carta 01 venceu \n");
        pontosCarta1 ++;
    }else if(PIB1 < PIB2){
        printf("PIB: carta 02 venceu \n");
        pontosCarta2 ++;
    }else{                                                 //If else para saber qual carta tem o maior PIB;
        printf("PIB: Empate entre as cartas\n");
        pontosCarta1 ++;
        pontosCarta2 ++;
    }


    if(QuantPontosTuristico1 > QuantPontosTuristico2){
        printf("Número de Pontos Turísticos: carta 01 venceu \n");
        pontosCarta1 ++;
    }else if(QuantPontosTuristico1 < QuantPontosTuristico2){             //If else para saber qual carta tem o maior quantidade de pontos turisticos;
        printf("Número de Pontos Turísticos: carta 02 venceu \n");
        pontosCarta2 ++;
    }else{
        printf("Número de Pontos Turísticos: Empate entre as cartas\n");
        pontosCarta1 ++;
        pontosCarta2 ++;
    }


    if(densidadePopulacional1 < densidadePopulacional2){
        printf("Densidade Populacional (menor vence): carta 01 venceu \n");
        pontosCarta1 ++;
    }else if(densidadePopulacional1 > densidadePopulacional2){             //If else para saber qual carta tem a "menor" Densidade Populacional;
        printf("Densidade Populacional (menor vence): carta 02 venceu \n");
        pontosCarta2 ++;
    }else{
        printf("Densidade Populacional: Empate entre as cartas\n");
        pontosCarta1 ++;
        pontosCarta2 ++;
    }

    if(PIBperCapita1 > PIBperCapita2){
        printf("PIB per Capita: carta 01 venceu \n");
        pontosCarta1 ++;
    }else if(PIBperCapita1 < PIBperCapita2){
        printf("PIB per Capita: carta 02 venceu \n");
        pontosCarta2 ++;
    }else{                                                 //If else para saber qual carta tem o maior PIB per Capita;
        printf("PIB per Capita: Empate entre as cartas\n");
        pontosCarta1 ++;
        pontosCarta2 ++;
    }


    if(superPoder1 > superPoder2){
        printf("Super Poder: carta 01 venceu \n");
        pontosCarta1 ++;
    }else if(superPoder1 < superPoder2){             //If else para saber qual carta tem o maior Super Poder;
        printf("Super Poder: carta 02 venceu \n");
        pontosCarta2 ++;
    }else{
        printf("Super Poder: Empate entre as cartas\n");
        pontosCarta1 ++;
        pontosCarta2 ++;
    }
    printf("-----------------------------\n");

    printf("Total de Pontos Carta 01: %d\n",pontosCarta1);        //Exibir a quantidade de pontos de cada carta no jogo
    printf("Total de Pontos Carta 02: %d\n",pontosCarta2);

    if (pontosCarta1 > pontosCarta2){
        printf("A carta 01 Venceu o jogo com %d pontos a mais que a carta 02\n", (pontosCarta1 - pontosCarta2));
    } else if (pontosCarta1 < pontosCarta2){                                                                        //If else para saber quem ganhou e a diferenca entre de pontos
        printf("A carta 02 Venceu o jogo com %d pontos a mais que a carta 01\n", (pontosCarta2 - pontosCarta1));
    } else{
        printf(" Empate entre as cartas\n");
    }
    
    printf("-----------------------------\n");
}
