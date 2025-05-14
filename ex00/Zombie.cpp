#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{}

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}