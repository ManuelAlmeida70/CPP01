#include "FileReplace.hpp"

FileReplace::FileReplace(std::string& filename, std::string& s1, std::string& s2) : filename(filename), s1(s1), s2(s2)
{

}

void FileReplace::replaceInFile()
{
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Erro: Nao foi possivel abrir o arquivo " << filename << std::endl;
        return ;
    }

    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if (!outFile.is_open())
    {
        std::cerr << "Erro: Nao foi possivel criar o arquivo " << outFilename << std::endl;
        inFile.close();
        return ;
    }

    std::string line;
    while (std::getline(inFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
    }
    inFile.close();
    outFile.close();
}