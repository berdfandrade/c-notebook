#ifndef HERO_H // Diretiva de pré-processamento
#define HERO_H

#include <string>
#include <iostream>

class Hero
{
private:
    std::string nome = "";

public:
    int level;
    Hero(const std::string &nome, int level) : nome(nome), level(level) {}
    void mostrarDetalhes() const
    {
        std::cout << "Nome: " << nome << ", Level: " << level << std::endl;
    }
};

#endif