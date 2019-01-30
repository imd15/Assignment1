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
	damage = hitPoints*2;
    }
	else
		damage = hitPoints
	
	if(damage < 0){
        return 0;
    }
    return damage;
}