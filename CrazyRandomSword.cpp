/* 
 * File:   CrazyRandomSword.cpp
 * Author: Ian <imd15@my.fsu.edu>
 *  
 */

#include <stdlib.h>
#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
	int newArmor = armor/3;
	int numOfArmorIgnored = rand()%(newArmor)+2;
	
	double damage = hitPoints - numOfArmorIgnored;
    
	if(damage < 0){
        return 0;
    }
    return damage;
}