# 🧠 Exercício C++: Cadastro de Contatos com `std::map` e `iterator`

## Objetivo

Criar um programa em C++ que simule um sistema de cadastro de contatos utilizando a STL `std::map` e iteradores (`iterator`).

---

## 🧩 Requisitos

- Utilize um `std::map<std::string, std::string>` onde:

  - A **chave** é o nome do contato (ex: `"Maria"`)
  - O **valor** é o telefone (ex: `"123456789"`)
- O programa deve permitir ao usuário:

  1. Adicionar um novo contato
  2. Listar todos os contatos usando um **iterator**
  3. Buscar um contato pelo nome
  4. Atualizar o telefone de um contato existente
  5. Remover um contato
  6. Sair do programa
- Utilize `iterator` explicitamente (`std::map<std::string, std::string>::iterator`) — não use `auto`
- Use `while (true)` com `switch` para o menu principal

---

## 🧪 Exemplo de execução

```
1. Adicionar contato
2. Listar todos
3. Buscar contato
4. Atualizar telefone
5. Remover contato
6. Sair
Opção: 1

Digite o nome: Maria
Digite o telefone: 123456

Contato adicionado!
```

---

## 🛠️ Dicas

- Para adicionar: `contatos[nome] = telefone;`
- Para listar: use um `for` com `iterator`
- Para buscar: use `map.find(nome)`
- Para remover: use `map.erase(iterator)`
- Para atualizar: encontre com `find`, depois modifique o `->second`

---

## ✅ Extra

Se quiser, implemente proteção para nomes duplicados ou entrada inválida.

---

## 📚 Conceitos praticados

- `std::map`
- `iterator`
- `find`, `erase`, `begin`, `end`
- Estrutura de controle com `switch`
- Entrada e saída com `std::cin` e `std::cout`

---

**Boa prática!** 💪
