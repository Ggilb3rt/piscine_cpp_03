#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
private:
    std::string     _name;
    int             _hit_points;
    int             _energy_points;
    int             _attack_damage;

public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const & src );
    ~ClapTrap();

    ClapTrap & operator=( ClapTrap const & src );

    void    attack( const std::string & target);
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
    int     getHitPoint( void );
};

std::ostream &	operator<<( std ::ostream & o, ClapTrap const & i );

#endif