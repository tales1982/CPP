#include "MiniSpan.hpp"
#include <iostream>

void MiniSpan::addNumber(int n) {
    _numbers.push_back(n);
}

const std::vector<int>& MiniSpan::getNumbers() const {
    return _numbers;
}


int MiniSpan::shortestSpan() {
    
    return 0; // valor de exemplo
}

int MiniSpan::longestSpan() {
    std::cout << "teste" << std::endl;
    return 0; // valor de exemplo
}
