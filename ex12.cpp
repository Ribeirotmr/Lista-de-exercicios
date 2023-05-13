#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1, num2, inverte1, inverte2, produto_1_2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    inverte1 = (num1 % 10) * 100 + ((num1 / 10) % 10) * 10 + (num1 / 100);
    inverte2 = (num2 % 10) * 100 + ((num2 / 10) % 10) * 10 + (num2 / 100);

    produto_1_2 = (inverte1 * inverte2);

    cout << "O numero 1 invertido é: " << inverte1 << endl;
    cout << "O numero 2 invertido é: " << inverte2 << endl;
    cout << "O produto entre os numeros invertidos é: " << produto_1_2 << endl;

    return 0;
}