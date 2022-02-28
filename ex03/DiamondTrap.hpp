#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;

public:
    DiamondTrap( void );
    DiamondTrap( std::string name);
    DiamondTrap( DiamondTrap const & src);
    ~DiamondTrap();


    DiamondTrap & operator=( DiamondTrap const & src );

    void        attack( const std::string & target );
    void        whoAmI( void );
    // std::string getName( void ) const;
    // int         getHitPoint( void ) const;
    // int         getEnergyPoint( void ) const;
    // int         getAttackDamage( void ) const;
    void        print_infos( void ) const;
};


#endif