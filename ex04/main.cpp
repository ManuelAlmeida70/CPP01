#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Erro: Nao foi possivel abrir o arquivo " << filename << std::endl;
        return ;
    }

    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if (!outFilename.is_open())
    {
        std::cerr << "Erro: Nao foi possivel criar o arquivo " << outFile << std::endl;
        inFile.close();
        return ;
    }
    std::string line;
    while (std::getline(inFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos, + s1.length());
            pos += s2.length();
        }
        outFile << line;
        if (!inFile.eof())
            outFile << std::endl;
    }
    inFile.close();
    outFile.close();
}