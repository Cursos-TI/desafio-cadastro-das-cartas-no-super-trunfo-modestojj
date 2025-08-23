#include <stdio.h>
#include <string.h>

int main() {
    printf("CADASTRO DA CARTA 1\n");

    char inicial;
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;

   

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


    printf("=====Carta 01=====\n");
    printf("Estado: %c\n", inicial);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turisticos: %d\n", turisticos);
    printf("\n");
    printf("\n");


//=========================DADOS DA SEGUNDA CARTA===========================================
    char iniciall;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    printf("DIGITE INFORMAÇÕES SOBRE SUA SEGUNDA CIDADE: \n");

    printf("Qual a inicia da sua cidade?: ");
    scanf(" %c", &iniciall);

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

    printf("=====Carta 02=====\n");
    printf("Estado: %c\n", iniciall);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", turistico2);
    
    return 0;
}
