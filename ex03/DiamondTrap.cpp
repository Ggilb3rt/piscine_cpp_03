#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

// Constructors / Destructor
DiamondTrap::DiamondTrap( void ) : _name("DiamondNope"), _hit_points(FragTrap::getHitPoint())
{
    std::cout << "Create DiamondTrap " << this->_name << std::endl; 
    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : _name(name)
{
    std::cout << "Create DiamondTrap " << this->_name << std::endl;
    return ;
}

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
std::string DiamondTrap::getName( void ) const
{
    return (this->_name);
}

int     DiamondTrap::getHitPoint( void ) const
{
    return (this->_hit_points);
}

int     DiamondTrap::getEnergyPoint( void ) const
{
    return (this->_energy_points);
}

int     DiamondTrap::getAttackDamage( void ) const
{
    return (this->_attack_damage);
}

void    DiamondTrap::print_infos( void ) const
{
    std::cout << this->_name << std::endl;
    std::cout << "Hit points " << this->_hit_points << std::endl;
    std::cout << "Energy points " << this->_energy_points << std::endl;
    std::cout << "Attack damages " << this->_attack_damage << std::endl;
}
