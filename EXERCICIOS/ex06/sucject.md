# 🧠 Exercício Avançado: Inversão de Array com Ponteiros
## Objetivo:
Aprofundar o entendimento de ponteiros manipulando arrays e realizando operações sem usar índices tradicionais ([]).

## ✅ Enunciado
- Crie um programa que:

Solicite ao usuário o tamanho de um array de inteiros.

Aloque dinamicamente esse array usando ponteiros.

Peça ao usuário para preencher os elementos do array.

Inverta a ordem dos elementos usando apenas aritmética de ponteiros (sem usar o operador []).

Mostre o array invertido no final.

Requisitos:

Use somente ponteiros para acessar e modificar os elementos.

Não utilize [] em nenhuma parte do programa.

Libere a memória alocada dinamicamente ao final.

## 💡 Dicas
Lembre-se que *(ptr + i) é equivalente a array[i].

Para inverter o array, você pode usar dois ponteiros: um no início e outro no fim, trocando os valores até que se encontrem.

Use new e delete para alocação dinâmica.