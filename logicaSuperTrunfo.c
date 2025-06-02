#include <stdio.h>

int main(){
    printf("Super trunfo!\n");
    return 0;
}
struct Cidade {
    char nome[50];
    int populacao;    // em habitantes
    float area;       // em km²
    float pib;        // em bilhões de reais
};
int main() {
    // Definindo as cartas fixas
    struct Cidade saoPaulo = {"São Paulo", 12300000, 1521.0, 799.0};
    struct Cidade brasilia = {"Brasília", 3100000, 5802.0, 289.0};

    // Pontuação inicial
    int pontosSP = 0;
    int pontosBSB = 0;

    printf("--- Cartas em jogo ---\n");
    printf("Cidade 1: %s\n", saoPaulo.nome);
    printf("Cidade 2: %s\n", brasilia.nome);

    printf("\n--- Comparação das Cidades ---\n");
// Comparação por população
    if (saoPaulo.populacao > brasilia.populacao) {
        printf("População: %s vence\n", saoPaulo.nome);
        pontosSP++;
    } else if (saoPaulo.populacao < brasilia.populacao) {
        printf("População: %s vence\n", brasilia.nome);
        pontosBSB++;
    } else {
        printf("População: Empate\n");
    }
    // Comparação por área
    if (saoPaulo.area > brasilia.area) {
        printf("Área: %s vence\n", saoPaulo.nome);
        pontosSP++;
    } else if (saoPaulo.area < brasilia.area) {
        printf("Área: %s vence\n", brasilia.nome);
        pontosBSB++;
    } else {
        printf("Área: Empate\n");
    }
     // Comparação por PIB
    if (saoPaulo.pib > brasilia.pib) {
        printf("PIB: %s vence\n", saoPaulo.nome);
        pontosSP++;
    } else if (saoPaulo.pib < brasilia.pib) {
        printf("PIB: %s vence\n", brasilia.nome);
        pontosBSB++;
    } else {
        printf("PIB: Empate\n");
    }
    // Resultado final
    printf("\n--- Resultado Final ---\n");
    if (pontosSP > pontosBSB) {
        printf("A cidade vencedora é: %s 🏆\n", saoPaulo.nome);
    } else if (pontosBSB > pontosSP) {
        printf("A cidade vencedora é: %s 🏆\n", brasilia.nome);
    } else {
        printf("Empate geral! As cidades são igualmente poderosas! ⚔️\n");
    }

    return 0;
}
