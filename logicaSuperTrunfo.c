#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declaração das variáveis;
    //Carta 1
    char pais01[20];
    int populacao01, pontosTuristicos01;
    float area01, PIB01, densidade01;
    
    //Carta 2
    char pais02[20];
    int populacao02, pontosTuristicos02;
    float area02, PIB02, densidade02;

    //Escolha do atributo de comparação
    int atributo;
    
    //Atribuição das variáveis das cartas 1 e 2 por meio da função scanf();
    printf("##### SUPER-TRUNFO #####\n");
    printf("Instruções:\n");
    printf("Para o Nome do País digite o nome desejado sem espaços e acentos.\n");
    printf("Para o População, Área, PIB e Pontos Turísticos, digite apenas números.\n\n");

    printf("Carta 1\n");
    printf("Nome do País: ");
    scanf(" %s", &pais01);
    printf("População: ");
    scanf("%d", &populacao01);
    printf("Área: ");
    scanf("%f", &area01);
    printf("PIB: ");
    scanf("%f", &PIB01);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos01);
    
    printf("Carta 2\n");
    printf("Nome do País: ");
    scanf(" %s", &pais02);
    printf("População: ");
    scanf("%d", &populacao02);
    printf("Área: ");
    scanf("%f", &area02);
    printf("PIB: ");
    scanf("%f", &PIB02);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos02);

    //Cálculo da densidade para as Cartas 1 e 2;
    densidade01 = (float) populacao01 / area01;
    densidade02 = (float) populacao02 / area02;
    
    //Escolhe qual atributo será comparado;
    printf("\nQual atributo deseja comparar?\n");
    printf("1 - Nome do País\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    printf("Digite um número para fazer a comparação: ");
    scanf("%d", &atributo);

    //Realiza as comparações de acordo com os casos escolhidos;
    switch (atributo){
        case 1:
            printf("\nNome dos países\n");
            printf("%s - %s\n", pais01, pais02);
            break;
        case 2:
            printf("%s - %s", pais01, pais02);
            printf("\nComparação: População\n");
            printf("Carta 1: %d - Carta 2: %d\n", populacao01,populacao02);
            if(populacao01 == populacao02){
                printf("EMPATE");
            }else if(populacao01 > populacao02){
                printf("Vencedor: %s", pais01);
            } else{
                printf("Vencedor: %s", pais02);
            }
            break;
        case 3:
            printf("%s - %s", pais01, pais02);
            printf("\nComparação: Área\n");
            printf("Carta 1: %.2f - Carta 2: %.2f\n", area01,area02);
            if(area01 == area02){
                printf("EMPATE");
            }else if(area01 > area02){
                printf("Vencedor: %s", pais01);
            } else{
                printf("Vencedor: %s", pais02);
            }
            break;
        case 4:
            printf("%s - %s", pais01, pais02);
            printf("\nComparação: PIB\n");
            printf("Carta 1: %.2f - Carta 2: %.2f\n", PIB01,PIB02);
            if(PIB01 == PIB02){
                printf("EMPATE");
            }else if(PIB01 > PIB02){
                printf("Vencedor: %s", pais01);
            } else{
                printf("Vencedor: %s", pais02);
            }
            break;
        case 5:
            printf("%s - %s", pais01, pais02);
            printf("\nComparação: Pontos Turísticos\n");
            printf("Carta 1: %d - Carta 2: %d\n", pontosTuristicos01,pontosTuristicos02);
            if(pontosTuristicos01 == pontosTuristicos02){
                printf("EMPATE");
            }else if(pontosTuristicos01 > pontosTuristicos02){
                printf("Vencedor: %s", pais01);
            } else{
                printf("Vencedor: %s", pais02);
            }
            break;
        case 6:
            printf("%s - %s", pais01, pais02);
            printf("\nComparação: Densidade demográfica\n");
            printf("Carta 1: %.2f - Carta 2: %.2f\n", densidade01,densidade02);
            if(densidade01 == densidade02){
                printf("Empate!");
            }else if(densidade01 < densidade02){
                printf("Vencedor: %s!", pais01);
            } else{
                printf("Vencedor: %s!", pais02);
            }
            break;
        default:
            printf("Opção inválida! Reinicie o jogo!\n");
            break;
    }
    return 0;
}
