//1. Atividade com if
#include <stdio.h>

int main() {
    int numero;
    
    // Lê o número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Verifica se o número é positivo, negativo ou zero
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }
    
    return 0;
}

// 2. Atividade com if else
#include <stdio.h>

int main() {
    int ano;
    
    // Lê o ano do usuário
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }
    
    return 0;
}

//3. Atividade com switch
#include <stdio.h>

int main() {
    int dia;
    
    // Lê o número do dia da semana
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);
    
    // Usa a estrutura switch para determinar o dia da semana
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido! Digite um número de 1 a 7.\n");
            break;
    }
    
    return 0;
}

//4. Atividade com Operador Ternário
#include <stdio.h>

int main() {
    int a, b;
    
    // Lê os dois números do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    // Usa o operador ternário para encontrar e exibir o maior número
    int maior = (a > b) ? a : b;
    printf("O maior número é %d.\n", maior);
    
    return 0;
}

