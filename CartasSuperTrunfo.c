#include <stdio.h>
#include <string.h>

int main() {
    printf("**************************************************************\n");

    char inicial, INICIAL;
    char codigo[20], codigo2[20];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turisticos, turistico2;
    float densidade_popu, densidade_popu2;
    float pib_capt, pib_capt2;
//=======================DADOS DA PRIMEIRA CARTA===========================

    printf("*****DIGITE INFORMAÇÕES SOBRE SUA PRIMEIRA CIDADE***** \n");
    printf("Digite a inicial da sua cidade: ");
    scanf(" %c", &inicial);

    printf("Digite um código para seu Estado EX(RS001): ");
    scanf("%s", codigo);

    getchar(); // limpa o enter antes do fgets

    printf("Digite o nome da sua Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    // remove o \n que o fgets adiciona
    cidade[strcspn(cidade, "\n")] = 0;

    
    printf("Digite o número da População: ");
    scanf("%d", &populacao);

    printf("Digite a Área da cidade em (Km): ");
    scanf("%f", &area);

    printf("Digite o PIB real da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turisticos);
    printf("\n");
    printf("\n");

//=======================DADOS DA SEGUNDA CARTA===========================

    printf("*****DIGITE INFORMAÇÕES SOBRE SUA SEGUNDA CIDADE***** \n");

    printf("Qual a inicia da sua cidade?: ");
    scanf(" %c", &INICIAL);

    printf("Qual o código para seu Estado EX(RS002): ");
    scanf("%s", codigo2);

    getchar(); // limpa o enter antes do fgets

    printf("Qual o nome da sua Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    // remove o \n que o fgets adiciona
    cidade2[strcspn(cidade2, "\n")] = 0;

    
    printf("Qual o número da População?: ");
    scanf("%d", &populacao2);

    printf("Qual a Área da cidade em (Km)?: ");
    scanf("%f", &area2);

    printf("Qual o PIB real da cidade?: ");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turisticos?: ");
    scanf("%d", &turistico2);

    printf("\n");
    printf("\n");

//densidade carta 1-----------------------
    densidade_popu = (float)populacao/ area;
    pib_capt = pib/ populacao;

//densidade carta 2------------------------
    densidade_popu2 = populacao2/ area2;
    pib_capt2 = pib2/ populacao2;

//==================SAIDA DE INFORMAÇÕES================================


    printf("==========Carta 01==========\n");
    printf("Estado: %c\n", inicial);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade_popu);
    printf("PIB per Capita: %.2f reais\n", pib_capt);

    printf("\n");
    printf("\n");

    printf("==========Carta 02==========\n");
    printf("Estado: %c\n", INICIAL);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade_popu);
    printf("PIB per Capita:%.2f reais\n", pib_capt2);

    printf("\n");
    printf("\n");

    
    return 0;
}

