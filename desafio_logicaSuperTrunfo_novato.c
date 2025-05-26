#include <stdio.h>
#include <string.h> // Para o strcspn().

// Olá, me chamo Christian Ruan! E aqui é a minha primeira atividade com o professor Sérgio Cardoso.
// E esse é o desafio nível novato de Cartas Super Trunfo. Criando as Cartas do Super Trunfo!

int main() {
 //Declando as variaveis

    char estado[4], estado2[4];                        // Representa o Estado, por exemplo: A, B, C, D...
    char codigo[50], codigo2[50];               // Representa o Código da carta, por exemplo: A01, B02, C03, D04...
    char cidade[50], cidade2[50];              // Para armazenar e representar o nome do Estado utilizado.
    unsigned long int populacao, populacao2;  // Número da população.
    float area, area2;                      // Número da área por km².
    double pib, pib2;                       // Referente ao número do PIB.
    int ponto, ponto2;                     // Quantos Pontos Turísticos existem nesse local.
    float densidade1, densidade2;         // Densidade Populacional.
    float pibper1, pibper2;              // Pib per Capital.
    float super1, super2;               // Super Poder.
                                       // Resultado das variavéis.  

    printf("Olá, seja bem-vindo ao Desafio do Super Trunfo! \n");
    printf("Utilizaremos 2 cartas para fazer o jogo. \n");

    //Função printf exibe na tela e scanf coleta as informações referentes a carta 01.
    // Entrada da carta 1 .
    printf("Carta número 1: \n");
    printf("Digite uma letra de A a D: \n");
    scanf(" %s", estado);
    getchar(); // Limpar o Buffer.
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Estado: \n");
    getchar();
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("População: \n");
    scanf("%lu", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%lf", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &ponto);

    printf("Finalizamos os dados da primeira carta! \n");

    // Após fazer a primeira pesquisa, continuaremos para a segunda pesquisa.
    // E finalizar com as duas cartas modeladas. 

    // Entrada da carta 2.
    printf("Agora, vamos dar início à segunda carta.\n");

    printf("Carta número 2 \n"); 
    getchar();

    printf("Digite uma letra de A a D: \n");
    scanf("%s", estado2);
    getchar();

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Estado: \n");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Digite o valor da área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &ponto2);

    // Para calcular a Densidade Populaciona, será da seguinte forma:
    // Divida a população da cidade pela sua área.
    // O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    densidade1 = (float) populacao / area;  
    densidade2 = (float) populacao2 / area2;

    // Como calcular o PIB per Capita:
    // Divida o PIB da cidade pela sua população.
    // O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
    pibper1 = (float) pib / populacao;    
    pibper2 = (float) pib2 / populacao2;

    /* Super Poder, calcular:
     Soma de todos os atributos numéricos: População, Área, PIB, Pontos Turísticos, PIB per Capita;
     e o inverso da densidade populacional (Quanto menor a densidade, maior o poder!). */
    super1 = (float) populacao + area + pib + ponto + pibper1 + (1 / densidade1);
    super2 = (float) populacao2 + area2 + pib2 + ponto2 + pibper2 + (1 / densidade2);


    //Agora finalizando, vamos fazer aparecer as duas cartas.

    // Exibição da carta 1.
    printf("Carta 1: ");
    printf("Nome do Estado: %s\n", estado);
    printf("Código da carta: %s%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);                // Formatado para 2 casas decimais
    printf("Números de Pontos Turísticos: %d\n", ponto); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); 
    printf("PIB per Capita: %.2f reais\n", pibper1);
    printf("Super Poder: %.2f\n", super1);
    printf("\n");

    //Agora a exibição da carta 2.

    printf("Carta 2:"); 
    printf("Nome do Estado: %s\n", estado2);
    printf("Código da carta: %s%s\n", estado2 , codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);
    printf("Super Poder: %.2f\n", super2);
    printf("\n");

    //Calculo dos resultados das comparações entre cartas.

    int resultado_populacao = populacao > populacao2;
    int resultado_area = area > area2;
    int resultado_pib = pib > pib2;
    int resultado_ponto = ponto > ponto2;
    int resultado_densidade = densidade1 < densidade2; // Menor vence.
    int resultado_pibper = pibper1 > pibper2;
    int resultado_super = super1 > super2;

    // Comparações entre cartas, exibindo o vencedor de cada atributo
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta %d venceu (%d)\n", resultado_populacao ? 1 : 2, resultado_populacao);
    printf("Área: Carta %d venceu (%d)\n", resultado_area ? 1 : 2, resultado_area);
    printf("PIB: Carta %d venceu (%d)\n", resultado_pib ? 1 : 2, resultado_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado_ponto ? 1 : 2, resultado_ponto);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_densidade ? 1 : 2, resultado_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado_pibper ? 1 : 2, resultado_pibper);
    printf("Super Poder: Carta %d venceu (%d)\n", resultado_super ? 1 : 2, resultado_super);


    return 0;
}
