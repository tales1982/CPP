#ifndef MINHACLASSE_HPP
#define MINHACLASSE_HPP

#include <iostream>
#include <string>

class MinhaClasse {
private:
	std::string _atributo;

public:
	// Forma Canônica
	MinhaClasse();                                      // Construtor padrão
	MinhaClasse(const std::string& valor);              // Construtor com parâmetro (opcional)
	MinhaClasse(const MinhaClasse& other);              // Construtor de cópia
	MinhaClasse& operator=(const MinhaClasse& other);   // Operador de atribuição
	~MinhaClasse();                                     // Destrutor

	// Getters
	const std::string& getAtributo() const;

	// Outros métodos, se quiser
	void mostrar() const;
};

#endif
