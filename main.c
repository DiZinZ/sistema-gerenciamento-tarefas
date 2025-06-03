#include <stdio.h>
#include <locale.h>
// TODAS AS FUNÇÕERS DO PROJETO
void cadastrarTarefa(char tarefas[][4][50], int quantidade) {
    printf("Digite o título da tarefa: ");
    fgets(tarefas[quantidade][0], 50, stdin);
    printf("Digite a descrição da tarefa: ");
    fgets(tarefas[quantidade][1], 50, stdin);
    printf("Digite a prioridade da tarefa: ");
    fgets(tarefas[quantidade][2], 50, stdin);
    printf("Digite o status da tarefa: ");
    fgets(tarefas[quantidade][3], 50, stdin);
}

void listarTarefas(char tarefas[][4][50], int quantidade) {
    if (quantidade == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }
    for (int i = 0; i < quantidade; i++) {
        printf("\nTarefa %d:\n", i);
        printf("Título: %s", tarefas[i][0]);
        printf("Descrição: %s", tarefas[i][1]);
        printf("Prioridade: %s", tarefas[i][2]);
        printf("Status: %s", tarefas[i][3]);
    }
}

void editarTarefa(char tarefas[][4][50], int indice) {
    printf("Editar título: ");
    fgets(tarefas[indice][0], 50, stdin);
    printf("Editar descrição: ");
    fgets(tarefas[indice][1], 50, stdin);
    printf("Editar prioridade: ");
    fgets(tarefas[indice][2], 50, stdin);
    printf("Editar status: ");
    fgets(tarefas[indice][3], 50, stdin);
}
void excluirTarefa(char tarefas[][4][50], int *quantidade, int indice) {
    if (indice < 0 || indice >= *quantidade) {
        printf("Índice inválido!\n");
        return;
    }
    for (int i = indice; i < *quantidade - 1; i++) {
        for (int j = 0; j < 4; j++) {
            strcpy(tarefas[i][j], tarefas[i + 1][j]);
        }
    }
    (*quantidade)--;
    printf("Tarefa excluída com sucesso!\n");
}
void SalvarTarefas(char tarefas[][4][50], int quantidade) {
    FILE *arquivo = fopen("tarefas.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar as tarefas.\n");
        return;
    }
    for (int i = 0; i < quantidade; i++) {
        fprintf(arquivo, "%s%s%s%s", tarefas[i][0], tarefas[i][1], tarefas[i][2], tarefas[i][3]);
    }
    fclose(arquivo);
    printf("Tarefas salvas com sucesso!\n");
}
void carregarTarefas(char tarefas[][4][50], int *quantidade) {
    FILE *arquivo = fopen("tarefas.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum arquivo de tarefas encontrado.\n");
        return;
    }
    while (fgets(tarefas[*quantidade][0], 50, arquivo) != NULL) {
        fgets(tarefas[*quantidade][1], 50, arquivo);
        fgets(tarefas[*quantidade][2], 50, arquivo);
        fgets(tarefas[*quantidade][3], 50, arquivo);
        (*quantidade)++;
    }
    fclose(arquivo);
    printf("Tarefas carregadas com sucesso!\n");
}