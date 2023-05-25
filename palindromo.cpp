#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string palavra;

    cout << "Insira uma palavra: ";
    cin >> palavra;

    for (int i = 0; i < palavra.length(); i++)
    {
        if (palavra[i] != palavra[palavra.length() - i - 1])
        {
            cout << "A palavra nao e palindroma" << endl;
            return 0;
        }
        else
        {
            cout << "A palavra e palindroma" << endl;
            return 0;
        }
    }
    return 0;
}