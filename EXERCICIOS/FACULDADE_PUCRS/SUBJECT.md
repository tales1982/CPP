# PUCRS  
**Faculdade de Informática**  
**Programação em C/C++**  

## Exercícios sobre CLASSES em C++  

### 1. Classe Pessoa  
Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura. Crie os métodos públicos necessários para `sets` e `gets` e também um método para imprimir os dados de uma pessoa.  

---  

### 2. Classe Agenda  
Crie uma classe `Agenda` que armazena 10 pessoas e seja capaz de operações como:  

```cpp
class Agenda {
    Pessoa Povo[10];
public:
    void armazenaPessoa(string nome, int idade, float altura);
    void removePessoa(string nome);
    int buscaPessoa(string nome); // informa em que posição da agenda está a pessoa
    void imprimePovo(); // imprime todos os dados de todas as pessoas da agenda
    void imprimePessoa(int i); // imprime os dados da pessoa que está na posição 'i' da agenda
};

- Teste sua agenda com o programa abaixo:
```cpp
#include <iostream>
#include "Agenda.h"

int main() {
    char linha[] = "------------------------------------------------\n";
    Agenda A;

    A.armazenaPessoa("Abel", 22, 1.78);
    A.armazenaPessoa("Tiago", 20, 1.80);
    A.imprimePovo();
    cout << linha;

    int posicao = A.buscaPessoa("Tiago");
    if (posicao > 0)
        A.imprimePessoa(posicao);
    cout << linha;

    A.removePessoa("Tiago");
    A.imprimePovo();
    cout << linha;

    return 0;
}
```

# 3. Classe Elevador
Crie uma classe Elevador para armazenar informações de um elevador dentro de um prédio.

### Atributos:

- Andar atual (0 = térreo)

- Total de andares no prédio (excluindo o térreo)

- Capacidade do elevador

- Quantidade de pessoas presentes

### Métodos:

- inicializa: Define capacidade e total de andares (inicia no térreo e vazio).

- entra: Adiciona uma pessoa (se houver espaço).

- sai: Remove uma pessoa (se houver alguém).

- sobe: Sobe um andar (não sobe se já estiver no último).

- desce: Desce um andar (não desce se já estiver no térreo).

- get...: Métodos para obter os dados armazenados.

# 4. Classe Relógio
Crie uma classe Relogio para armazenar horário (hora, minuto, segundo).

### Métodos:

- setHora: Define o horário.

- getHora: Retorna o horário atual (via referência).

- avancarHorario: Avança o horário em 1 segundo (atualizando minutos/horas se necessário).

# 5. Classe Círculo
Defina uma classe Circulo com:

### Métodos Privados:

- Calcular área.

- Calcular distância entre centros de 2 círculos.

- Calcular circunferência.

### Métodos Públicos:

- Definir raio.

- Aumentar raio (por percentual).

- Definir centro (X, Y).

- Imprimir raio, centro e área.

*** Crie um programa principal para testar a classe. ***

# 6. Classe Televisão
### Implemente uma TV com:

- Controle de volume (aumentar/diminuir em 1 unidade).

- Controle de canal (aumentar/diminuir ou trocar para um canal específico).

- Métodos para consultar volume e canal.

### No programa principal:

- Crie uma TV, troque de canal e ajuste o volume.

- Exiba os valores finais.

# 7. Classe Condicionador de Ar
### Implemente um condicionador com:

- 10 níveis de potência (cada unidade diminui 1.8°C).

- Variação de temperatura: [0°C - 18°C].

# 8. Classe Carro
## Implemente um carro com:

- Tanque (máx. 50L, consumo de 15 km/L).

## Métodos:

- Abastecer.

- Mover (em km).

- Retornar combustível e distância percorrida.

### No programa principal:

- Crie 2 carros (abasteça 20L e 30L).

- Movimente (200 km e 400 km).

- Exiba distância e combustível restante.

# 9. Classe Lista de Inteiros
## Defina uma classe que represente uma lista encadeada usando vetores.

###Atributos:

- Vetor Dados[TAM] (tamanho 10).

- Vetor Aux[TAM] (indica próximo elemento ou -1/-2).

### Métodos:

- insereDado: Insere um inteiro (retorna 1 se sucesso, 0 se falha).

- removeDado: Remove um valor (retorna 1 se sucesso, 0 se falha).

- imprimeLista: Exibe os dados na ordem de inserção.

### Exemplo de impressão:
```cpp
Lista: Inicio: 3  
9(3), 10(0), 11(5), 1(1), 34(6)  
```

# 10. Classe Veículo (Composição)
## Implemente um veículo composto por:

- Motor (potência, consumo, tanque).

- Tanque (capacidade, combustível atual).

- 4 Pneus (pressão em lb).

## Funcionamento:

- Se >1 pneu com pressão <20 lb, consumo aumenta 30%.

- Movimento consome combustível proporcional à distância.

### No programa principal:

1. Crie um veículo (71 hp, 12 km/L, tanque 50L, pneus 27/23 lb).

2. Abasteça 30L.

3. Exiba informações dos componentes.

4. Avance 300 km.

5. Reduza pressão de um pneu para 17 lb.

6. Avance 100 km.

7. Reduza pressão de outro pneu para 18 lb.

8. Abasteça +10L.

9. Avance 200 km.

### A cada movimento, exiba distância e combustível restante.