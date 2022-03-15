#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

const std::string suffixe = "_clap_name";

// Constructors / Destructor
DiamondTrap::DiamondTrap( void ) : ClapTrap(std::string("Default") + suffixe), ScavTrap(), FragTrap(), _name("DiamondNope")
{
    std::cout << "Create DiamondTrap " << this->_name << std::endl;
    this->ScavTrap::setDefaultEnergy();
    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + suffixe), ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "Create DiamondTrap " << this->_name << std::endl;
    this->ScavTrap::setDefaultEnergy();
    return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
    *this = src;
    std::cout << "Create DiamondTrap from copy " << this->_name << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destroye DiamondTrap " << this->_name << std::endl;
    return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & src )
{
    if (this !=  &src)
    {
        this->ClapTrap::_name = src.ClapTrap::getName();
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
    }
    return *this;
}

// Member functions
void    DiamondTrap::attack( const std::string & target )
{
    this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI( void )
{
    if (!this->can_play())
        return ;
    std::cout << "I am " << this->_name << ", descentants of " << this->ClapTrap::getName() << std::endl;
}

void    DiamondTrap::print_infos( void ) const
{
    std::cout << std::endl << this->_name << std::endl;
    std::cout << "Hit points " << this->_hit_points << std::endl;
    std::cout << "Energy points " << this->_energy_points << std::endl;
    std::cout << "Attack damages " << this->_attack_damage << std::endl << std::endl;
}
