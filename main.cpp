#include <iostream>
#include <vector>
#include <string>

class Funcionario {
private:
    std::string nome;
    int idade;
    double salario;

public:
    Funcionario(const std::string& nome, int idade, double salario)
        : nome(nome), idade(idade), salario(salario) {}

    void detalhes() const {
        std::cout << "Nome: " << nome << ", Idade: " << idade << ", Salário: $" << salario << "\n";
    }
};

int main() {
    // Exemplo de uso da classe Funcionario
    Funcionario funcionario1("Joao", 30, 3000.50);
    Funcionario funcionario2("Maria", 28, 2500.75);

    // Chamada dos métodos detalhes para mostrar informações
    funcionario1.detalhes();
    funcionario2.detalhes();

    return 0;
}
