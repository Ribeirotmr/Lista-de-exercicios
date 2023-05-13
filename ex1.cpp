#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome, cpf, endereco, telefone;

    cout << "Digite o nome: ";
    getline(cin, nome);

    cout << "Digite o CPF: ";
    getline(cin, cpf);

    cout << "Digite o endereco: ";
    getline(cin, endereco);

    cout << "Digite o telefone: ";
    getline(cin, telefone);

    cout << "\nCadastro realizado com sucesso!" << endl;
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;

    return 0;
}
