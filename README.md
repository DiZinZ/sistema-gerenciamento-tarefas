
# 📋 Sistema de Gerenciamento de Tarefas em C

## 📌 Descrição

Este é um programa simples de gerenciamento de tarefas desenvolvido em linguagem C. Ele permite ao usuário:

- Cadastrar novas tarefas;
- Listar todas as tarefas cadastradas;
- Editar tarefas existentes;
- Excluir tarefas;
- Salvar as tarefas em um arquivo (`tarefas.txt`);
- Carregar tarefas salvas ao iniciar o programa.

As tarefas são armazenadas em uma matriz tridimensional e organizadas com os seguintes campos:

- Título  
- Descrição  
- Prioridade  
- Status  

---

## ▶️ Como Compilar e Executar

### ✔️ Requisitos
- Um compilador C (como `gcc`)
- Terminal ou prompt de comando

### 🔧 Compilação

No terminal, use o seguinte comando para compilar:

```bash
gcc -o tarefas tarefas.c
```

### 🚀 Execução

Após a compilação, execute o programa com:

```bash
./tarefas
```

---

## 🗂️ Arquivo de Tarefas

O programa salva e carrega as tarefas de um arquivo chamado `tarefas.txt`, localizado no mesmo diretório do executável.

---

## 🧾 Commits

### ✅ Commit 1 - Implementação das Funções Principais

```bash
git commit -m "Implementa funções principais do sistema de tarefas (cadastrar, listar, editar, excluir, salvar e carregar)"
```

**Descrição:**
> Este commit inclui a implementação de todas as funções principais do sistema:
> - `cadastrarTarefa`
> - `listarTarefas`
> - `editarTarefa`
> - `excluirTarefa`
> - `SalvarTarefas`
> - `carregarTarefas`

Essas funções são responsáveis por toda a lógica de manipulação de tarefas, incluindo entrada e saída com arquivos (`tarefas.txt`).

---

### ✅ Commit 2 - Implementação do Menu e Função `main()`

```bash
git commit -m "Adiciona função main com menu interativo e integração com funções de tarefas"
```

**Descrição:**
> Este commit adiciona a função `main()` que apresenta um menu interativo ao usuário. Ele conecta todas as funcionalidades previamente criadas, permitindo que o usuário:
> - Selecione opções do menu;
> - Execute ações como cadastrar, listar, editar, excluir e salvar tarefas;
> - Carregue as tarefas automaticamente ao iniciar o programa;
> - Encerre o programa de forma segura.
