# 💡 Exercício: MiniSpan
- Objetivo: Criar um programa que receba 3 números inteiros, armazene-os e calcule:

- A menor diferença entre dois valores consecutivos após ordenar

- A maior diferença entre o menor e o maior valor

## ✅ Requisitos:
-Criar uma classe MiniSpan com:

- Um vetor de int

- Um método addNumber(int)

- Um método shortestSpan()

- Um método longestSpan()

- Criar um main.cpp que:

- Adicione 3 números manualmente

- Teste o caso de erro (menos de 2 números)

## 📁 Estrutura sugerida:
```bash
MiniSpan.hpp
MiniSpan.cpp
main.cpp
Makefile
```
## 🧪 Exemplo de saída esperada:
```bash
=== MiniSpan Test ===
Numbers: 3, 8, 15
Shortest span: 5
Longest span : 12
```
```bash
=== Error Test ===
Caught error: Not enough numbers to calculate span
```
## 🧠 Dica extra:
- Se quiser, você pode até usar std::vector<int> como no exercício do Span original.

- Não precisa lidar com 10.000 números — 3 a 5 são suficientes.