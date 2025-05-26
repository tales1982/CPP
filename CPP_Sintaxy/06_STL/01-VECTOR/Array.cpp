#include <iostream>
#include <vector>
#include <iomanip>

// Cores ANSI
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define WHITE   "\033[1;37m"

void ft_print_Size() {
    std::vector<int> numInt(5);

    numInt[0] = 10;
    numInt[1] = 20;
    numInt[2] = 30;
    numInt[3] = 40;
    numInt[4] = 50;

    int tamInt = numInt.size();
    std::cout << CYAN << "\n=========== Demonstração: vector<int> - size() ===========" << RESET << std::endl;
    std::cout << YELLOW << "Número total de elementos: " << tamInt << RESET << std::endl;

    for (int i = 0; i < tamInt; i++) {
        std::cout << "  📌 Posição[" << i + 1 << "] = " << GREEN << numInt[i] << RESET << std::endl;
    }
}

void ft_print_Push_Back() {
    std::vector<float> numFloat(3);
    numFloat[0] = 1.0;
    numFloat[1] = 2.0;
    numFloat[2] = 3.0;

    int tamFloat = numFloat.size();

    std::cout << BLUE << "\n=========== Demonstração: vector<float> - push_back() ===========" << RESET << std::endl;
    std::cout << MAGENTA << "🔹 Estado inicial do vetor:" << RESET << std::endl;
    std::cout << YELLOW << "Número de elementos: " << tamFloat << RESET << std::endl;

    for (int i = 0; i < tamFloat; i++) {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "  🔸 Posição[" << i + 1 << "] = " << GREEN << numFloat[i] << RESET << std::endl;
    }

    std::cout << MAGENTA << "\n➕ Adicionando elemento 4.0 ao final do vetor..." << RESET << std::endl;
    numFloat.push_back(4.0);
    tamFloat = numFloat.size();

    std::cout << YELLOW << "Novo tamanho: " << tamFloat << RESET << std::endl;
    for (int i = 0; i < tamFloat; i++) {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "  🔸 Posição[" << i + 1 << "] = " << GREEN << numFloat[i] << RESET << std::endl;
    }
}

void ft_print_Pop_Back() {
    std::vector<int> numInt(3);
    numInt[0] = 60;
    numInt[1] = 70;
    numInt[2] = 80;

    int tamInt = numInt.size();

    std::cout << RED << "\n=========== Demonstração: vector<int> - pop_back() ===========" << RESET << std::endl;
    std::cout << MAGENTA << "🔹 Estado inicial do vetor:" << RESET << std::endl;
    std::cout << YELLOW << "Número de elementos: " << tamInt << RESET << std::endl;

    for (int i = 0; i < tamInt; i++) {
        std::cout << "  🔻 Posição[" << i + 1 << "] = " << GREEN << numInt[i] << RESET << std::endl;
    }

    std::cout << MAGENTA << "\n❌ Removendo último elemento com pop_back()..." << RESET << std::endl;
    numInt.pop_back();
    tamInt = numInt.size();

    std::cout << YELLOW << "Novo tamanho: " << tamInt << RESET << std::endl;
    for (int i = 0; i < tamInt; i++) {
        std::cout << "  🔻 Posição[" << i + 1 << "] = " << GREEN << numInt[i] << RESET << std::endl;
    }
}

void ft_print_At()
{
    std::vector<int> numeros;
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    std::cout << CYAN << "\n=========== Demonstração: vector<int> - at(index) ===========" << RESET << std::endl;

    std::cout << MAGENTA << "🔹 Vetor original:" << RESET << std::endl;
    for (size_t i = 0; i < numeros.size(); i++) {
        std::cout << "  🔸 Posição[" << i + 1 << "] = " << GREEN << numeros[i] << RESET << std::endl;
    }

    std::cout << YELLOW << "\n🎯 Acessando elemento válido com at(2)..." << RESET << std::endl;
    std::cout << "  ✅ Valor acessado: " << GREEN << numeros.at(2) << RESET << std::endl;

    std::cout << YELLOW << "\n🚫 Tentando acessar posição inválida at(10)..." << RESET << std::endl;
    try {
        std::cout << numeros.at(10) << std::endl; // Deve lançar exceção
    } catch (const std::out_of_range& e) {
        std::cerr << RED << "❌ Erro: índice fora do alcance → " << e.what() << RESET << std::endl;
    }
}
void ft_printOperator() {
    std::vector<int> numeros(5);

    // Atribuindo valores usando operator[]
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    std::cout << CYAN << "\n=========== Demonstração: vector<int> - operator[] ===========" << RESET << std::endl;

    std::cout << MAGENTA << "🔹 Vetor original:" << RESET << std::endl;
    for (size_t i = 0; i < numeros.size(); i++) {
        std::cout << "  🔸 Posição[" << i + 1 << "] = " << GREEN << numeros[i] << RESET << std::endl;
    }

    std::cout << YELLOW << "\n🎯 Acessando elemento com operator[2]..." << RESET << std::endl;
    std::cout << "  ✅ Valor acessado: " << GREEN << numeros[2] << RESET << std::endl;

    std::cout << YELLOW << "\n⚠️ Tentando acessar índice inválido [10] com operator[]..." << RESET << std::endl;
    std::cout << RED << "  ❌ Valor retornado (comportamento indefinido): " << numeros[10] << RESET << std::endl;

    // Não retorna 0, nem erro — retorna lixo de memória ou pode crashar.
}


