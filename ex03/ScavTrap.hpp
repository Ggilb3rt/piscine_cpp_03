#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include "ClapTrap.hpp"

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

};


#endif