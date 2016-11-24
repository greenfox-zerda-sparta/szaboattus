#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  //find how much integer divisor 2400 has
	//create a vector of doubles, reserve place for the divisors of 2400
	//fill this places with random numbers from 0 to 2400
	//sort them in ascending order

  srand(time(0));

  unsigned int size;
//find how much integer divisor 2400 has
  for (int i = 1; i <= 2400; ++i){
      if (2400 % i == 0)
          size++;
  }
  cout << "divisors: " <<size << endl;
  //create a vector of doubles, reserve place for the divisors of 2400
  vector<double> V;
  V.reserve(size);

//fill this places with random numbers from 0 to 2400
  for(unsigned int i = 0; i < size; i++) {
    V[i] = (rand() % 2400);
  }

  bool swapped = true;
  int j = 0;
  int temp;
  while (swapped) {
    swapped = false;
    j++;
    for (unsigned int i = 0; i < size - j; i++) {
      if (V[i] > V[i + 1]) {
      temp = V[i];
      V[i] = V[i + 1];
      V[i + 1] = temp;
      swapped = true;
      }
    }
  }

//cout!
  cout << "after the sorting: ";
  for (unsigned int i = 0; i < size; i ++) {
    cout << V[i] << " ";
  }

  return 0;
}
