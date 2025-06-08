
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
