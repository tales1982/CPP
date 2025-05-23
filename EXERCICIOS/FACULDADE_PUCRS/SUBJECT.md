# PUCRS  
**Faculdade de Informática**  
**Programação em C/C++**  

## Exercícios sobre CLASSES em C++  
#
# 1. Classe Pessoa  
Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura. Crie os métodos públicos necessários para `sets` e `gets` e também um método para imprimir os dados de uma pessoa.  

---  
#
# 2. Classe Agenda  
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
#
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
#
# 4. Classe Relógio
Crie uma classe Relogio para armazenar horário (hora, minuto, segundo).

### Métodos:

- setHora: Define o horário.

- getHora: Retorna o horário atual (via referência).

- avancarHorario: Avança o horário em 1 segundo (atualizando minutos/horas se necessário).
#
# 5. Definir uma classe que represente um círculo.

### Esta classe deve possuir métodos Privados para:
- calcular a área do círculo;
- calcular a distância entre os centros de 2 círculos;
- calcular a circunferência do círculo.
### E métodos Públicos para:
- definir o raio do círculo, dado um número real;
- aumentar o raio do círculo, dado um percentual de aumento;
- definir o centro do círculo, dada uma posição (X,Y);
- imprimir o valor do raio;
- imprimir o centro do círculo.
- imprimir a área do círculo.
### Criar um programa principal para testar a classe.
#
# 6. Classe Televisão
### Implemente uma TV com:

- Controle de volume (aumentar/diminuir em 1 unidade).

- Controle de canal (aumentar/diminuir ou trocar para um canal específico).

- Métodos para consultar volume e canal.

### No programa principal:

- Crie uma TV, troque de canal e ajuste o volume.

- Exiba os valores finais.
#
# 7. Classe Condicionador de Ar
### Implemente um condicionador com:

- 10 níveis de potência (cada unidade diminui 1.8°C).

- Variação de temperatura: [0°C - 18°C].
#
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
#
# 9. Sistema de Notificações
## Enunciado:
- Crie uma classe base chamada Notificacao, que tem uma função virtual chamada enviar(). Essa função deverá ser sobrescrita em classes derivadas como Email, SMS e Push, que representam diferentes formas de notificação.
## ✅ Requisitos:
1. Crie uma classe base Notificacao com a função virtual enviar() const.

2. Crie três classes derivadas:

- Email

- SMS

- Push

3. Cada classe derivada deve sobrescrever a função enviar() com uma mensagem personalizada.

4. No main(), crie um array (ou vetor) de ponteiros para Notificacao contendo instâncias de cada tipo, e chame enviar() para todas, demonstrando o polimorfismo.

```basch
Enviando notificação por E-MAIL: "Você tem um novo e-mail!"
Enviando notificação por SMS: "Nova mensagem recebida!"
Enviando notificação por PUSH: "Você recebeu uma notificação push!"
```

#
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