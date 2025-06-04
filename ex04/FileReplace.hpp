#ifndef FILEREPLACE_HPP
# define FILEREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileReplace{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    
        public:
            FileReplace(std::string &filename, std::string &s1, std::string &s2);
            void replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2);
};

#endif