#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float passagem = 2.50;
    float desconto, valor_pago, troco;
    int sorrisos;

    cout << "Valor pago: ";
    cin >> valor_pago;

    cout << "Quantidade de sorrisos: ";
    cin >> sorrisos;

    desconto = sorrisos * 0.25;

    if (desconto > 2.50)
    {
        desconto = 2.50;
    }

    troco = abs(valor_pago - (passagem - desconto));

    cout << "Troco e : " << troco << endl;

    return 0;
}