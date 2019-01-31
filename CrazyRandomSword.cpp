/* 
 * File:   CrazyRandomSword.cpp
 * Author: Ian <imd15@my.fsu.edu>
 *  
 */

#include <stdlib.h>
#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
	int tempArmor = armor/3; // creates int versoin of 1/3 of randomly selected armor
	int numOfArmorIgnored = rand()%(tempArmor)+2; // int gets rid of decimal point, random number from 2 to 1/3 armor
	
	double damage = hitPoints - numOfArmorIgnored;
    
	if(damage < 0){
        return 0;
    }
    return damage;
}