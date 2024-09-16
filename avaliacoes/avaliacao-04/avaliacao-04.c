#include <stdio.h>

typedef struct {
    int matricula;
    char nome[20];
    float N1;
    float N2;
    float Media;
    int Faltas;
    char Reprovado_SN;
} Aluno;

void verifica_aprovacao(Aluno alunos[], int num_alunos) {
    for (int i = 0; i < num_alunos; i++) {
        // Verifica se o aluno tem mais de 20 faltas
        if (alunos[i].Faltas >= 20) {
            alunos[i].Reprovado_SN = 'S';
        } else {
            // Calcula a média
            alunos[i].Media = (alunos[i].N1 + alunos[i].N2) / 2;
            // Verifica se a média é menor que 6.0
            if (alunos[i].Media < 6.0) {
                alunos[i].Reprovado_SN = 'N'; // Não reprovado por falta, mas pode ser reprovado por média
            } else {
                alunos[i].Reprovado_SN = 'N'; // Aprovado, não reprovado
            }
        }
    }
}

void mostra_aprovacao(Aluno alunos[], int num_alunos) {
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("N1: %.2f\n", alunos[i].N1);
        printf("N2: %.2f\n", alunos[i].N2);
        printf("Faltas: %d\n", alunos[i].Faltas);
        printf("Média: %.2f\n", alunos[i].Media);

        // Mensagens de aprovação ou reprovação
        if (alunos[i].Faltas >= 20) {
            printf("REPROVADO POR FALTA\n");
        } else if (alunos[i].Media < 6.0) {
            printf("REPROVADO POR MEDIA\n");
        } else {
            printf("APROVADO\n");
        }
        printf("\n");
    }
}

int main() {
    Aluno alunos[5] = {
        {1, "João", 8.5, 9.0, 0.0, 25, ' '},
        {2, "Maria", 9.0, 8.0, 0.0, 1, ' '},
        {3, "Pedro", 7.5, 8.5, 0.0, 3, ' '},
        {4, "Ana", 9.5, 9.5, 0.0, 20, ' '},
        {5, "Luiz", 8.0, 7.0, 0.0, 4, ' '}
    };

    // Verifica a aprovação dos alunos
    verifica_aprovacao(alunos, 5);

    // Mostra a situação de cada aluno
    mostra_aprovacao(alunos, 5);

    return 0;
}
