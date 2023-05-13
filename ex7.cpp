#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2, produto_idade;
    double media_idade;

    cout << "Digite o primeiro nome: ";
    cin >> nome1;

    cout << "Digite a idade de " << nome1 << ": ";
    cin >> idade1;

    cout << "Digite o segundo nome: ";
    cin >> nome2;

    cout << "Digite a idade de " << nome2 << ": ";
    cin >> idade2;

    media_idade = (idade1 + idade2) / 2;
    produto_idade = idade1 * idade2;

    cout << "A media de idade entre " << nome1 << " e " << nome2 << " é " << media_idade << " anos." << endl;
    cout << "O produto da idade entre " << nome1 << " e " << nome2 << " é " << produto_idade << " anos." << endl;

    return 0;
}