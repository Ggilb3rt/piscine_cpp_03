#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap roger("roger");
    ClapTrap nope;
    ClapTrap roger2(roger);

    roger2.attack("Maurice");
    nope.attack("Marcel");

    std::cout << std::endl << roger.getHitPoint() << std::endl;
    roger.takeDamage(8);
    roger.beRepaired(2);
    std::cout << roger.getHitPoint() << std::endl;
    roger.attack("Pouet");
    for (int i = 0; i < 10; i++)
        roger.beRepaired(1);
    roger.takeDamage(10);
    roger.attack("Pouet");
    roger.takeDamage(10);
    roger.attack("sdflk");



    std::cout << std::endl << std::endl << "ScavTrap tests" << std::endl << std::endl;
    
    ScavTrap    p0;
    ScavTrap    p1("Martine");
    ScavTrap    p2(p1);

    p0.print_infos();

    p1.ClapTrap::attack("wooo");
    p1.attack("wooo");
    p1.print_infos();

    p0.guardGate();
    
    p2.attack("real Martine");
    p2.takeDamage(20);
    p2.print_infos();
    
    roger.print_infos();
}
