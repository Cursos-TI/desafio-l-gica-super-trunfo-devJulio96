#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declaração das variáveis;
    char estado01, codigo01[3], cidade01[20];
    unsigned long int populacao01;
    int pontosTuristicos01;
    float area01, PIB01, densidade01, percapta01;
    
    char estado02, codigo02[3], cidade02[20];
    unsigned long int populacao02;
    int pontosTuristicos02;
    float area02, PIB02, densidade02, percapta02;

    //Atribuição das variáveis das cartas 1 e 2 por meio da função scanf();
    printf("SUPER TRUNFO - Cadastre suas cartas\n\n");
    printf("Instruções:\n\n");
    printf("Para o Estado, digite uma letra maiúscula de 'A' a 'H'.\n");
    printf("Para o Código da carta, digite um número de '1' a '4'.\n");
    printf("Para o Nome da Cidade, digite o nome desejado sem espaços e acentos.\n");
    printf("Para o População, Área, PIB e Pontos Turísticos, digite apenas números.\n\n");

    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado01);
    printf("Código: ");
    scanf("%s", codigo01);
    printf("Nome da Cidade: ");
    scanf("%s", cidade01);
    printf("População: ");
    scanf("%d", &populacao01);
    printf("Área: ");
    scanf("%f", &area01);
    printf("PIB: ");
    scanf("%f", &PIB01);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos01);

    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado02);
    printf("Código: ");
    scanf("%s", codigo02);
    printf("Nome da Cidade: ");
    scanf("%s", cidade02);
    printf("População: ");
    scanf("%d", &populacao02);
    printf("Área: ");
    scanf("%f", &area02);
    printf("PIB: ");
    scanf("%f", &PIB02);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos02);

    //Cálculo da densidade e do PIB per Capita para as Cartas 1 e 2;
    densidade01 = (float) populacao01 / area01;
    percapta01 = (float) PIB01 / populacao01;
    
    densidade02 = (float) populacao02 / area02;
    percapta02 = (float) PIB02 / populacao02;
    
    //Implementação da comparação da Densidade Populacional;
    int resultadoDensidade = densidade01 < densidade02;

    //Formatação da saida do Resultado da comparação de Densidades Populacionais;
    printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
    printf("\nCarta 1 - %s (%c0%s): %.2f\n", cidade01, estado01, codigo01, densidade01);
    printf("Carta 2 - %s (%c0%s): %.2f\n", cidade02, estado02, codigo02, densidade02);

    //Implementação da Estrutura de Decisão paro Resultado e formatação da Saída;
    if (resultadoDensidade == 1){
        printf("Resultado: Carta 1 (%s) venceu!", cidade01);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", cidade02);
    }

    return 0;
}
