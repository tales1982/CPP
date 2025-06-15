
# 🦁 Exercício de Programação Orientada a Objetos em C++

## 🎯 Objetivo

Implementar uma pequena hierarquia de classes utilizando conceitos de **Programação Orientada a Objetos (POO)** em C++, como **herança**, **polimorfismo**, **classe abstrata** e **gerenciamento de memória dinâmica**. A aplicação simula um zoológico que armazena animais e emite seus sons.

---

## 🧩 Parte 1 — Classe Abstrata `Animal`

### ✅ O que fazer

- Criar uma classe abstrata chamada `Animal`.
- Adicionar um atributo `name` do tipo `std::string`.
- Criar um construtor que receba esse nome.
- Criar um destrutor virtual.
- Criar uma função virtual pura:
  ```cpp
  virtual void makeSound() const = 0;
  ```

### 🧠 Por quê?

Isso permite que você defina um **contrato** que as classes derivadas devem seguir. Como `makeSound()` é puro, a classe `Animal` **não pode ser instanciada** diretamente.

---

## 🐾 Parte 2 — Classes Derivadas: `Dog`, `Cat`, `Cow`

### ✅ O que fazer

- Criar três classes que herdam de `Animal`: `Dog`, `Cat`, `Cow`.
- Cada classe deve:
  - Ter um construtor que recebe o nome do animal.
  - Chamar o construtor da base (`Animal`) para inicializar o `name`.
  - Implementar `makeSound()` com os seguintes sons:
    - `Dog`: `"Au au!"`
    - `Cat`: `"Miau!"`
    - `Cow`: `"Muuu!"`

### 🧠 Por quê?

Cada classe representa um tipo específico de animal. Elas herdam o comportamento geral de `Animal`, mas **especializam** o método `makeSound()` — isso é **polimorfismo**.

---

## 🏛️ Parte 3 — Classe `Zoo`

### ✅ O que fazer

- Criar uma classe `Zoo`.
- Utilizar `std::map<std::string, Animal*>` para armazenar os animais, onde:
  - A chave é o nome do animal.
  - O valor é um ponteiro para `Animal` (pode apontar para `Dog`, `Cat`, `Cow`, etc).

### Métodos obrigatórios:

| Método                     | Descrição                                                 |
| --------------------------- | ----------------------------------------------------------- |
| `addAnimal(name, animal)` | Adiciona um novo animal ao mapa.                            |
| `makeSound(name)`         | Faz o animal com o nome fornecido emitir seu som.           |
| `makeAllSounds()`         | Todos os animais emitem seus respectivos sons.              |
| `~Zoo()` (destrutor)      | Libera todos os ponteiros de memória alocados com `new`. |

### 🧠 Por quê?

Essa classe centraliza o controle dos animais e pratica:

- Uso de **containers STL** (`std::map`)
- Gerenciamento de **ponteiros polimórficos**
- Liberação correta de memória com `delete`

---

## 🧪 Parte 4 — Testes no `main()`

### ✅ O que fazer

- Criar uma instância de `Zoo`.
- Adicionar alguns animais com `addAnimal()`, como:
  - `"Rex"` → `Dog`
  - `"Mimi"` → `Cat`
  - `"Mimosa"` → `Cow`
- Testar:
  - `makeSound("Rex")` → Deve imprimir `"Au au!"`
  - `makeAllSounds()` → Todos os animais emitem seus sons
- Encerrar o programa e deixar o destrutor de `Zoo` cuidar da memória

---

## 📚 Conceitos Praticados

| Conceito                  | Aplicação no Exercício                            |
| ------------------------- | ---------------------------------------------------- |
| Herança                  | `Dog`, `Cat`, `Cow` herdam de `Animal`       |
| Classe Abstrata           | `Animal` possui método virtual puro               |
| Polimorfismo              | `makeSound()` se comporta diferente em cada classe |
| Containers STL            | `std::map` no `Zoo` para armazenar animais       |
| Ponteiros polimórficos   | `Animal* animal = new Dog(...)`                    |
| Gerenciamento de Memória | Uso de `new` e `delete` corretamente             |

---

## 🧠 Desafios Extras (opcionais)

- Listar todos os nomes dos animais armazenados
- Remover um animal pelo nome
- Salvar os nomes e tipos dos animais em um arquivo `.txt`
- Criar novos animais como `Lion`, `Parrot`, etc.
- Usar `std::unique_ptr<Animal>` no lugar de `Animal*` (caso já conheça smart pointers)

---
