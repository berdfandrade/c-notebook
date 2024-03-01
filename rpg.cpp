#include <iostream>
#include "player.h"
#include "title.h"

using namespace std; 

// Posso concarternar igual no JS
string concat(const string &name)
{
    return name + " Hero";
}

int main()
{
    title();
    string nomeConcatenado = concat("Bernardo");
    Player heroi(nomeConcatenado, 10);
    heroi.mostrarDetalhes();
    return 0;
};
