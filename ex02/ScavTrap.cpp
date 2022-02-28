#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// Constructors / Destructor
ScavTrap::ScavTrap( void ) : ClapTrap("ScavNope")
{
    std::cout << "Create ScavTrap " << ClapTrap::_name << std::endl;
    this->ClapTrap::_hit_points = 100;
    this->ClapTrap::_energy_points = 50;
    this->ClapTrap::_attack_damage = 20;
    return ;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
    std::cout << "Create ScavTrap " << name << std::endl;
    this->ClapTrap::_hit_points = 100;
    this->ClapTrap::_energy_points = 50;
    this->ClapTrap::_attack_damage = 20;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap(src.ClapTrap::getName())
{
    *this = src;
    std::cout << "Create ScavTrap from copy : " << this->_name << std::endl;
    return ;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Destoye ScavTrap : " << this->ClapTrap::_name << std::endl;
    return ;
}

// Overchage
ScavTrap &  ScavTrap::operator=( ScavTrap const & src)
{
    if (this != &src)
    {
        this->ClapTrap::_name = src.ClapTrap::getName();
        this->ClapTrap::_hit_points = src.ClapTrap::getHitPoint();
        this->ClapTrap::_energy_points = src.ClapTrap::getEnergyPoint();
        this->ClapTrap::_attack_damage = src.ClapTrap::getAttackDamage();
    }
    return *this;    
}

// Member functions
void    ScavTrap::attack( const std::string & target)
{
     if (!this->ClapTrap::can_play())
        return ;
    this->ClapTrap::_energy_points--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target;
    std::cout << " causing " << this->_attack_damage << " points of damage !" << std::endl;
    return ;
}

void    ScavTrap::guardGate( void ) const
{
    if (!this->ClapTrap::can_play())
        return ;
    std::cout << this->ClapTrap::_name << " change to Gate keeper mode." << std::endl;
    return ;
}
