#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	//create a vector of integers with the size of 10, fill them with random numbers
	//create a vector of doubles and reserve place for 10 items
	//push an item to the end of the vector with the double places
	//print which vectors size is higher (and why?)


  unsigned int size = 10;
  vector<int> V;
  V.reserve(size);
  srand(time(0));

  for (unsigned int i = 0; i < size; i++) {
    V.push_back(rand()%11);
    cout << V[i] << " ";
  }

  vector<double> V_d;
  V_d.reserve(10);
  V_d.push_back(984);
  cout << endl << V_d[0];

  cout << endl << "int size vector: "  << V.size() << endl << "double vector size: " << V_d.size() << endl;

  return 0;
}
