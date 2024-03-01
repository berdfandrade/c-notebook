#ifndef PLAYER_H // Diretiva de pré-processamento
#define PLAYER_H

#include <string>
#include <iostream>

class Player
{
private:
    std::string nome;
    int health;
    int attack;
    int deffense; 

public:
    int level;
    Player(const std::string &nome, int level) : nome(nome), level(level) {}
    void mostrarDetalhes() const
    {
        std::cout << "Nome: " << nome << ", Level: " << level << std::endl;
    }
};

#endif