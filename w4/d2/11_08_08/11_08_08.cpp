#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
  Pirate pirate1 = Pirate();
  cout << "pirate1 eddig ennyiszer ivott: " << pirate1.get_drinking_times() << endl;

  pirate1.drink_rum();
  pirate1.drink_rum();
  pirate1.drink_rum();
  pirate1.drink_rum();


  cout << "pirate1 eddig ennyiszer ivott: " << pirate1.get_drinking_times() << endl;

  pirate1.hows_goin_mate();


    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  return 0;
}