void ft_print_Resize() {
    std::vector<int> numeros;

    // Preenchendo com 3 elementos
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);

    std::cout << CYAN << "\n=========== Demonstração: vector<int> - resize() ===========" << RESET << std::endl;

    std::cout << MAGENTA << "🔹 Vetor original:" << RESET << std::endl;
    for (size_t i = 0; i < numeros.size(); i++) {
        std::cout << "  🔸 Posição[" << i + 1 << "] = " << GREEN << numeros[i] << RESET << std::endl;
    }

    std::cout << YELLOW << "\n📦 Aumentando vetor com resize(5)..." << RESET << std::endl;
    numeros.resize(5); // agora tem 5 elementos

    for (size_t i = 0; i < numeros.size(); i++) {
        std::cout << "  🔸 Posição[" << i + 1 << "] = " << GREEN << numeros[i] << RESET << std::endl;
    }

    std::cout << YELLOW << "\n✂️ Reduzindo vetor com resize(2)..." << RESET << std::endl;
    numeros.resize(2); // agora só mantém os dois primeiros

    for (size_t i = 0; i < numeros.size(); i++) {
        std::cout << "  🔸 Posição[" << i + 1 << "] = " << GREEN << numeros[i] << RESET << std::endl;
    }
}

void ft_print_ShrinkToFit() {
    std::vector<int> numeros;

    // Preencher com alguns elementos
    for (int i = 0; i < 10; ++i)
        numeros.push_back((i + 1) * 10); // 10, 20, ..., 100

    std::cout << CYAN << "\n=========== Demonstração: vector<int> - shrink_to_fit() ===========" << RESET << std::endl;

    std::cout << YELLOW << "🔹 Vetor original:" << RESET << std::endl;
    std::cout << "  🔸 Tamanho (size):    " << GREEN << numeros.size() << RESET << std::endl;
    std::cout << "  🔸 Capacidade:        " << GREEN << numeros.capacity() << RESET << std::endl;

    std::cout << MAGENTA << "\n✂️ Reduzindo o tamanho com resize(5)..." << RESET << std::endl;
    numeros.resize(5);

    std::cout << "  🔸 Novo tamanho:      " << GREEN << numeros.size() << RESET << std::endl;
    std::cout << "  🔸 Capacidade atual:  " << GREEN << numeros.capacity() << RESET << std::endl;

    std::cout << YELLOW << "\n📦 Aplicando shrink_to_fit()..." << RESET << std::endl;
    numeros.shrink_to_fit();

    std::cout << GREEN << "✅ Capacidade ajustada com sucesso!" << RESET << std::endl;
    std::cout << "  🔸 Tamanho final:     " << GREEN << numeros.size() << RESET << std::endl;
    std::cout << "  🔸 Capacidade final:  " << GREEN << numeros.capacity() << RESET << std::endl;
}

void ft_print_Capacity() {
    std::vector<int> numeros;

    std::cout << CYAN << "\n=========== Demonstração: vector<int> - capacity() ===========" << RESET << std::endl;

    std::cout << YELLOW << "Estado inicial:" << RESET << std::endl;
    std::cout << "  🔸 Tamanho (size):    " << GREEN << numeros.size() << RESET << std::endl;
    std::cout << "  🔸 Capacidade:        " << GREEN << numeros.capacity() << RESET << std::endl;

    std::cout << MAGENTA << "\n➕ Adicionando elementos com push_back()" << RESET << std::endl;

    for (int i = 1; i <= 10; i++) {
        numeros.push_back(i * 10);
        std::cout << "  📌 Inserido: " << i * 10;
        std::cout << " | Tamanho: " << GREEN << numeros.size() << RESET;
        std::cout << " | Capacidade: " << GREEN << numeros.capacity() << RESET << std::endl;
    }

    std::cout << YELLOW << "\n🧼 Aplicando shrink_to_fit() para reduzir a capacidade..." << RESET << std::endl;
    numeros.shrink_to_fit();

    std::cout << "  🔸 Tamanho final:     " << GREEN << numeros.size() << RESET << std::endl;
    std::cout << "  🔸 Capacidade final:  " << GREEN << numeros.capacity() << RESET << std::endl;
}
