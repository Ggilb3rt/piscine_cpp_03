#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include "ClapTrap.hpp"

#define DEFAULT_HIT 100
#define DEFAULT_ENERGY 50
#define DEFAULT_ATTACK 20

class ScavTrap : virtual public ClapTrap
{
private:
    
    
public:
    ScavTrap( void );
    ScavTrap( std::string name);
    ScavTrap( ScavTrap const & src);
    ~ScavTrap( void );

    ScavTrap & operator=( ScavTrap const & src);

    void        attack( const std::string & target);
    void        guardGate( void ) const;

    void        setDefaultHit( void );
    void        setDefaultEnergy( void );
    void        setDefaultAttack( void );

};


#endif