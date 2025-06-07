#include <stdio.h>
#include <locale.h>
#include <unistd.h>
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

int registro(int a){
    FILE *quant=fopen("quant.txt","w");
    fprintf(quant, "%d", a);
    fclose(quant);
    return (a);
    //salva a quantidade de tarefas antes do fechamento
}

int quanti(int a){
    if(access("quant.txt",F_OK)){
        return 0;
    }
    else{
        FILE *quant=fopen("quant.txt","r");
        return (fscanf(quant, "%d", &a));
        fclose(quant);
        //lê a quantidade de tarefas salvas
    }
}
int main() {

    char tarefas[100][4][50]; // 100 tarefas, cada uma com 4 campos (título, descrição, prioridade, status)

    int quantidade;

    int opcao;
 
    do {
        quantidade= quanti(quantidade);
        setlocale(LC_ALL, "Portuguese");
        printf("\nSISTEMA DE GERENCIAMENTO DE TAREFAS\n");
        printf("1. Cadastrar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Editar Tarefa\n");
        printf("4. Excluir Tarefa\n");
        printf("5. Salvar Tarefas\n");
        printf("6. Sair\n");

        scanf("%d", &opcao);

        getchar(); // Limpar o buffer do teclado

        switch (opcao) {

            case 1:

                cadastrarTarefa(tarefas, quantidade);

                quantidade++;
                quantidade=registro(quantidade);

                break;

            case 2:

                listarTarefas(tarefas, quantidade);

                break;

            case 3:

                if (quantidade > 0) {

                    int indice;

                    printf("Digite o índice da tarefa a ser editada (0 a %d): ", quantidade - 1);

                    scanf("%d", &indice);

                    if (indice >= 0 && indice < quantidade) {

                        editarTarefa(tarefas, indice);

                    } else {

                        printf("Índice inválido!\n");

                    }

                } else {

                    printf("Nenhuma tarefa cadastrada.\n");

                }

                break;

            case 4:

                if (quantidade > 0) {

                    int indice;

                    printf("Digite o índice da tarefa a ser excluída (0 a %d): ", quantidade - 1);

                    scanf("%d", &indice);

                    excluirTarefa(tarefas, &quantidade, indice);

                } else {

                    printf("Nenhuma tarefa cadastrada.\n");

                }

                break;

            case 5:

                SalvarTarefas(tarefas, quantidade);

                break;

            case 6:
                printf("Saindo...\n");
                break;

            default:

                printf("Opção inválida! Tente novamente.\n");

        }

    } while (opcao != 6);

    return 0;

}
/*
as opções de edição de tarefas estão se sobrepondo
as tarefas salvas não estão sendo puxadas pelo programa após o encerramento
a var quantidade não salva após o encerramento
vou fazer o sistema de compilação amanhã
*/