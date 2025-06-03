# sistema-gerenciamento-tarefas
Conceitos de vetores, matrizes, manipulação de strings e funções

A função cadastrarTarefa é responsável por receber do usuário as informações de uma nova tarefa, como título, descrição, prioridade e status, armazenando-as na estrutura de dados principal. Já a função listarTarefas exibe todas as tarefas cadastradas até o momento, apresentando seus detalhes de forma clara. Caso não existam tarefas, o sistema informa o usuário adequadamente.

Para situações em que seja necessário modificar os dados de uma tarefa existente, utiliza-se a função editarTarefa, que permite atualizar todas as informações da tarefa selecionada. Caso o usuário deseje remover uma tarefa, a função excluirTarefa é utilizada. Ela realiza a exclusão da tarefa no índice indicado, reorganizando as demais para manter a estrutura correta.

A função SalvarTarefas tem como finalidade garantir a persistência dos dados, salvando todas as tarefas em um arquivo chamado tarefas.txt. Com isso, mesmo após o encerramento do programa, as informações não são perdidas. Complementando esse processo, a função carregarTarefas realiza a leitura desse mesmo arquivo no início do programa, carregando todas as tarefas salvas anteriormente e restaurando o estado do sistema.

Essas funções, em conjunto, permitem ao usuário realizar um controle eficiente de suas tarefas, com recursos básicos de cadastro, listagem, edição, exclusão e salvamento, utilizando os principais conceitos da linguagem C, como vetores, manipulação de strings, arquivos e modularização do código.