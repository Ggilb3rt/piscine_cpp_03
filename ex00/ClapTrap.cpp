#include <iostream>
#include "ClapTrap.hpp"

// Constructors / Destructor
ClapTrap::ClapTrap( void ) : _name("ClapNope"), _hit_points(10), _energy_points(10), _attack_damage(0) 
{
    std::cout << "Create ClapTrap : " << this->_name << std::endl;
    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) 
{
    std::cout << "Create ClapTrap : " << this->_name << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) 
{
    *this = src;
    std::cout << "Create ClapTrap from copy : " << this->_name << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destoye ClapTrap : " << this->_name << std::endl;
    return ;
}



// Overload operators
ClapTrap & ClapTrap::operator=( ClapTrap const & src)
{

    if (this != &src)
    {
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }

    return *this;
}



// Member functions
bool     ClapTrap::can_play( void ) const
{
    if (this->_energy_points <= 0 || this->_hit_points <= 0)
    {
        std::cout << this->_name << " can't play.";
        if (this->_energy_points <= 0)
            std::cout << " He needs energy (" << this->_energy_points << ").";
        if (this->_hit_points <= 0)
            std::cout << " He needs reparation (" << this->_hit_points << ").";
        std::cout << std::endl;
        return (false);
    }
    return (true);
}

void    ClapTrap::attack( const std::string & target)
{
    if (!this->can_play())
        return ;
    this->_energy_points--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout << " causing " << this->_attack_damage << " points of damage !" << std::endl;
    return ;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (!this->can_play())
        return ;
    this->_energy_points--;
    this->_hit_points += amount;
    std::cout << "ClapTrap " << this->_name << " gets " << amount << " points of reparation.";
    std::cout << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    this->_hit_points -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " damages.";
    if ((int)amount > this->_hit_points / 2)
        std::cout << " Outch !";
    std::cout << std::endl;
}


// Getters
std::string ClapTrap::getName( void ) const
{
    return (this->_name);
}

int     ClapTrap::getHitPoint( void ) const
{
    return (this->_hit_points);
}

int     ClapTrap::getEnergyPoint( void ) const
{
    return (this->_energy_points);
}

int     ClapTrap::getAttackDamage( void ) const
{
    return (this->_attack_damage);
}

