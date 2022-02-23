#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

const std::string suffixe = "_clap_name";

// Constructors / Destructor
DiamondTrap::DiamondTrap( void ) : ClapTrap(ClapTrap::_name + suffixe), FragTrap(), ScavTrap(), _name("DiamondNope")
{
    std::cout << "Create DiamondTrap " << this->_name << std::endl; 
    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(ClapTrap::_name + suffixe), FragTrap(), ScavTrap(), _name(name)
{
    std::cout << "Create DiamondTrap " << this->_name << std::endl;
    this->_hit_points = this->FragTrap::_hit_points;
    this->_energy_points = this->ScavTrap::_energy_points;
    this->_attack_damage = this->FragTrap::_attack_damage;
    return ;
}

// DiamondTrap::DiamondTrap( DiamondTrap const & src )
// {
//     *this = src;
//     std::cout << "Create DiamondTrap from copy" << this->_name << std::endl;
//     return ;
// }

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destroye DiamondTrap " << this->_name << std::endl;
    return ;
}

// Member functions
void    DiamondTrap::whoAmI( void )
{
    std::cout << "I am " << this->_name << ", descentants of " << this->ClapTrap::getName() << std::endl;
}

// Getters
// std::string DiamondTrap::getName( void ) const
// {
//     return (this->_name);
// }

// int     DiamondTrap::getHitPoint( void ) const
// {
//     return (this->_hit_points);
// }

// int     DiamondTrap::getEnergyPoint( void ) const
// {
//     return (this->_energy_points);
// }

// int     DiamondTrap::getAttackDamage( void ) const
// {
//     return (this->_attack_damage);
// }

// void    DiamondTrap::print_infos( void ) const
// {
//     std::cout << this->_name << std::endl;
//     std::cout << "Hit points " << this->_hit_points << std::endl;
//     std::cout << "Energy points " << this->_energy_points << std::endl;
//     std::cout << "Attack damages " << this->_attack_damage << std::endl;
// }
