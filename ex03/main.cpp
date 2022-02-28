#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{ 
    DiamondTrap     first("Carbon");

    std::cout << std::endl << "DiamondTrap infos";
    first.print_infos();

    std::cout << std::endl;
    first.guardGate();
    first.highFivesGuys();
    first.whoAmI();
    first.attack("lol");
    first.takeDamage(200);
    first.attack("lol");
    first.print_infos();

    std::cout << std::endl;
    DiamondTrap     noName;
    noName.print_infos();

    DiamondTrap     copy(first);
    copy.print_infos();
}
