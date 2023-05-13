#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, soma, media, produto;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "Digite o valor de c: ";
    cin >> c;

    soma = a + b + c;
    media = (a + b + c) / 3;
    produto = a * b * c;

    cout << "A soma dos valores é: " << soma << endl;
    cout << "A media dos valores é: " << media << endl;
    cout << "O produto dos valores é: " << produto << endl;

    return 0;
}