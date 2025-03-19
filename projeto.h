#define TOTAL_TAREFAS 100  // Define o número máximo de tarefas na lista.

typedef struct {
    int prioridade;       // Prioridade da tarefa (ex: 1 a 5).
    char descricao[300];  // Descrição da tarefa (até 300 caracteres).
    char categoria[100];  // Categoria da tarefa (até 100 caracteres).
} Tarefa;  // Estrutura que representa uma única tarefa.

typedef struct {
    Tarefa tarefas[TOTAL_TAREFAS];  // Vetor que armazena até 100 tarefas.
    int qtd;  // Quantidade atual de tarefas armazenadas.
} ListaDeTarefas;  // Estrutura que representa a lista de tarefas.


// Declaração das funções do sistema de gerenciamento de tarefas:

int criarTarefa(ListaDeTarefas *lt);   // Cria uma nova tarefa e a adiciona à lista.
int deletarTarefa(ListaDeTarefas *lt); // Deleta uma tarefa da lista com base na posição informada.
int listarTarefas(ListaDeTarefas *lt); // Exibe todas as tarefas armazenadas.

int carregarTarefas(ListaDeTarefas *lt, char *nome); // Carrega tarefas de um arquivo.
int salvarTarefas(ListaDeTarefas *lt, char *nome);   // Salva as tarefas em um arquivo.
void exibeMenu();  // Exibe o menu de opções para o usuário.
