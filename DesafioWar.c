// Desafio War Novato

#include <stdio.h>
#include <string.h>

#define TOTAL_TERRITORIOS 5

// Struct que representa um território
typedef struct {
    char nome[50];
    char corExercito[20];
    int tropas;
} Territorio;

int main() {
    Territorio mapa[TOTAL_TERRITORIOS];

    printf("=== CADASTRO DE TERRITÓRIOS - WAR (Nível Novato) ===\n\n");

    // Cadastro dos 5 territórios
    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        // Nome
        printf("Nome do território: ");
        fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // Remove o \n

        // Cor do exército
        printf("Cor do exército dominante: ");
        fgets(mapa[i].corExercito, sizeof(mapa[i].corExercito), stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        // Número de tropas
        printf("Número de tropas: ");
        scanf("%d", &mapa[i].tropas);
        getchar(); // Consome o \n que fica no buffer
    }

    // Exibição do estado atual do mapa
    printf("\n\n=== ESTADO ATUAL DO MAPA ===\n");

    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do Exército: %s\n", mapa[i].corExercito);
        printf("Tropas: %d\n", mapa[i].tropas);
    }

    return 0;
}
