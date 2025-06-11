#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA panzo("Panzo", club);
        panzo.attack();
        club.setType("Rasengan");
        panzo.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB ansabest("Ansebast");
        ansabest.setWeapon(club);
        ansabest.attack();
        club.setType("Susanoo");
        ansabest.attack();
    }

    return 0;
}