#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("FragNope")
{
    std::cout << "Create FragTrap " << ClapTrap::_name << std::endl;
    return ;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
    std::cout << "Create FragTrap " << name << std::endl;
    this->ClapTrap::_hit_points = 100;
    this->ClapTrap::_energy_points = 100;
    this->ClapTrap::_attack_damage = 30;
    this->ClapTrap::print_infos();
    return ;
}

FragTrap::FragTrap( FragTrap const & src)
{
    *this = src;
    return ;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Destoye FragTrap : " << this->ClapTrap::_name << std::endl;
    return ;
}

FragTrap &  FragTrap::operator=( FragTrap const & src)
{
    (void)src;
    return *this;    
}


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
