#include "MinhaClasse.hpp"

// Códigos de cor ANSI
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"

MinhaClasse::MinhaClasse() : _atributo("Valor padrão") {
	std::cout << GREEN << "[Construtor padrão]" << RESET << std::endl;
}

MinhaClasse::MinhaClasse(const std::string& valor) : _atributo(valor) {
	std::cout << CYAN << "[Construtor com parâmetro]" << RESET << std::endl;
}

MinhaClasse::MinhaClasse(const MinhaClasse& other) : _atributo(other._atributo) {
	std::cout << YELLOW << "[Construtor de cópia]" << RESET << std::endl;
}

MinhaClasse& MinhaClasse::operator=(const MinhaClasse& other) {
	std::cout << YELLOW << "[Operador de atribuição]" << RESET << std::endl;
	if (this != &other)
		this->_atributo = other._atributo;
	return *this;
}

MinhaClasse::~MinhaClasse() {
	std::cout << RED << "[Destrutor]" << RESET << std::endl;
}

const std::string& MinhaClasse::getAtributo() const {
	return _atributo;
}

void MinhaClasse::mostrar() const {
	std::cout << CYAN << "Valor: " << _atributo << RESET << std::endl;
}
