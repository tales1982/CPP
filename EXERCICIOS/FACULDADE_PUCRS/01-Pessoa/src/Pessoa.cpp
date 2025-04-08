/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pessoa.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 08:49:42 by tales             #+#    #+#             */
/*   Updated: 2025/04/08 10:08:03 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libary/Pessoa.hpp"

    // Canonical Orthodox Form
    Pessoa::Pessoa() : _nome(""), _idade(0), _altura(0.0)
    {
        
    };
    
    Pessoa::Pessoa(std::string nome, int idade, float altura) : _nome(nome), _idade(idade), _altura(altura){
        
    };
    
    Pessoa::Pessoa(const Pessoa &other): _nome(other._nome), _idade(other._idade), _altura(other._altura) {
        
    };
    
    Pessoa& Pessoa::operator=(const Pessoa &other) {
        if (this != &other) {
            this->_nome = other._nome;
            this->_idade = other._idade;       
            this->_altura = other._altura;         
        }
        return *this;  
    }
    
    Pessoa::~Pessoa(){};

    // Getters
    std::string Pessoa::getNome() const
    {
        return _nome;
    };

    int Pessoa::getIdade() const
    {
        return _idade;
    };
    
    float Pessoa::getAltura() const
    {
        return _altura;
    };

    // Setters
    void Pessoa::setNome(std::string nome)
    {
        _nome = nome;
    };

    void Pessoa::setIdade(int idade)
    {
        if(idade < 0)
            throw std::invalid_argument("Idade nao pode ser negativa");
        _idade = idade;
    };
    
    void Pessoa::setAltura(float altura)
    {
        _altura = altura;
    };

    std::ostream& operator<<(std::ostream& out, const Pessoa& b) {
        out << "Nome.: " << b.getNome() << "\nidade.: " << b.getIdade() << "\naltura.: " << b.getAltura();
        return out;
    }