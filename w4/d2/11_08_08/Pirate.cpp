/*
 * Pirate.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

Pirate::Pirate(){
  drinking_times=0;
}

 int Pirate::get_drinking_times() {
   return drinking_times;
 }


 void Pirate::drink_rum() {
   drinking_times = drinking_times + 1;
 }

 void Pirate::hows_goin_mate() {
   if (drinking_times >= 5) {
     cout << "Arrrr!!" << endl;
   }
   else {
     cout << "Nothin' bro..." << endl;
   }
 }
