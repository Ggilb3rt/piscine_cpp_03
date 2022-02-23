#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    int             _hit_points;
    int             _energy_points;
    int             _attack_damage;

    bool            can_play( void ) const;

public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const & src );
    ~ClapTrap( void );

    ClapTrap & operator=( ClapTrap const & src );

    void        attack( const std::string & target);
    void        beRepaired( unsigned int amount );
    void        takeDamage( unsigned int amount );
    std::string getName( void ) const;
    int         getHitPoint( void ) const;
    int         getEnergyPoint( void ) const;
    int         getAttackDamage( void ) const;
    void        print_infos( void ) const;
};

#endif