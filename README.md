
# 📝 Sistema de Gerenciamento de Tarefas (C)

Este é um projeto simples de gerenciamento de tarefas escrito em **Linguagem C**, com funcionalidades para cadastrar, listar, editar, excluir, salvar e carregar tarefas. O sistema também registra a quantidade de tarefas salvas em disco.

## 📋 Funcionalidades

- ✅ Cadastrar tarefa  
- 📄 Listar tarefas existentes  
- ✏️ Editar uma tarefa por índice  
- ❌ Excluir tarefa por índice  
- 💾 Salvar tarefas em arquivo `.txt`  
- 🔁 Carregamento automático da quantidade de tarefas com arquivo auxiliar (`quant.txt`)  

---

## 🧠 Estruturas de Controle Utilizadas

Este projeto faz uso das seguintes estruturas de controle da linguagem C:

- 🔁 `do...while`: usado para manter o menu principal em execução até o usuário decidir sair  
- 🔀 `if...else`: utilizado para decisões simples, como validação de entrada e confirmação de operações  
- 🧭 `switch...case`: usado para selecionar a opção escolhida no menu principal

---

## ▶️ Como executar diretamente (Windows)

Se você já possui o executável `sistema-gerenciamento-tarefas.exe`:

1. Baixe o arquivo `sistema-gerenciamento-tarefas.exe`  
2. Coloque-o em uma pasta de sua preferência  
3. Dê **duplo clique** no arquivo para abrir o programa  
   - ou abra o terminal (Prompt de Comando) e navegue até a pasta com:
     ```bash
     cd caminho\da\pasta
     sistema-gerenciamento-tarefas.exe
     ```

> 💡 *Certifique-se de que o executável está na mesma pasta onde os arquivos `tarefas.txt` e `quant.txt` serão criados ou já existem, para que o programa funcione corretamente.*

---

## ⚙️ Como compilar e executar no VS Code

### Pré-requisitos

1. Ter o **Visual Studio Code** instalado  
2. Ter um **compilador C** configurado, como:  
   - **MinGW** (Windows)  
   - **GCC** ou **Clang** (Linux/macOS)  
3. Ter a **extensão C/C++** da Microsoft instalada no VS Code  

---

### Etapas

1. Abra o **VS Code** e crie um novo arquivo chamado `main.c`  
2. Copie o código-fonte do projeto para este arquivo  
3. Abra o **terminal integrado** do VS Code (atalho: `Ctrl + ``)  
4. Compile o código com:

   ```bash
   gcc main.c -o tarefas
   ```

   ou

   ```bash
   clang main.c -o tarefas
   ```

5. Execute o programa:

   - **Windows**:

     ```bash
     .\tarefas
     ```

   - **Linux/macOS**:

     ```bash
     ./tarefas
     ```

---

## 🗃️ Estrutura de Arquivos

- `main.c`: Código-fonte principal  
- `tarefas.txt`: Arquivo onde as tarefas são salvas  
- `quant.txt`: Arquivo auxiliar que armazena a quantidade de tarefas salvas  

---

## 🛠️ Problemas conhecidos (Resolvidos)

- [✅] As edições feitas em tarefas podem sobrescrever dados incorretamente  
- [✅] As tarefas salvas não são carregadas corretamente após reinício do programa  
- [✅] A variável `quantidade` não mantém o valor salvo após encerrar o programa (parcialmente resolvido com `quant.txt`)  

Esses pontos ainda estão em desenvolvimento.

---

## 👤 Autor

Desenvolvido por Dillan Fernandes e Samuel Larroque.
