#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap roger("roger");
    ClapTrap nope;
    ClapTrap roger2(roger);

    roger2.attack("Maurice");
    nope.attack("Marcel");
    std::cout << roger.getHitPoint() << std::endl;
    roger.takeDamage(8);
    roger.beRepaired(2);
    std::cout << roger.getHitPoint() << std::endl;
}