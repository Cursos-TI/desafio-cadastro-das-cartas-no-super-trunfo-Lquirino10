#include<stdio.h>

int main(){

    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    

    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite o código: ");
    scanf("%s", &codigo);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);

    printf("Digita a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%d", &pib);

    printf("Digite um quantos pontosturísticos tem: ");
    scanf("%d", &pontosTuristicos);

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB %d", pib);
    printf("Número de pontos turísticos: %d\n\n", pontosTuristicos); 

    return 0;

    
}
