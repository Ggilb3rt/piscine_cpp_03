#include "ClapTrap.hpp"
#include "FragTrap.hpp"

// Constructors / Destructor
FragTrap::FragTrap( void ) : ClapTrap("FragNope")
{
    std::cout << "Create FragTrap " << ClapTrap::_name << std::endl;
    this->ClapTrap::_hit_points = 100;
    this->ClapTrap::_energy_points = 100;
    this->ClapTrap::_attack_damage = 30;
    return ;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
    std::cout << "Create FragTrap " << name << std::endl;
    this->ClapTrap::_hit_points = 100;
    this->ClapTrap::_energy_points = 100;
    this->ClapTrap::_attack_damage = 30;
    return ;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap(src.ClapTrap::getName())
{
    *this = src;
    std::cout << "Create FragTrap from copy " << ClapTrap::_name << std::endl;
    return ;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Destoye FragTrap : " << this->ClapTrap::_name << std::endl;
    return ;
}


// Overcharge
FragTrap &  FragTrap::operator=( FragTrap const & src)
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
void    FragTrap::attack( const std::string & target)
{
     if (!this->ClapTrap::can_play())
        return ;
    this->ClapTrap::_energy_points--;
    std::cout << "FragTrap " << this->_name << " attacks " << target;
    std::cout << " causing " << this->_attack_damage << " points of damage !" << std::endl;
    return ;
}

void    FragTrap::highFivesGuys( void ) const
{
    std::cout << this->ClapTrap::_name << " : \"High Fives Guys !\"" << std::endl;
    return ;
}
