#include <iostream>

class Fixed {
private:
    int* value; // Alocação dinâmica para demonstrar a forma canônica

public:
    // Construtor Padrão
    Fixed() : value(new int(0)) {
        std::cout << "Default constructor called" << std::endl;
    }

    // Construtor de Cópia
    Fixed(const Fixed& other) : value(new int(*other.value)) {
        std::cout << "Copy constructor called" << std::endl;
    }

    // Operador de Atribuição
    Fixed& operator=(const Fixed& other) {
        if (this != &other) { // Evita autoatribuição
            delete value; // Libera o recurso existente
            value = new int(*other.value); // Cópia profunda
        }
        std::cout << "Assignment operator called" << std::endl;
        return *this;
    }

    // Destrutor
    ~Fixed() {
        delete value; // Libera o recurso alocado
        std::cout << "Destructor called" << std::endl;
    }

    // Método adicional
    int getValue() const {
        return *value;
    }

    void setValue(int newValue) {
        *value = newValue;
    }
};

int main() {
    Fixed a;
    Fixed b(a); // Construtor de cópia
    Fixed c;
    c = b; // Operador de atribuição

    std::cout << "a: " << a.getValue() << std::endl;
    std::cout << "b: " << b.getValue() << std::endl;
    std::cout << "c: " << c.getValue() << std::endl;

    return 0;
}
