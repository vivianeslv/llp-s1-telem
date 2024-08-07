// Array Unidimensional
#include <stdio.h>

int main() {
    int numeros[5]; // Array para armazenar 5 números
    int soma = 0; // Variável para armazenar a soma

    // Lê 5 números do usuário e armazena no array
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calcula a soma dos números
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    // Exibe a soma
    printf("A soma dos números é: %d\n", soma);

    return 0;
}

//2. Array Multidimensional
#include <stdio.h>

int main() {
    int matriz[3][3]; // Matriz 3x3
    int somaDiagonalPrincipal = 0; // Variável para armazenar a soma dos elementos da diagonal principal

    // Lê os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a soma dos elementos da diagonal principal
    for (int i = 0; i < 3; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }

    // Exibe a soma da diagonal principal
    printf("A soma dos elementos da diagonal principal é: %d\n", somaDiagonalPrincipal);

    return 0;
}

