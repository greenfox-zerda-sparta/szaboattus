#include <string>
#include <iostream>

using namespace std;

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg


struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

int sum_of_golds(Pirate* pirates, int length);
int average_of_golds (Pirate* pirates, int length);
string richest_with_woodleg (Pirate* pirates, int length);

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  int length = sizeof(pirates) / sizeof(pirates[0]) ;

  cout << sum_of_golds(pirates, length) << endl;
  cout << average_of_golds(pirates, length) << endl;
  cout << richest_with_woodleg(pirates, length) << endl ;
  return 0;
}

int sum_of_golds (Pirate* pirates, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += pirates[i].gold_count;
  }
  return sum;
}

int average_of_golds (Pirate* pirates, int length) {
  return sum_of_golds(pirates, length) / length;
}

string richest_with_woodleg (Pirate* pirates, int length) {
  int counter_richest = 0;
  int max_gold = 0;
  for (int i = 0; i < length - 1 ; i++) {
    if (pirates[i].has_wooden_leg == true && max_gold < pirates[i].gold_count) {
    counter_richest = i;
    max_gold = pirates[i].gold_count;
    }
  }
  return pirates[counter_richest].name;
}
