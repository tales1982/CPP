# 🧪 Exercício Proposto — "Ponte do Castelo"
## 🧠 Enunciado:
Você foi encarregado de construir uma ponte mágica que transforma objetos reais (estruturas com dados)   
em números mágicos (uintptr_t) e depois reconstrói esses objetos a partir desses números.   
   
Implemente uma classe chamada MagicBridge que não possa ser instanciada e que tenha os seguintes métodos estáticos:   
   
```cpp
static uintptr_t teleport(Citizen* ptr);
static Citizen* rematerialize(uintptr_t raw);
```
Crie também uma struct chamada Citizen com alguns atributos, como:  

```cpp
int id;
std::string codename;
```
No main, você deve:   
   
Criar um objeto Citizen e preenchê-lo.   
   
Usar o método teleport() para convertê-lo para uintptr_t.   
   
Passar esse valor para rematerialize().   
   
Comparar o ponteiro original com o retornado.
   
## 🎯 Objetivo:
Treinar uso de ponteiros e conversões.   
   
Trabalhar com reinterpret_cast e uintptr_t.   
   
Entender o uso de métodos estáticos.   
   
Trabalhar com struct contendo dados reais.   
   
Confirmar que o ponteiro original e o reconstruído são iguais.  
   
## ✅ Critérios de Sucesso:
Se o ponteiro original e o resultante forem iguais, o programa deve imprimir:
✅ O cidadão foi teleportado com sucesso!

## 🧱 Estrutura Esperada:
```css
magicbridge/
├── Makefile
├── main.cpp
├── MagicBridge.hpp
├── MagicBridge.cpp
└── Citizen.hpp
```
## 🧩 Dica:
Use reinterpret_cast para converter entre ponteiro e inteiro.  

## 🚀 Extra:
Para dificultar depois, adicione mais atributos como bool isUndercover, float skillLevel, ou até std::vector<std::string> aliases.

