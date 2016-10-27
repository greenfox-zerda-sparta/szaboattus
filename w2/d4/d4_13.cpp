//============================================================================
// Name        : d4_13.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int dice[] = {1, 2, 3, 4, 5, 6};
  int length = sizeof(dice) / sizeof(int);
  int combinations = 0;
  int results [length+length] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int sum = 0;
  int results_numb = sizeof(results) / sizeof(int);

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << dice[i] << " + " << dice[j] << " = " << (dice[i] + dice[j]) << endl;
      combinations++;
      sum = dice[i] + dice[j];
      results[sum]++;
    }
  }
  cout << combinations << endl;

  for (int i = 0; i < results_numb; i++) {
    cout << i << " -> " << results[i] << endl;
  }

	return 0;
}
