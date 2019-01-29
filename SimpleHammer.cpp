/* 
 * File:   SimpleHammer.cpp
 * Author: Ian <imd15@my.fsu.edu>
 *  
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
	if(armor < 30)
		double damage = hitPoints;
	else
		double damage = hitPoints - armor
    if(damage < 0){
        return 0;
    }
    return damage;
}