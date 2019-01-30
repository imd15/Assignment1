/* 
 * File:   Whip.h
 * Author: Ian <imd15@my.fsu.edu>
 *
 * Created on Jan 29, 2018
 */

#include <string>
#include "Weapon.h"

#ifndef WHIP_H
#define WHIP_H

/**
 * Defines the behavior of a Whip (hitpoint = 10, deals double damage if less than 20 
 * armor points)
 */
class Whip : public Weapon {
public:
	//the 10 hitpoints is arbitrary as it will be changed when the random number generatr is created
    Whip() : Weapon("Whip", 10.0) {
	
	hitPoints = 10;


	}

    virtual ~Whip() {};

    virtual double hit(double armor);

};

#endif /* Whip_H */

