#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float valor_passagem, valor_gasto_por_semana;
    int quantidade_de_viagens;

    cout << "Digite o valor da passagem R$: ";
    cin >> valor_passagem;

    cout << "Digite a quantidade de viagens por semana: ";
    cin >> quantidade_de_viagens;

    valor_gasto_por_semana = valor_passagem * quantidade_de_viagens;

    cout << "Valor gasto de passagem por semana para ir à UFES é: R$" << valor_gasto_por_semana << endl;

    return 0;
}