#include <iostream>
#include <string>

int main()
{
    std::string nome, sobrenome, login, senha;

    std::cout << "Digite o nome: ";
    std::cin >> nome;

    std::cout << "Digite o sobrenome: ";
    std::cin >> sobrenome;

    login = nome[0] + sobrenome;

    std::cout << "Seu login é: " << login << std::endl;

    std::cout << "Digite a senha com 10 caracteres: ";

    return 0;
}