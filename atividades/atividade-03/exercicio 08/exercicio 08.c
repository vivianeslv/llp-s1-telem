// Conteúdo do arquivo 
//calculadora simples
#include <stdio.h>

int main() {
    int num1, num2;
    
    // Lê os dois números inteiros do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // Calcula e exibe a soma
    printf("Soma: %d\n", num1 + num2);
    
    // Calcula e exibe a subtração
    printf("Subtração: %d\n", num1 - num2);
    
    // Calcula e exibe a multiplicação
    printf("Multiplicação: %d\n", num1 * num2);
    
    // Verifica e exibe a divisão (com verificação de divisão por zero)
    if (num2 != 0) {
        printf("Divisão: %.2f\n", (float)num1 / num2);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }
    
    return 0;
}

//conversão de temperatura
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // Lê a temperatura em Celsius do usuário
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    // Converte para Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    
    // Exibe a temperatura em Fahrenheit
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}


//verificação de número par
#include <stdio.h>

int main() {
    int numero;
    
    // Lê um número inteiro do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
    
    return 0;
}

//cálculo de média ponderada
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    
    // Lê as três notas do usuário
    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &nota3);
    
    // Calcula a média ponderada
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);
    
    // Exibe a média ponderada
    printf("A média ponderada é: %.2f\n", media);
    
    return 0;
}


//troca de valores
#include <stdio.h>

int main() {
    int a, b;
    
    // Lê os dois números inteiros do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    // Exibe os valores antes da troca
    printf("Antes da troca: a = %d, b = %d\n", a, b);
    
    // Troca os valores sem usar uma variável temporária
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Exibe os valores após a troca
    printf("Depois da troca: a = %d, b = %d\n", a, b);
    
    return 0;
}

//
