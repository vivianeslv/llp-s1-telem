#include <stdio.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char descricao[50];
    float valor_unitario;
    int qtd_estoque;
    float valor_estoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int num_produtos = 0;

void mostrar_menu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: ");
}

void entrada_produtos() {
    if (num_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    Produto p;
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");

    printf("Código: ");
    scanf("%d", &p.codigo);
    printf("Descrição: ");
    getchar(); // Limpar o buffer
    fgets(p.descricao, sizeof(p.descricao), stdin);
    
    printf("Valor Unitário: ");
    scanf("%f", &p.valor_unitario);
    
    printf("Qtd Estoque: ");
    scanf("%d", &p.qtd_estoque);
    
    p.valor_estoque = p.valor_unitario * p.qtd_estoque;

    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial): ");
    int op;
    scanf("%d", &op);

    if (op == 1) {
        produtos[num_produtos++] = p;
        printf("Produto gravado com sucesso!\n");
    } else {
        printf("Voltando ao menu inicial...\n");
    }
}

void listar_produtos() {
    printf("----------------------------------------------------------------------\n");
    printf("Lista de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    
    for (int i = 0; i < num_produtos; i++) {
        Produto p = produtos[i];
        printf("Código: %d\n", p.codigo);
        printf("Descrição: %s", p.descricao);
        printf("Valor Unitário: %.2f\n", p.valor_unitario);
        printf("Qtd Estoque: %d\n", p.qtd_estoque);
        printf("Valor Estoque: %.2f\n", p.valor_estoque);
        printf("----------------------------------------------------------------------\n");
    }
}

void valor_total_estoque() {
    float total = 0.0;
    for (int i = 0; i < num_produtos; i++) {
        total += produtos[i].valor_estoque;
    }
    printf("Valor Total do Estoque: %.2f\n", total);
}

int main() {
    int opcao;

    do {
        mostrar_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                entrada_produtos();
                break;
            case 2:
                listar_produtos();
                break;
            case 3:
                valor_total_estoque();
                break;
            case 4:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 4);

    return 0;
}
