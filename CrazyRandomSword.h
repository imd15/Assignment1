/* 
 * File:   CrazyRandomSword.h
 * Author: Ian <imd15@my.fsu.edu>
 *
 * Created on Jan 29, 2018
 */

#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a Simple Hammer (hitpoint = Random, ignores 2-7 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:
	//the 10 hitpoints is arbitrary as it will be changed when the random number generatr is created
    CrazyRandomSword() : Weapon("Crazy Random Sword", 10.0) {
	srand(time(NULL)); //sets random seed
	hitPoints = rand()%94 +7; //7-94


	}

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CrazyRandomSword_H */

