/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Elevador.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:26:41 by tales             #+#    #+#             */
/*   Updated: 2024/12/08 20:57:24 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Elevador.hpp"

Elevador::Elevador()
{
    /*    
    this->_totalAndares = 20;   // maximo de andares 20
    this->_andarAtual = 0;      // terrio
    this->_maxCapacidade = 10;  // maximo de pessoas 10
    this->_capacidadeAtual = 0; // pessoas dentro do elevador no momento atual
    */

};

void Elevador::inicializa(int capacidade, int totalAndares) {
    _maxCapacidade = capacidade;
    _totalAndares = totalAndares;
    _andarAtual = 0;
    _capacidadeAtual = 0;
}

Elevador::~Elevador()
{
    std::cout << "Vareaveis destruidas" << std::endl;
};

void Elevador::entrada(int numeroDePessoas)
{
    int maximo;
    maximo = this->_capacidadeAtual + numeroDePessoas;

    if (maximo > 10)
        std::cout << "A quantidade de pessoas utrapassar a maxima do elevador " << std::endl;
    else
    {
        this->_capacidadeAtual += numeroDePessoas;
        std::cout << numeroDePessoas << " entraram no elevador" << std::endl;
        std::cout << "Total de pessoas no momento atual e de elevador " << this->_capacidadeAtual << " pessoas." << std::endl;
    }
};

void Elevador::sair(int sairElevador)
{
    if (sairElevador <= this->_capacidadeAtual && sairElevador >= 1)
    {
        this->_capacidadeAtual -= sairElevador;
        std::cout << sairElevador << " Pessoas sairan do elevador." << std::endl;
        // std::cout << this->_capacidadeAtual <<" Ainda esta elevador." <<std::endl;
    }
    else if (sairElevador > this->_capacidadeAtual)
    {
        std::cout << "Exister " << _capacidadeAtual << " pessoa no elevador." << std::endl;
        if (this->_capacidadeAtual < sairElevador)
        {
            std::cout << "Selecione no maximo " << _capacidadeAtual << " para sair do elevador." << std::endl;
        }
    }
    else
        std::cout << "Nao exister pessoas no elevador." << std::endl;
};
void Elevador::subir() {
    if (this->_andarAtual < this->_totalAndares) 
    {
        this->_andarAtual++;
        std::cout << "Subiu para o andar " << this->_andarAtual << std::endl;
    } else {
        std::cout << "Já está no último andar." << std::endl;
    }
}

void Elevador::descer() {
    if (this->_andarAtual > 0) {
        this->_andarAtual--;
        std::cout << "Desceu para o andar " << this->_andarAtual << std::endl;
    } else {
        std::cout << "Já está no térreo." << std::endl;
    }
}

int Elevador::getAndarAtual() const { return _andarAtual; }
int Elevador::getTotalAndares() const { return _totalAndares; }
int Elevador::getCapacidadeAtual() const { return _capacidadeAtual; }
int Elevador::getMaxCapacidade() const { return _maxCapacidade; }
