#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{ 
    DiamondTrap     first("Carbon");


    std::cout << "FragTrap infos" << std::endl;
    first.FragTrap::print_infos();
    std::cout << std::endl << "ScavTrap infos" << std::endl;
    first.ScavTrap::print_infos();
    std::cout << std::endl << "DiamondTrap infos" << std::endl;
    first.print_infos();

    std::cout << std::endl;
    first.guardGate();
    first.highFivesGuys();
    first.whoAmI();
}
