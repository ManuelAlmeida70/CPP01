#include "FileReplace.hpp"

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Uso: " << argv[0] << "<arquivo> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Erro: string1 nao pode ser vazia" << std::endl;
        return 1;
    }

    FileReplace replace(filename, s1, s2);
    replace.replaceInFile();

    return 0;
}