#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{ 
    std::cout << std::endl << std::endl << "FragTrap tests" << std::endl << std::endl;
    FragTrap    f0;
    FragTrap    f1("F1");
    FragTrap    fcopy(f1);

    f0.highFivesGuys();
    f1.attack("a chicken");
    fcopy.attack("pouet");
}
