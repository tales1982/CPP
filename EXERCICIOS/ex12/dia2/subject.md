# Dia 2 — C++ Módulo 01 (Descrição Aprimorada)

## 🌟 Objetivos Gerais

- Aprofundar o uso de **ponteiros** e **memória dinâmica** em C++.
- Explorar diferenças entre alocadores (`new[]`/`delete[]` vs `malloc`/`free`).
- Entender **passagem por referência** e o uso de `const` para segurança de dados.
- Praticar escopo de variáveis e gerenciamento correto de recursos.

---

## 📜 Revisão de Conceitos

1. **Gerenciamento de memória:**
   - `new[]` e `delete[]`: alocação e liberação de arrays de objetos em C++.
   - `malloc` e `free`: funções da biblioteca C, sem chamar construtores/destrutores.
2. **Ponteiros vs Referências:**
   - Diferenças de sintaxe e uso.
   - Como passar variáveis por **referência** (`&`) ou por **ponteiro** (`*`).
3. **`const` e Escopo:**
   - Protegendo dados imutáveis com `const`.
   - Escopo de variáveis locais, estáticas e globais.

---

## 💻 Exercícios Detalhados

### 1. DuplicateString — Cópia de uma string em memória dinâmica

**Descrição:**
Crie uma função **`duplicateString`** que recebe um ponteiro para uma sequência de caracteres (`const char*`) e retorna uma nova cópia dessa string alocada dinamicamente.

**Detalhamento:**

- **Prototipo:**
  ```cpp
  // Retorna nullptr se src for nullptr ou se falhar a alocação.
  char* duplicateString(const char* src);
  ```
- **Fluxo interno:**
  1. Verificar se `src` é nulo → retornar `nullptr`.
  2. Determinar comprimento da string original (`strlen(src) + 1`).
  3. Usar `new char[length]` para alocar buffer do tamanho exato.
  4. Copiar manualmente cada caractere, incluindo o terminador `'�'`.
  5. Retornar ponteiro para o novo buffer.

**Pontos de atenção:**

- **Exceções de `new`:**
  - Por padrão, `new[]` lança `std::bad_alloc`. Decidir se captura ou deixa propagar.
- **Liberando memória:**
  - Deixar claro que o chamador deve usar `delete[]` para evitar vazamentos.
- **Casos de erro:**
  - `src == nullptr`, falha na alocação, strings muito longas, overflow de tamanho.

---

### 2. Matriz Bidimensional Dinâmica

**Descrição:**
Implemente a criação, uso e liberação de uma matriz de inteiros de tamanho arbitrário.

**Etapas detalhadas:**

1. **Leitura de dimensões:**
   - Solicitar `rows` e `cols` (inteiros > 0); validar entrada.
2. **Alocação da estrutura:**
   - Alocar vetor de ponteiros: `int** matrix = new int*[rows];`
   - Para cada linha `i`, alocar `matrix[i] = new int[cols];`
   - Tratar possíveis falhas (tentar desalocar o que já foi alocado).
3. **Preenchimento:**
   - Definir padrão (e.g., `matrix[i][j] = i * cols + j;` ou valores randômicos).
   - Demonstrar iteração usando índices (`i`, `j`) e aritmética de ponteiros (`*(matrix[i] + j)`).
4. **Exibição:**
   - Imprimir cada linha em uma nova linha, valores separados por espaço/tab.
   - Formatação para legibilidade: largura fixa ou alinhamento.
5. **Desalocação correta:**
   - Iterar de 0 a `rows-1` chamando `delete[] matrix[i];`
   - Após, chamar `delete[] matrix;`

**Boas práticas:**

- Verificar nulos antes de desalocar.
- Evitar vazamentos em alocações parciais (ex: falha na 3ª linha).
- Comentar cada passo para reforçar compreensão.

---

### 3. Função com Referência Constante

**Descrição:**
Desenvolva **`printValue`**, que recebe um inteiro por **referência constante** e o imprime.

**Especificações:**

- **Protótipo:**
  ```cpp
  void printValue(const int& value);
  ```
- **Comportamento:**
  - Não modifica `value`.
  - Imprime com `std::cout << "Valor: " << value << std::endl;`

**Aprendizados chave:**

- Passar por referência evita cópia de grandes objetos (nesse caso, apenas demonstra).
- `const` garante que a função não altere o argumento, reforçando segurança de código.
- Tentativa de `value = 10;` resulta em erro de compilação, ilustrando proteção do compilador.

---

### 4. Simulado do Módulo 01 — Vetor Sequencial

**Descrição:**
A partir do material de simulado, descreva detalhadamente a criação de um vetor dinâmico de tamanho `n`.

**Enunciado ampliado:**

> Implemente `createSequentialArray`:
>
> 1. Recebe um inteiro `n > 0`.
> 2. Aloca dinamicamente um vetor de `n` inteiros com `new int[n]`.
> 3. Preenche de `1` a `n` em ordem crescente.
> 4. Retorna o ponteiro para esse vetor.
>
> No `main`:
>
> - Ler `n`, validar `n > 0`.
> - Chamar `createSequentialArray`.
> - Exibir elementos formatados.
> - Liberação com `delete[]`.

**Detalhamentos adicionais:**

- Verificação de `n` antes da alocação.
- Tratamento de exceções de alocação.
- Gerenciamento de recursos e comentários claros sobre cada etapa.

---

> **Recomendações finais:**
>
> - Comentários claros explicando cada linha crítica.
> - Testar casos extremos (strings vazias, matrizes 1×1, `n = 0` inválido).
> - Discutir trade-offs entre usar `new[]` vs `malloc` em C++ moderno.
>
