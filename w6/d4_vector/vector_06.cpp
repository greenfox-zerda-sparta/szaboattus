#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void vectorbuzz (vector<double> &V) {
  srand(time(0));
  int size = V.size();
  V[(rand() % (size-1))] += V[size-1];
  V.pop_back();
}

int main() {
	//create a vector of doubles with the size of 30, with every element equal of 1.5
	//create functions that takes this vector, pick the last element of it and adding its value to
	//an other item from the vector(this item place is random) and remove the last element at the end
	//run this function 20 times, then print every element of the vector

  vector<double> V(30,1.5);


  for (int i = 0; i < 20; i++) {
    vectorbuzz(V);
  }

  for (unsigned int i = 0; i < V.size(); i++) {
     cout << V[i] << "  ";
   }

  return 0;
}
