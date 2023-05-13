#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float peso, altura, imc;

    cout << "Digite o seu peso: ";
    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    imc = peso / pow(altura, 2);

    cout << "Seu IMC é: " << imc << endl;

    return 0;
}