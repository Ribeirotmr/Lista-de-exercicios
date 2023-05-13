#include <iostream>
using namespace std;

int main()
{
    float arrecadacao, lote1, lote2, criancas, idosos, adultos;
    int qtd_criancas, qtd_idosos, qtd_adultos;

    cout << "Digite arrecadacao:";
    cin >> arrecadacao;

    cout << "Qual a quantidade de criancas ? ";
    cin >> qtd_criancas;

    cout << "Qual a quantidade de idosos ? ";
    cin >> qtd_idosos;

    cout << "Qual a quantidade de adultos ? ";
    cin >> qtd_adultos;

    lote2 = (arrecadacao * 0.75) / qtd_adultos;
    lote1 = lote2 / 2;

    criancas = lote1 * qtd_criancas * 0.25;
    idosos = lote1 * qtd_idosos * 0.25;
    adultos = lote2 * qtd_adultos * 0.75;

    cout << "O valor do primeiro lote é: R$" << lote1 << endl;
    cout << "O valor do segundo lote é: R$" << lote2 << endl;
    cout << "O valor arrecadado com criancas é: R$" << criancas << endl;
    cout << "O valor arrecadado com idosos é: R$" << idosos << endl;
    cout << "O valor arrecadado com adultos é: R$" << adultos << endl;

    return 0;
}