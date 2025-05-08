#include <stdio.h>

int main (){

    // ------------------- DECLARAÇÃO DE VARIÁVEIS PARA CARTA 1 -------------------
    char pais1 [50];
    signed long int populacao1; // Alterado para armazenar números maiores
    float area1;
    float densidadePopulacional1;
    float resultadoCarta1;

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
    printf("\n-------------------------------------------\n\n");

    // ------------------- DECLARAÇÃO DE VARIÁVEIS PARA CARTA 2 -------------------
    char pais2 [50];
    signed long int populacao2;// Alterado para armazenar números maiores
    float area2;
    float densidadePopulacional2;
    float resultadoCarta2;


    // ------------------- COLETA DOS DADOS DA CARTA 02 -------------------
    printf("Dados da carta 01 armazenados.\n");
    printf("Agora informe os dados da carta 02:\n\n");

    printf("---------- Cadastro da Carta 02 ----------\n");

    printf("Digite o País: ");
    scanf("%s", pais2);

    printf("Digite o valor da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o valor da área em metros quadrados: ");
    scanf("%f", &area2);

    printf("\n-------------------------------------------\n\n");

    // ------------------- CÁLCULOS -------------------
    densidadePopulacional1 =(float) populacao1 / area1;

    densidadePopulacional2 = (float) populacao2 / area2;


    // ------------------- EXIBIÇÃO DAS DUAS CARTAS -------------------
    printf("========== EXIBIÇÃO DAS CARTAS ==========\n\n");

    // ---- Carta 01 ----
    printf("---------- Carta 01 ----------\n");
    printf("País: %s\n", pais1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade Populacional: %.2f km²\n", densidadePopulacional1);//exibindo na tela o valor da densidade populacional;
    printf("-----------------------------\n\n");

    // ---- Carta 02 ----
    printf("---------- Carta 02 ----------\n");
    printf("País: %s\n", pais2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2); 
    printf("Densidade Populacional: %.2f km²\n", densidadePopulacional2);  //exibindo na tela o valor da densidade populacional;
    printf("-----------------------------\n");

    //Menu de interacao 
    int opcao; // variavel que vai receber a escolha do usuario

    printf("*---Escolha uma opção para comparar entre as cartas---*\n");
    printf("Digite 1 para comparar: Populção \n");
    printf("Digite 2 para comparar: Área \n");
    printf("Digite 3 para comparar: Densidade Populacional\n");
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

        break;
    
        case  3:
        printf("Você escolheu comparar a Densidade Populacional(Menor Vence).\n");
        printf("\n");
        printf("---------- Carta 01 ----------\n");
        printf("País: %s\n", pais1);
        printf("Densidade Populacional: %.2f km²\n", densidadePopulacional1);
        printf("\n");
        printf("---------- Carta 02 ----------\n");
        printf("País: %s\n", pais2);
        printf("Densidade Populacional: %.2f km²\n", densidadePopulacional2);
        printf("\n");

        break;

    default:
    printf ("Opção inválida!");
        break;
    }
        
    printf("-----------------------------\n");

    int opcao2; // variavel que vai receber a escolha do usuario
    if (opcao == 1)
    {
        printf("*---Escolha outra opção para comparar entre as cartas---*\n");
        printf("Digite 2 para comparar: Área \n");
        printf("Digite 3 para comparar: Densidade Populacional\n");
        scanf ("%d", &opcao2);
    } else if (opcao == 2)
    {
        printf("*---Escolha outra opção para comparar entre as cartas---*\n");
        printf("Digite 1 para comparar: População \n");
        printf("Digite 3 para comparar: Densidade Populacional\n");
        scanf ("%d", &opcao2);
    }else if (opcao == 3)
    {
        printf("*---Escolha outra opção para comparar entre as cartas---*\n");
        printf("Digite 1 para comparar: População \n");
        printf("Digite 2 para comparar: Área \n");
        scanf ("%d", &opcao2);
    }else{
        printf("Opcao invalida!");
    }
    int pontosCarta1 = 0;
    int pontosCarta2 = 0;


    switch (opcao2)
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
                pontosCarta1 ++;

            } else if(populacao1 < populacao2){
                pontosCarta2 ++;

            }else{
                pontosCarta1 ++;
                pontosCarta2 ++;
            }
        break; 
        case 2:
       
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
        pontosCarta1 ++;
    }else if(area1 < area2){          
        pontosCarta2 ++;
    }else{
        pontosCarta1 ++;
        pontosCarta2 ++;
    }
     break;
        case 3:
        printf("Você escolheu comparar a Densidade Populacional(Menor Vence).\n");
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
        pontosCarta1 ++;
    }else if(densidadePopulacional1 > densidadePopulacional2){            
        pontosCarta2 ++;
    }else{
        pontosCarta1 ++;
        pontosCarta2 ++;
    }

        break;
    
    default:
    printf("Opcao invalida!");
        break;
    }

      if (pontosCarta1 > pontosCarta2){
        printf("A carta 01 Venceu o jogo com %d pontos a mais que a carta 02\n", (pontosCarta1 - pontosCarta2));
    } else if (pontosCarta1 < pontosCarta2){                                                                        //If else para saber quem ganhou e a diferenca entre de pontos
        printf("A carta 02 Venceu o jogo com %d pontos a mais que a carta 01\n", (pontosCarta2 - pontosCarta1));
    } else{
        printf(" Empate entre as cartas\n");
    }
     
    
    
    return 0;
}