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

    //Inserindo calculo para ter a densidade populacional e o PIB per Capita das cartas 01 e 02

    densidadePopulacional1 =  (float) populacao1/area1;
    PIBperCapita1 =  (float) PIB1/populacao1;


    densidadePopulacional2 = (float) populacao2/area2;
    PIBperCapita2 =  (float) PIB2/populacao2;

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
    printf("População: %d\n", populacao1);
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
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", QuantPontosTuristico2);  
    printf("Densidade Populacional: %.2f km²\n", densidadePopulacional2);  //exibindo na tela o valor da densidade populacional;
    printf("PIB per Capita: %.2f  reais\n", PIBperCapita2);  //exibindo na tela o valor do PIB per capita;
    printf("Super Poder: %.2f\n", superPoder2);
    printf("-----------------------------\n");


    //Comparando as cartas 01 e 02

    // Cada resultado será 1 se a Carta 1 venceu, ou 0 se a Carta 2 venceu
    int resPop = populacao1 > populacao2;
    int resArea = area1 > area2;
    int resPIB = PIB1 > PIB2;
    int resTurismo = QuantPontosTuristico1 > QuantPontosTuristico2;
    int resDensidade = densidadePopulacional1 < densidadePopulacional2; // menor vence
    int resPIBcapita = PIBperCapita1 > PIBperCapita2;
    int resPoder = superPoder1 > superPoder2;

    // ------------------- RESULTADO DAS COMPARAÇÕES -------------------
    printf("\n========== COMPARAÇÃO DE CARTAS ==========\n");
    printf("População: Carta 1 venceu (%d)\n", resPop);
    printf("Área: Carta 1 venceu (%d)\n", resArea);
    printf("PIB: Carta 1 venceu (%d)\n", resPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resTurismo);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resPIBcapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resPoder);
    return 0;
}
