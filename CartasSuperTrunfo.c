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

//variaves para vetores de comparação
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPonto;
    int resultadoDensidade;
    int resultadoPibCapta;
    int resultadoSuperPoder;
    unsigned long int somaPoder;
    unsigned long int somaPoder2;



// vetor de ponteiros para strings
    char *vencedorPopulacao[20] = {"Carta 2 venceu", "Carta 1 venceu"};
    char *vencedorArea[20] = {"Carta 2 venceu", "Carta 1 venceu"};
    char *vencedorPib[20] = {"Carta 2 venceu", "Carta 1 venceu"};
    char *vencedorPonto[20] = {"Carta 2 venceu", "Carta 1 venceu"};
    char *vencedorDensidade[20] = {"Carta 2 venceu", "Carta 1 venceu"};
    char *vencedorPibCapta[20] = {"Carta 2 venceu", "Carta 1 venceu"};
    char *vencedorSuperPoder[20] = {"Carta 2 venceu", "Carta 1 venceu"};



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
    densidade_popu = populacao/ area;
    pib_capt       = pib/ populacao;
 
//densidade carta 2------------------------
    densidade_popu2 = populacao2/ area2;
    pib_capt2 = pib2/ populacao2;

//=====calculo 1 e 2====
    resultadoPopulacao = populacao > populacao2;
    resultadoArea = area > area2;
    resultadoPib = pib > pib2;
    resultadoPonto = turisticos > turistico2;
    resultadoDensidade = densidade_popu > densidade_popu2;
    resultadoPibCapta = pib_capt > pib_capt2;

    somaPoder = populacao + area + pib + turisticos + densidade_popu + pib_capt;
    somaPoder2 = populacao2 + area2 + pib2 + turistico2 + densidade_popu2 + pib_capt2;

    resultadoSuperPoder = somaPoder > somaPoder2;

    


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
    printf("Super Poder: %lu\n", somaPoder);
    

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_popu2);
    printf("PIB per Capita: %.2f reais\n", pib_capt2);
    printf("Super Poder: %lu\n", somaPoder2);

    printf("\n");
    printf("\n");

 //=================================COMPARAÇÃO DE CARTAS===============================
    printf("*****Comparação de Cartas: *****\n");
    printf("População: %s (%d)\n", vencedorPopulacao[resultadoPopulacao],resultadoPopulacao);
    printf("Área: %s (%d)\n",vencedorArea[resultadoArea], resultadoArea);
    printf("PIB: %s (%d)\n", vencedorPib[resultadoPib], resultadoPib);
    printf("Pontos Turisticos: %s (%d)\n", vencedorPonto[resultadoPonto], resultadoPonto);
    printf("Densidade Pupolacional: %s (%d)\n",vencedorDensidade[resultadoDensidade], resultadoDensidade);
    printf("PIB per Capita: %s (%d)\n", vencedorPibCapta[resultadoPibCapta], resultadoPibCapta);
    printf("Super Poder: %s (%d)\n",vencedorSuperPoder[resultadoSuperPoder],resultadoSuperPoder);

    printf("\n");
    printf("\n");
    /* 
    Exemplo:

Carta 1 - São Paulo (SP): 12.300.000
Carta 2 - Rio de Janeiro (RJ): 6.000.000
Resultado: Carta 1 (São Paulo) venceu! */
    printf("*****Detalhes de Carta\n*****");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("carta 1 - %s: %d\n", cidade, populacao);
    printf("carta 2 - %s: %d\n", cidade2, populacao2);
    if(populacao > populacao2){
        printf("Resultado: carta 1 (%s) venceu!\n", cidade);
    }else {
        printf("Resultado: carta 2 (%s) venceu!\n", cidade2);
    }
        printf("\n");

    //variavel para switch

     int opcao;

        printf("Escolha um atributo para comparação: \n");
        printf("01 - população\n");
        printf("02 - Área\n");
        printf("03 - Pib\n");
        printf("04 - Número Turismo\n");
        printf("05 - Densidade\n");
        printf("Opção: ");
        printf("\n");
        scanf("%d", &opcao);

        

    switch (opcao)
    {
    case 1:
    printf("=====RESULTADO=====\n");
        printf("carta-1-%s população: %d\n", cidade, populacao);
        printf("carta-2-%s população: %d\n", cidade2, populacao2);
        printf("\n");
            if(populacao > populacao2){
        printf("Resultado: carta 1 (%s) venceu!\n", cidade);
        printf("\n");
            }else if (populacao == populacao2)
            {
            printf("A cartas deram empate !!");
            printf("\n");
            }else
            {
            printf("Resultado: carta 2 (%s) venceu!!\n", cidade2);
            printf("\n");
            }
        break;
    case 2:
    printf("=====RESULTADO=====\n");
        printf("carta-1-%s Área: %f\n", cidade,area);
        printf("carta-2-%s Área: %f\n", cidade2, area2);
        printf("\n");
            if (area > area2)
            {
        printf("Resultado: Carta 1 (%s) venceu !!\n", cidade);
        printf("\n");
            }else if (area == area2)
            {
        printf("Resultado:As Cartas deram empate !!\n");
        printf("\n");
            }else
            {
        printf("Resultado: Carta 2 (%s) venceu !!\n", cidade2);
        printf("\n");
            }
            break;
    case 3:
    printf("=====RESULTADO=====\n");
        printf("Carta 1 (%s) Pib %.2f!!\n", cidade, pib);
        printf("Carta 2 (%s) Pib %.2f!!\n", cidade2, pib2);
        printf("\n");
            if (pib > pib2)
            {
        printf("Resultado: Carta 1 (%s) venceu !!\n", cidade);
        printf("\n");
            }else if(pib2 == pib)
            {
        printf("Resultado:As cartas deram empate !!\n"); 
        printf("\n");
            }else
            {
        printf("Resultado: Carta 2 (%s) venceu !!\n", cidade2);
        printf("\n");
            }
            break;
    case 4:
    printf("=====RESULTADO=====\n");
        printf("carta-1-(%s) Números de Pontos Turisticos: %d\n", cidade, turisticos);
        printf("carta-2-(%s) Números de Pontos Turisticos: %d\n", cidade2, turistico2);
        printf("\n");
            if (turisticos > turistico2)
            {
        printf("Resultado: Carta 1 (%s) venceu !!\n", cidade);
        printf("\n");
            }else if (turisticos == turistico2)
            {
        printf("Resultado:As cartas deram empate !!\n");
        printf("\n");
            }else
            {
        printf("Resultado: Carta 2 (%s) venceu !!\n", cidade2);
        printf("\n");
            }
            break;
    case 5: 
    printf("=====RESULTADO=====\n");
        printf("carta-1-%s Densidade populacional: %lf\n", cidade, densidade_popu);
        printf("carta-2-%s Densidade populacional: %lf\n", cidade2, densidade_popu2);
        printf("\n");
            if (densidade_popu < densidade_popu2)
            {
        printf("Resultado: Carta 1 (%s) venceu !!\n", cidade);
        printf("\n");
            }else if (densidade_popu == densidade_popu2)
            {
        printf("Resultado:As cartas deram empate !!\n");
        printf("\n");
            }else
            {
        printf("Resultado: Carta 2 (%s) venceu !!\n", cidade2);
        printf("\n");
            }
            break;
            default: 
        printf("Valor inserido invalido !!!\n");
        printf("\n");
            break; 
    }

            int atributos1, atributos2;
            int atributoPopulacao, atributoArea, atributoTuristico,
             atributoDensidade, atributoPib;

        printf("*****Escolha dois atributos***** \n");
        printf("1 - população\n");
        printf("2 - Área\n");
        printf("3 - Pib\n");
        printf("4 - Número Turismo\n");
        printf("5 - Densidade\n");
        printf("Primeira Opção: ");
        scanf("%d", &atributos1);

        printf("\n");

        if (atributos1 == 1)
        {
        printf("2 - Área\n");
        printf("3 - Pib\n");
        printf("4 - Número Turismo\n");
        printf("5 - Densidade\n");
        printf("Segunda Opção: ");
        scanf("%d", &atributos2);
        printf("\n");

        }else if (atributos1 == 2)
        {
        printf("1 - população\n");
        printf("3 - Pib\n");
        printf("4 - Número Turismo\n");
        printf("5 - Densidade\n");
        printf("Segunda Opção: ");
        scanf("%d", &atributos2);
        printf("\n");

        }else if (atributos1 == 3)
        {
        printf("1 - população\n");
        printf("2 - Área\n");
        printf("4 - Número Turismo\n");
        printf("5 - Densidade\n");
        printf("Segunda Opção: ");
        scanf("%d", &atributos2);
        printf("\n");

        }else if (atributos1 == 4)
        {
        printf("1 - população\n");
        printf("2 - Área\n");
        printf("3 - Pib\n");
        printf("5 - Densidade\n");
        printf("Segunda Opção: ");
        scanf("%d", &atributos2);
        printf("\n");

        }else if(atributos1 == 5)
        {
        printf("1 - população\n");
        printf("2 - Área\n");
        printf("3 - Pib\n");
        printf("4 - Número Turismo\n");
        printf("Segunda Opção: ");
        scanf("%d", &atributos2);

        printf("\n");
        printf("\n");
        }else
        {
            printf("Valor invalido !!!\n");
        }
        atributoPopulacao = (populacao > populacao2) ? 1 : 0;
        atributoArea = (area > area2) ? 1 : 0;
        atributoTuristico = (turisticos > turistico2) ? 1 : 0;
        atributoDensidade = (densidade_popu < densidade_popu2) ? 1 : 0;
        atributoPib = (pib > pib2) ? 1 : 0;

        switch (atributos1)
        {
        case 1:
            printf("Você escolheu o atributo (População)\n");
            printf("carta 1 possui: %d habitantes\n", populacao);
            printf("carta 2 possui: %d habitantes\n", populacao2);
            printf("\n");
            if (atributoPopulacao == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo um maior numero de habitantes!!!\n", cidade);
                printf("\n");
            }else if (populacao == populacao2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo um maior numero de habitantes!!!\n", cidade2);
                printf("\n");
            }
            break;
            

        case 2:
            printf("você esolheu o atributo (Área) \n");
            printf("carta 1 possui: %.3f habitantes\n", area);
            printf("carta 2 possui: %.3f habitantes\n", area2);
            printf("\n");
         if (atributoArea == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo um maior numero de km²!!!\n", cidade);
                printf("\n");
            }else if (area == area2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo um maior numero de km²!!!\n", cidade2);
                printf("\n");
            }
            break;


        case 3:
            printf("você esolheu o atributo (Pib) \n");
            printf("Carta 1 possui R$: %.2f reais \n", pib);
            printf("Carta 2 possui R$: %.2f reais \n", pib2);
            printf("\n");
            if (atributoPib == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo um maior Produto Interno Bruto!!!\n", cidade);
                printf("\n");
            }else if (area == area2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo um maior Produto Interno Bruto!!!\n", cidade2);
                printf("\n");
            }
            printf("\n");
            break;


            
        case 4:
            printf("você esolheu o atributo (Pontos Turisticos) \n");
            printf("Carta 1 possui: %d Pontos Turisticos\n", turisticos);
            printf("Carta 2 possui: %d Pontos Turisticos\n", turistico2);
            printf("\n");
        if (atributoTuristico == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo mais Pontos Turisticos!!!\n", cidade);
                printf("\n");
            }else if (turisticos == turistico2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo mais Pontos Turisticos!!!\n", cidade2);
                printf("\n");
            }
            break;


        case 5:
            printf("você esolheu o atributo (Densidade) \n");
            printf("Carta 1 possui: %lf de densidade demográfica\n", densidade_popu);
            printf("Carta 2 possui: %lf de densidade demográfica\n", densidade_popu2);
            printf("\n");
        if (atributoDensidade == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo uma menor densidade demografica!!!\n", cidade);
                printf("\n");
            }else if (densidade_popu == densidade_popu2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo uma menor densidade demografica!!!\n", cidade2);
                printf("\n");
            }
            break;
            
        default:
         printf("\n");
            break;


            printf("\n");

        }
        switch (atributos2)
        {
        case 1:
            printf("Você escolheu o atributo (População)\n");
            printf("carta 1 possui: %d habitantes\n", populacao);
            printf("carta 2 possui: %d habitantes\n", populacao2);
            printf("\n");
            if (atributoPopulacao == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo um maior numero de habitantes!!!\n", cidade);
                printf("\n");
            }else if (populacao == populacao2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo um maior numero de habitantes!!!\n", cidade2);
                printf("\n");
            }
            break;


        case 2:
            printf("você esolheu o atributo (Área) \n");
            printf("carta 1 possui: %.3f habitantes\n", area);
            printf("carta 2 possui: %.3f habitantes\n", area2);
            printf("\n");
         if (atributoArea == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo um maior numero de km²!!!\n", cidade);
                printf("\n");
            }else if (area == area2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo um maior numero de km²!!!\n", cidade2);
                printf("\n");
            }
            break;


        case 3:
            printf("você esolheu o atributo (Pib) \n");
            printf("Carta 1 possui R$: %.2f reais \n", pib);
            printf("Carta 2 possui R$: %.2f reais \n", pib2);
            printf("\n");
            if (atributoPib == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo um maior Produto Interno Bruto!!!\n", cidade);
                printf("\n");
            }else if (area == area2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo um maior Produto Interno Bruto!!!\n", cidade2);
                printf("\n");
            }
            break;


            
        case 4:
            printf("você esolheu o atributo (Pontos Turisticos) \n");
            printf("Carta 1 possui: %d Pontos Turisticos\n", turisticos);
            printf("Carta 2 possui: %d Pontos Turisticos\n", turistico2);
            printf("\n");
        if (atributoTuristico == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo mais Pontos Turisticos!!!\n", cidade);
                printf("\n");
            }else if (turisticos == turistico2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo mais Pontos Turisticos!!!\n", cidade2);
                printf("\n");
            }
            break;


        case 5:
            printf("você esolheu o atributo (Densidade) \n");
            printf("Carta 1 possui: %lf de densidade demográfica\n", densidade_popu);
            printf("Carta 2 possui: %lf de densidade demográfica\n", densidade_popu2);
            printf("\n");
        if (atributoDensidade == 1)
            {
                printf("*****Carta 1 (%s) venceu obtendo uma menor densidade demografica!!!\n", cidade);
                printf("\n");
            }else if (densidade_popu == densidade_popu2)
            {
                printf("*****Carta 1 (%s)e carta 2 (%s) empataram !!!\n", cidade, cidade2);
                printf("\n");
            }else
            {
                printf("*****Carta 2 (%s) venceu obtendo uma menor densidade demografica!!!\n", cidade2);
                printf("\n");
            }
            break;
            
        default:
         printf("*****você esolheu uma opção invalida\n");
         printf("\n");
            break;


            printf("\n");

        }  
}

