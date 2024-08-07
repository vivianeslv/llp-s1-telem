// Conteúdo do arquivo 
/*1. O que é Manipulação de Bits?
Manipulação de bits refere-se ao processo de alterar, verificar e operar diretamente nos bits individuais que compõem dados em uma máquina. Em um nível mais baixo, todos os dados são representados como sequências de bits (0s e 1s), e a manipulação de bits permite aos programadores interagir diretamente com essas representações binárias. Essa técnica é frequentemente usada para tarefas que exigem eficiência máxima e controle detalhado sobre os dados.

2. Qual a Importância da Manipulação de Bits?
A manipulação de bits é importante por várias razões:

Eficiência de Armazenamento e Processamento: Permite otimizar o uso de memória e o tempo de processamento ao operar diretamente em nível de bit. Isso é crucial em sistemas embarcados, onde os recursos são limitados.
Desempenho: Operações bit a bit são geralmente mais rápidas do que operações aritméticas e lógicas de mais alto nível, pois correspondem diretamente às instruções da CPU.
Controle Detalhado: Facilita a criação de algoritmos que requerem controle específico sobre cada bit, como em criptografia, compressão de dados e protocolos de comunicação.
Programação de Hardware: Essencial para interagir com hardware de baixo nível, como drivers de dispositivos e interfaces de hardware.
Manipulação de Flags e Configurações: É comumente usada para definir, limpar e verificar flags em variáveis, permitindo a compactação de múltiplas condições ou configurações em um único número.

3. Quais são as Operações Básicas de Manipulação de Bits?
As operações básicas de manipulação de bits incluem:

AND Bit a Bit (&): Realiza a operação lógica E entre cada par de bits correspondentes.
OR Bit a Bit (|): Realiza a operação lógica OU entre cada par de bits correspondentes.
XOR Bit a Bit (^): Realiza a operação lógica OU exclusivo entre cada par de bits correspondentes.
NOT Bit a Bit (~): Inverte todos os bits de um número.
Deslocamento para a Esquerda (<<): Desloca todos os bits de um número para a esquerda por um número especificado de posições, preenchendo com zeros à direita.
Deslocamento para a Direita (>>): Desloca todos os bits de um número para a direita por um número especificado de posições, preservando o bit de sinal (em caso de números com sinal) ou preenchendo com zeros (em caso de números sem sinal).

4. Exemplo em Linguagem C
Segue exemplo em linguagem C:*/
#include <stdio.h>

// Função para exibir os bits de um número inteiro
void exibirBits(unsigned int num) {
    int i;
    for (i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" "); // Adiciona espaço a cada byte
    }
    printf("\n");
}

int main() {
    unsigned int num = 29; // Exemplo de número
    printf("Número original: %d\n", num);
    
    printf("Bits: ");
    exibirBits(num);
    
    // Operações de manipulação de bits
    unsigned int mask = 0xF0; // Máscara para as quatro bits mais significativas
    
    printf("AND com máscara 0xF0: ");
    exibirBits(num & mask);
    
    printf("OR com máscara 0x0F: ");
    exibirBits(num | 0x0F);
    
    printf("XOR com máscara 0xFF: ");
    exibirBits(num ^ 0xFF);
    
    printf("NOT: ");
    exibirBits(~num);
    
    printf("Deslocamento para a esquerda por 2 bits: ");
    exibirBits(num << 2);
    
    printf("Deslocamento para a direita por 2 bits: ");
    exibirBits(num >> 2);
    
    return 0;
}

/*Explicação do Programa
exibirBits: Função que imprime a representação binária de um número.
Máscaras e Operações:
AND com máscara: Mantém apenas os bits que correspondem aos bits 1 da máscara.
OR com máscara: Define bits para 1 onde a máscara tem bits 1.
XOR com máscara: Inverte os bits onde a máscara tem bits 1.
NOT: Inverte todos os bits.
Deslocamento para a esquerda e direita: Modifica a posição dos bits.*/


