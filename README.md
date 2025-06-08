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

## ⚙️ Como compilar e executar no VS Code

### Pré-requisitos

1. Ter o **Visual Studio Code** instalado
2. Ter um **compilador C** configurado, como:
   - **MinGW** (Windows)
   - **MSYS2** (Windows)
   - **GCC** ou **Clang** (Linux/macOS)
3. Ter a **extensão C/C++** da Microsoft instalada no VS Code

---

### Etapas

1. Abra o **VS Code** e crie um novo arquivo chamado `tarefas.c`
2. Copie o código-fonte do projeto para este arquivo
3. Abra o **terminal integrado** do VS Code (atalho: `Ctrl + ``)
4. Compile o código com:

   ```bash
   gcc tarefas.c -o tarefas
   ```

   ou

   ```bash
   clang tarefas.c -o tarefas
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

- `tarefas.c`: Código-fonte principal
- `tarefas.txt`: Arquivo onde as tarefas são salvas
- `quant.txt`: Arquivo auxiliar que armazena a quantidade de tarefas salvas

---

## 🛠️ Problemas conhecidos

- [ ] As edições feitas em tarefas podem sobrescrever dados incorretamente
- [ ] As tarefas salvas não são carregadas corretamente após reinício do programa
- [ ] A variável `quantidade` não mantém o valor salvo após encerrar o programa (parcialmente resolvido com `quant.txt`)

Esses pontos ainda estão em desenvolvimento.

---

## 👤 Autor

Desenvolvido por Dillan Fernandes e Samuel Larroque.
