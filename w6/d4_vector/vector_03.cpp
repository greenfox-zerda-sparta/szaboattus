#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

  unsigned int size = 10;
  vector<int> V;
  V.reserve(size);
  srand(time(0));

  for (unsigned int i = 0; i < size; i++) {
    V.push_back(rand()%11);
    cout << V[i] << " ";
  }
  return 0;
}
