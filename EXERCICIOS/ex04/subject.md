🌌 Proposta de Exercício:
"Cidadania Intergaláctica — Formulários de Imigração"
📝 Enunciado
Agora que você já domina a criação de formulários, crie um sistema de processamento intergaláctico de pedidos de imigração.

Você deverá criar uma classe base abstrata chamada FormularioBase, e 3 formulários concretos que herdam dela.
Os formulários devem ser assinados e só podem ser executados por Burocratas com uma nota (grau) suficientemente alta.
Cada formulário deve realizar uma ação específica e verificável.

📁 Entrega:
Diretório: ex03/
Arquivos esperados:

Makefile

main.cpp

Burocrata.[hpp|cpp]

FormularioBase.[hpp|cpp]

FormularioVisto.[hpp|cpp]

RegistroAlienigena.[hpp|cpp]

TransportePlanetario.[hpp|cpp]

✅ Critérios obrigatórios
A classe FormularioBase deve ser abstrata.

Os atributos devem ser privados, com acesso por meio de getters.

A execução deve:

Verificar se o formulário foi assinado.

Verificar se o Burocrata tem grau suficiente.

Lançar exceções se algo estiver errado.

A classe Burocrata deve conter o método:

```cpp
void executarFormulario(const FormularioBase &formulario);
```
📄 Formulários a implementar:
1. 🛂 FormularioVisto
Grau necessário para assinar: 120

Grau necessário para executar: 110

Ação: imprime no terminal:

```php-template
Visto concedido para <alvo> na colônia de Marte.
```
2. 👽 RegistroAlienigena
Grau necessário para assinar: 90

Grau necessário para executar: 70

Ação: cria um arquivo chamado <alvo>_registro.txt contendo:

```php-template
Bem-vindo, <alvo>!
```
Você está agora registrado como um residente alienígena intergaláctico oficial.
3. 🚀 TransportePlanetario
Grau necessário para assinar: 50

Grau necessário para executar: 25

Ação: imprime no terminal:

```php-template
<alvo> foi transportado com sucesso para o planeta Vega-5!
```
🧪 Testes esperados
No seu main.cpp, implemente testes que:

Criam diferentes formulários com alvos diversos.

Utilizam Burocratas com níveis de grau variados.

Testam a assinatura e execução de cada formulário.

Testam erros como:

Tentar executar sem assinar

Tentar executar com grau insuficiente

🚫 Restrições
❌ Não usar for ou auto

⛔ Máximo de 5 funções por arquivo

📏 Máximo de 25 linhas por função

💡 Usar apenas o padrão C++98 (-std=c++98)

Se quiser, posso montar agora com você o FormularioBase.hpp em português pra já começar com tudo.
Topa encarar a missão intergaláctica, Capitão Thales? 🚀👽✨
