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
    char atributo01, atributo02;

    //Variáveis para declarar o vencedor de cada rodada;
    int resultado01, resultado02;

    //Variáveis para calcular o poder total da carta na comparação;
    float valorAtributo01pais01, valorAtributo02pais01;
    float valorAtributo01pais02, valorAtributo02pais02;
    float somaPais01, somaPais02;


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
    printf("\nQual o primeiro atributo que deseja comparar?\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("I - PIB\n");
    printf("T - Número de pontos turísticos\n");
    printf("D - Densidade demográfica\n");
    printf("Digite uma das letras para escolher o primeiro atributo: ");
    scanf(" %c", &atributo01);

    printf("\nQual o segundo atributo deseja comparar?\n");
    printf("Escolha um atributo diferente do primeiro\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("I - PIB\n");
    printf("T - Número de pontos turísticos\n");
    printf("D - Densidade demográfica\n");
    printf("Digite uma das letras para escolher o segundo atributo: ");
    scanf(" %c", &atributo02);

    if(atributo01 == atributo02){
        printf("O segundo atributo foi igual ao primeiro, reinicie o jogo!\n");
    } else{

        printf("\n%s - %s\n", pais01, pais02);
        printf("Atributo 1: %c vs Atributo 2: %c\n", atributo01, atributo02);
        
        //Realiza as comparações de acordo com os atributos escolhidos;
        switch (atributo01){
            case 'P':
            case 'p':
                printf("População - ");
                printf("Carta 1: %d - Carta 2: %d\n", populacao01,populacao02);
                valorAtributo01pais01 = (float) populacao01;
                valorAtributo01pais02 = (float) populacao02;

                if(populacao01 == populacao02){
                    resultado01 = 2;
                }else if(populacao01 > populacao02){
                    resultado01 = 1;
                } else{
                    resultado01 = 0;
                }
                break;
            case 'A':
            case 'a':
                printf("Área - ");
                printf("Carta 1: %.2f - Carta 2: %.2f\n", area01,area02);
                valorAtributo01pais01 =  area01;
                valorAtributo01pais02 =  area02;

                if(area01 == area02){
                    resultado01 = 2;
                }else if(area01 > area02){
                    resultado01 = 1;
                } else{
                    resultado01 = 0;
                }
                break;
            case 'I':
            case 'i':
                printf("PIB - ");
                printf("Carta 1: %.2f - Carta 2: %.2f\n", PIB01,PIB02);
                valorAtributo01pais01 =  PIB01;
                valorAtributo01pais02 =  PIB02;

                if(PIB01 == PIB02){
                    resultado01 = 2;
                }else if(PIB01 > PIB02){
                    resultado01 = 1;
                } else{
                    resultado01 = 0;
                }
                break;
            case 'T':
            case 't':
                printf("Pontos Turísticos - ");
                printf("Carta 1: %d - Carta 2: %d\n", pontosTuristicos01,pontosTuristicos02);
                valorAtributo01pais01 = (float) pontosTuristicos01;
                valorAtributo01pais02 = (float) pontosTuristicos02;

                if(pontosTuristicos01 == pontosTuristicos02){
                    resultado01 = 2;
                }else if(pontosTuristicos01 > pontosTuristicos02){
                    resultado01 = 1;
                } else{
                    resultado01 = 0;
                }
                break;
            case 'D':
            case 'd':
                printf("Densidade demográfica - ");
                printf("Carta 1: %.2f - Carta 2: %.2f\n", densidade01,densidade02);
                valorAtributo01pais01 = 1 / densidade01;
                valorAtributo01pais02 = 1 / densidade02;

                if(densidade01 == densidade02){
                    resultado01 = 2;
                }else if(densidade01 < densidade02){
                    resultado01 = 1;
                } else{
                    resultado01 = 0;
                }
                break;
            default:
                printf("Atributo 1 inválido! Reinicie o jogo!\n");
                break;
        }

        //Declara o vencedor do atributo 1;
        switch(resultado01){
            case 0:
                printf("Carta 2 venceu Atributo 1!\n\n");
                break;
            case 1:
                printf("Carta 1 venceu Atributo 1!\n\n");
                break;
            case 2:
                printf("Empate no Atributo 1!\n\n");
                break;
        }

        switch (atributo02){
            case 'P':
            case 'p':
                printf("População - ");
                printf("Carta 1: %d - Carta 2: %d\n", populacao01,populacao02);
                valorAtributo02pais01 = (float) populacao01;
                valorAtributo02pais02 = (float) populacao02;

                if(populacao01 == populacao02){
                    resultado02 = 2;
                }else if(populacao01 > populacao02){
                    resultado02 = 1;
                } else{
                    resultado02 = 0;
                }
                break;
            case 'A':
            case 'a':
                printf("Área - ");
                printf("Carta 1: %.2f - Carta 2: %.2f\n", area01,area02);
                valorAtributo02pais01 =  area01;
                valorAtributo02pais02 =  area02;

                if(area01 == area02){
                    resultado02 = 2;
                }else if(area01 > area02){
                    resultado02 = 1;
                } else{
                    resultado02 = 0;
                }
                break;
            case 'I':
            case 'i':
                printf("PIB - ");
                printf("Carta 1: %.2f - Carta 2: %.2f\n", PIB01,PIB02);
                valorAtributo02pais01 =  PIB01;
                valorAtributo02pais02 =  PIB02;

                if(PIB01 == PIB02){
                    resultado02 = 2;
                }else if(PIB01 > PIB02){
                    resultado02 = 1;
                } else{
                    resultado02 = 0;
                }
                break;
            case 'T':
            case 't':
                printf("Pontos Turísticos - ");
                printf("Carta 1: %d - Carta 2: %d\n", pontosTuristicos01,pontosTuristicos02);
                valorAtributo02pais01 = (float) pontosTuristicos01;
                valorAtributo02pais02 = (float) pontosTuristicos02;

                if(pontosTuristicos01 == pontosTuristicos02){
                    resultado02 = 2;
                }else if(pontosTuristicos01 > pontosTuristicos02){
                    resultado02 = 1;
                } else{
                    resultado02 = 0;
                }
                break;
            case 'D':
            case 'd':
                printf("Densidade demográfica - ");
                printf("Carta 1: %.2f - Carta 2: %.2f\n", densidade01,densidade02);
                valorAtributo02pais01 = 1 / densidade01;
                valorAtributo02pais02 = 1 / densidade02;

                if(densidade01 == densidade02){
                    resultado02 = 2;
                }else if(densidade01 < densidade02){
                    resultado02 = 1;
                } else{
                    resultado02 = 0;
                }
                break;
            default:
                printf("Atributo 1 inválido! Reinicie o jogo!\n");
                break;
        }

        //Declara o vencedor do Atributo 2;
        switch(resultado02){
            case 0:
                printf("Carta 2 venceu Atributo 2!\n\n");
                break;
            case 1:
                printf("Carta 1 venceu Atributo 2!\n\n");
                break;
            case 2:
                printf("Empate no Atributo 2!\n\n");
                break;
        }

        //Calcula a soma dos atributos para cada carta.
        somaPais01 = valorAtributo01pais01 + valorAtributo02pais01;
        somaPais02 = valorAtributo01pais02 + valorAtributo02pais02;

        //Exibe a soma dos atributos de cada carta
        printf("Poder Carta 1: %.2f - Poder Carta 2: %.2f\n", somaPais01, somaPais02);

        if(somaPais01 == somaPais02){
            printf("Empate!");
        } else if (somaPais01 > somaPais02) {
            printf("Carta 1: %s venceu a rodada!", pais01);
        } else {
            printf("Carta 2: %s venceu a rodada!", pais02);
        }
    }
    return 0;
}
