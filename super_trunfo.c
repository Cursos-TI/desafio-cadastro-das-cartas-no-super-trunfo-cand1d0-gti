#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cod1[3], cod2[3], cid1[20], cid2[20], est1, est2; 
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;

    printf("SUPER TRUNFO - PAÍSES\n");
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nInforme os dados da 1a carta\n");
    printf("Estado (letra de 'A' a 'H'): ");
    scanf("%s", &est1);
    printf("Código (estado + número de 01 a 04): ");
    scanf("%s", cod1);
    printf("Cidade: ");
    scanf("%s", cid1);
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &tur1);

    printf("\nInforme os dados da 2a carta 2\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf("%s", &est2);
    printf("Código (estado + número de 01 a 04): ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf("%s", cid2);
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &tur2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1\n");
    printf("Estado: %c\n",est1);
    printf("Código: %s\n",cod1);
    printf("Nome da Cidade: %s\n",cid1);
    printf("População: %d\n",pop1);
    printf("Área: %.2fkm²\n",area1);
    printf("PIB: $%.2f\n",pib1);
    printf("Número de Pontos Turísticos: %d\n",tur1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n",est2);
    printf("Código: %s\n",cod2);
    printf("Nome da Cidade: %s\n",cid2);
    printf("População: %d\n",pop2);
    printf("Área: %.2fkm²\n",area2);
    printf("PIB: $%.2f\n",pib2);
    printf("Número de Pontos Turísticos: %d\n",tur2);
    
    return 0;
}
