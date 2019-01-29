/* 
 * File:   SimpleHammer.h
 * Author: Ian <imd15@my.fsu.edu>
 *
 * Created on Jan 29, 2018
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a Simple Hammer (hitpoint = 25, ignores if less than 30 
 * armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values SimpleHammer and 25.0
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

