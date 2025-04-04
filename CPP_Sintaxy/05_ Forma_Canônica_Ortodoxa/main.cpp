#include "MinhaClasse.hpp"

int main() {
	MinhaClasse a("Thales");
	a.mostrar();

	MinhaClasse b = a;      // construtor de cópia
	b.mostrar();

	MinhaClasse c;
	c = a;                  // operador de atribuição
	c.mostrar();

	return 0;
}
