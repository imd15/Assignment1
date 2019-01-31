/* 
 * File:   Whip.cpp
 * Author: Ian <imd15@my.fsu.edu>
 *  
 */

#include <stdlib.h>
#include "Whip.h"


double Whip::hit(double armor){
	
	double damage;
	if (armor < 20)
	{
		damage = (hitPoints * 2) - armor; // if the armor is less than 20, deal 2x damage
    }
	else
	{
		damage = hitPoints - armor; // deal regular damage if different 
	}
	if(damage < 0){
        return 0;
    }
    return damage;
}