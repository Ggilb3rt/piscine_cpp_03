#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{ 
    std::cout << std::endl << "FragTrap tests" << std::endl << std::endl;
    FragTrap    f0;
    FragTrap    f1("F1");

    f0.highFivesGuys();
    f1.attack("a chicken");
    f1.print_infos();
    
    FragTrap    fcopy(f1);
    fcopy.attack("pouet");
    fcopy.attack("pouet");

    std::cout << std::endl << "Print infos" << std::endl << "f0 ";
    f0.ClapTrap::print_infos();
    f1.ClapTrap::print_infos();
    std::cout << std::endl <<  "fcopy ";
    fcopy.ClapTrap::print_infos();

    ScavTrap    s1("Scavvvvv");
    s1.guardGate();
    s1.print_infos();
}
