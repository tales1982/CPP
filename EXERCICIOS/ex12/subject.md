# 📘️ Cronograma de Estudos – Exame Rank 5 (42)

> Intensivo de 7 dias focado nos módulos de C++ (00 a 04)
>
> Objetivo: Reforçar os conceitos exigidos no exame, treinar sob pressão e simular o ambiente real.

---

## ✅ Dia 1 — C++ Module 00

🌟 **Objetivos:**

* Revisar fundamentos de C++
* Praticar ponteiros, referências e estrutura básica de classes

📜 **Revisar:**

* `namespace`, `typedef`, `iostream`
* `cin`, `cout`, `new`, `delete`
* `pointers`, `references`, `this`
* Declaração de classes, membros públicos/privados

💻 **Exercícios:**

* Criar uma classe `Student` com os atributos `name` e `grade`, usando getters e setters.
* Implementar uma função que recebe um inteiro por ponteiro e por referência e altera seus valores.
* Criar uma função que imprime os dados do estudante formatados.

🧪 **Simulado:**

* Resolver 1 exercício equivalente ao módulo 00 no repositório de simulados.

---

## ✅ Dia 2 — C++ Module 01

🌟 **Objetivos:**

* Aprofundar no uso de ponteiros e memória dinâmica

📜 **Revisar:**

* `new[]`, `delete[]`, `malloc`, `free`
* Passagem por referência e ponteiro
* `const` e escopo de variáveis

💻 **Exercícios:**

* Criar uma função `duplicateString` que aloca dinamicamente uma cópia de uma string (`char *`).
* Criar uma matriz bidimensional de inteiros (`int**`) e preencher com valores. Depois, liberar corretamente toda a memória.
* Criar uma função que receba um `const int &` e imprima seu valor.

🧪 **Simulado:**

* Resolver 1 exercício do simulado do módulo 01

---

## ✅ Dia 3 — C++ Module 02

🌟 **Objetivos:**

* Dominar a Canonical Form e sobrecarga de operadores

📜 **Revisar:**

* Ortodox Canonical Form:
  * Default constructor
  * Copy constructor
  * Assignment operator
  * Destructor
* `operator<<`, `operator==`, `operator+`

💻 **Exercícios:**

* Criar uma classe `Fixed` com atributos privados e implementação completa da forma canônica.
* Implementar `operator+`, `operator-`, `operator==`, `operator<<` para a classe.
* Criar um vetor de objetos `Fixed` e ordenar usando um critério definido pelo operador `>`.

🧪 **Simulado:**

* Resolver 2 exercícios envolvendo operadores e cópia profunda.

---

## ✅ Dia 4 — C++ Module 03

🌟 **Objetivos:**

* Praticar herança e polimorfismo

📜 **Revisar:**

* `virtual`, `override`, `pure virtual`
* `protected` vs `private`
* Herança simples e múltipla

💻 **Exercícios:**

* Criar uma classe abstrata `Animal` com método `makeSound()` puro virtual.
* Criar classes `Dog` e `Cat` que herdam de `Animal` e implementam `makeSound()`.
* Usar ponteiro para `Animal` para armazenar um vetor de `Animal*` e chamar os métodos corretos dinamicamente.

🧪 **Simulado:**

* Resolver 2 exercícios com herança e uso de `virtual`.

---

## ✅ Dia 5 — C++ Module 04

🌟 **Objetivos:**

* Revisar interface, casting e destrutores virtuais

📜 **Revisar:**

* `virtual destructor`
* `dynamic_cast`, `static_cast`
* Uso de ponteiros para base com métodos polimórficos

💻 **Exercícios:**

* Implementar classes base `AMateria` e interfaces como `IMateriaSource` com métodos virtuais puros.
* Criar classes concretas como `Ice`, `Cure`, `Character` e fazer com que interajam via ponteiros para interfaces.
* Usar `dynamic_cast` para identificar tipos em tempo de execução.

🧪 **Simulado:**

* Resolver 2 exercícios com polimorfismo avançado e uso de interfaces.

---

## ✅ Dia 6 — Simulado Completo

🌟 **Objetivos:**

* Testar conhecimento com ambiente semelhante ao exame

🧪 **Prática:**

* Baixar repositórios:
  * [https://github.com/JCluzet/42_EXAM-RANK-05](https://github.com/JCluzet/42_EXAM-RANK-05)
  * [https://github.com/xacaradev/42-Exam-Rank-05](https://github.com/xacaradev/42-Exam-Rank-05)
* Simular 2 horas de prova (sem consulta externa)
* Resolver de 3 a 5 exercícios

📌 **Importante:**

* Use `valgrind`, `-Wall -Wextra -Werror`, e Makefile
* Crie README explicando o raciocínio de cada exercício

---

## ✅ Dia 7 — Revisão + Novo Simulado

🌟 **Objetivos:**

* Corrigir erros, revisar pontos fracos e simular novamente

📜 **Atividades:**

* Rever os exercícios com erro
* Refazer os exercícios com dificuldades
* Realizar novo simulado com tempo cronometrado

---

## 🧐 Dicas Finais

* Crie funções auxiliares (`utils.cpp`) para testes
* Prepare um Makefile simples e funcional
* Estude com calma e mantenha a confiança
* Consulte:
  * [https://cplusplus.com](https://cplusplus.com/)
  * [https://en.cppreference.com](https://en.cppreference.com/)

Boa sorte! 🚀
