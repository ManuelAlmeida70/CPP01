#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int hordeSize = 5;
    Zombie* horde = zombieHorde(hordeSize, "Horde Zombie");

    for (int i = 0; i < hordeSize; i++)
    {
        std::cout << "zombie " << i + 1 << ": ";
        horde[i].announce();
    }

    delete[] horde;

    return 0;
}