#include <iostream>
#include "ClapTrap.hpp"

// Constructors / Destructor
ClapTrap::ClapTrap( void ) : _name("nope"), _hit_points(10), _energy_points(10), _attack_damage(0) 
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
void    ClapTrap::attack( const std::string & targert)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << targert;
    std::cout << " causing " << this->_attack_damage << " points of damage !" << std::endl;
    return ;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    this->_hit_points -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " damages.";
    if ((int)amount > this->_hit_points / 2)
        std::cout << " Outch !";
    std::cout << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    this->_hit_points += amount;
    std::cout << "ClapTrap " << this->_name << " gets " << amount << " points of reparation.";
    std::cout << std::endl;
}

int     ClapTrap::getHitPoint( void )
{
    return (this->_hit_points);
}