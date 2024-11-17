#ifndef SALES_SCORE_HPP
#define SALES_SCORE_HPP

#include <iostream>
#include <string>

class SalesScore
{
private:
    std::string storeTitle;

public:
    SalesScore();  // Construtor sem parâmetros
    ~SalesScore(); // Destrutor

    void setStoreTitle(const std::string& storeTitle); // Define o título da loja
    std::string getStoreTitle() const;                // Retorna o título da loja

    void bootSystem(const std::string& storeTitle);   // Inicializa o sistema
};

#endif
