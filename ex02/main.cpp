#include <iostream>
#include <string>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "Endereco da string: " << &string << std::endl;
    std::cout << "Endereco contido em stringPTR: " << stringPTR << std::endl;
    std::cout << "Endereco contido em stringREF: " << &stringREF << std::endl;

    std::cout << "Valor da string: " << string << std::endl;
    std::cout << "Valor apontado por stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valor referenciado por stringREF: " << stringREF << std::endl;

    return 0;
}