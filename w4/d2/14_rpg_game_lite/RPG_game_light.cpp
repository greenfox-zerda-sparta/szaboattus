#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

//RPG Game lite
    //Create a Character class with the following preferences:

    //name
    //character type (player/monster)
    //health point value
    //attack value
    //defense value

    //attacking method which takes a character class and decreases its health
    //value with (current character class attack - input character class defense),
    //if the output is minus, then our health is decreased
    //set the attacking method to have 50% chance to count our attack value twice,
    //(2xcurrent attack - input defense) before calculating the final health points.

    //create 2 instances of the character class and fill their base stats from their constructor
    //make them attack each other with the attack method from the character class
    //after each round print both the attacker, and the attacked character health
    //make them fight each other until one of them has a health point lower or equal 0
    //print the winner and offer a new game

    //dont forget to use private variables, and get/set methods, and also place out_of_range
    //character class into a seperate file


int main() {
  Character player1 = Character("Micky", 1, 40, 10);
  Character player2 = Character("Bobby", 2, 20, 20);

  player1.attacking(player1, player2);
  cout << player2.get_hp() << endl;


  return 0;
}
