#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ingrediente1, ingrediente2, ingrediente3;
    int quantidade1, quantidade2, quantidade3;

    cout << "Digite o nome do primeiro ingrediente: ";
    getline(cin, ingrediente1);

    cout << "Digite a quantidade do primeiro ingrediente: ";
    cin >> quantidade1;

    cout << "Digite o nome do segundo ingrediente: ";
    getline(cin, ingrediente2);

    cout << "Digite a quantidade do segundo ingrediente: ";
    cin >> quantidade2;

    cout << "Digite o nome do terceiro ingrediente: ";
    cin.ignore();
    getline(cin, ingrediente3);

    cout << "Digite a quantidade do terceiro ingrediente: ";
    cin >> quantidade3;

    cout << "\nIngredientes necessarios:" << endl;
    cout << quantidade1 << " " << ingrediente1 << endl;
    cout << quantidade2 << " " << ingrediente2 << endl;
    cout << quantidade3 << " " << ingrediente3 << endl;

    return 0;
}
