#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256

int main() {
    FILE *file;
    char line[MAX_LINE_LENGTH];
    char filename[] = "arquivo.txt";

    // Passo 1 e 2: Criar um arquivo e alimentar com dados do teclado
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return EXIT_FAILURE;
    }

    printf("Digite linhas de texto (digite 'sair' para encerrar):\n");
    while (1) {
        printf(">> ");
        fgets(line, sizeof(line), stdin);

        // Remover a nova linha no final da string, se houver
        line[strcspn(line, "\n")] = 0;

        if (strcmp(line, "sair") == 0) {
            break;
        }

        // Gravar a string lida no arquivo
        fprintf(file, "%s\n", line);
    }

    // Passo 5: Fechar o arquivo
    fclose(file);

    // Passo 6: Abrir o arquivo no modo de leitura
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo para leitura");
        return EXIT_FAILURE;
    }

    // Passo 7: Ler e mostrar o conteúdo do arquivo
    printf("\nConteúdo do arquivo:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Passo 8: Fechar o arquivo
    fclose(file);

    return EXIT_SUCCESS;
}
