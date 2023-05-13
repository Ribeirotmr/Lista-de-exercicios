#include <iostream>
#include <string>

int main()
{
    std::string palavra1, palavra2;

    std::cout << "Digite a primeira palavra: ";
    std::cin >> palavra1;

    std::cout << "Digite a segunda palavra: ";
    std::cin >> palavra2;

    if (palavra1 < palavra2)
    {
        std::cout << "A palavra " << palavra1 << " vem antes de " << palavra2 << " na ordem alfabetica." << std::endl;
    }
    else if (palavra1 > palavra2)

    {
        std::cout << "A palavra " << palavra1 << " vem depois de " << palavra2 << " na ordem alfabetica." << std::endl;
    }
    else if (palavra1 == palavra2)

    {
        std::cout << "As duas palavras sao iguais." << std::endl;
    }

    return 0;
}
