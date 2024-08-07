// 1. Atividade com while
#include <stdio.h>

int main() {
    int i = 1; // Começa com 1
    
    // Loop enquanto i for menor ou igual a 10
    while (i <= 10) {
        if (i % 2 == 0) { // Verifica se o número é par
            printf("%d\n", i);
        }
        i++; // Incrementa o número
    }
    
    return 0;
}

//2. Atividade com 'do while'
#include <stdio.h>

int main() {
    int numeroCorreto = 42; // Número que o usuário deve adivinhar
    int tentativa;
    
    do {
        // Solicita uma tentativa ao usuário
        printf("Adivinhe o número entre 1 e 100 (ou digite -1 para sair): ");
        scanf("%d", &tentativa);
        
        if (tentativa == -1) {
            printf("Você saiu do jogo.\n");
            break; // Sai do loop se o usuário deseja sair
        }
        
        if (tentativa < numeroCorreto) {
            printf("O número é maior. Tente novamente.\n");
        } else if (tentativa > numeroCorreto) {
            printf("O número é menor. Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número.\n");
        }
        
    } while (tentativa != numeroCorreto);
    
    return 0;
}

//3. Atividade com 'for'
#include <stdio.h>

int main() {
    int soma = 0;
    
    // Loop para somar os primeiros 10 números inteiros positivos
    for (int i = 1; i <= 10; i++) {
        soma += i; // Adiciona o número à soma
    }
    
    printf("A soma dos primeiros 10 números inteiros positivos é %d.\n", soma);
    
    return 0;
}

