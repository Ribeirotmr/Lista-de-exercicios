#include <iostream>
using namespace std;

int main()
{
    int idade1, idade2, diferenca;

    cout << "Digite a idade da primeira pessoa: ";
    cin >> idade1;

    cout << "Digite a idade da segunda pessoa: ";
    cin >> idade2;

    diferenca = abs(idade1 - idade2);

    cout << "A diferenca de idade entre as duas pessoas é " << abs(diferenca) << " anos." << endl;

    return 0;
}
