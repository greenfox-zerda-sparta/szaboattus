#include <string>
#include <iostream>

using namespace std;

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

struct House {
  string address;
  short int rooms;
  int area;
  long int price;
};

bool buy_or_not(House &house1);
int count_of_havetobuy(House* houses, int length);
void new_houses(House* houses, int length);

int main(){

  House house1 =  {"1135, Dévényi u. 8.", 10600, 1, 30};
  House houses[5] = {
      {"1135, Dévényi u. 8.", 1, 30, 10600},
      {"1134, Csángó u. 10.", 2, 42, 13000},
      {"3242, Kossuth u. 10.", 4, 70, 6000},
      {"2112, József u. 77.", 4, 110, 19000},
      {"2342, Piros u. 10.", 4, 145, 83000}

  };
  int length = 5;

  if (buy_or_not(house1) == 0) {
    cout << "Nem éri meg megvenni a házat" << endl;
  }
  else {
    cout << "Vedd meg a házat!" << endl;
  }

  cout << "Megvásárolandó házak száma:" << count_of_havetobuy(houses, length) << endl;

  new_houses(houses, length);

  return 0;
}


bool buy_or_not(House &house1) {
  bool buy_it_or_not;
  int marketprice = house1.area * 400;
    if (marketprice > house1.price) {
    buy_it_or_not = 1;
    }
    else {
    buy_it_or_not = 0;
    }

  return buy_it_or_not;
}

int count_of_havetobuy(House* houses, int length) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (buy_or_not(houses[i]) == 1){
      count++;
    }
  }
  return count;
}

void new_houses(House* houses, int length) {
  House new_houses[length];
  for (int i = 0; i < length; i++) {
  new_houses[i].address = houses[i].address;
  new_houses[i].area = houses[i].area;
  new_houses[i].rooms = houses[i].rooms;
  new_houses[i].price = new_houses[i].area * 400;

  cout <<  new_houses[i].address << " | " << new_houses[i].area << " | " << new_houses[i].rooms << " | " << new_houses[i].price << endl;

  }
}
