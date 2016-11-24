#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

  //create a vector of integers with the size of 20
  //fill this vector with random numbers from 0 to 10
  //print the items of the vector
  //remove the even numbers, then print the items again

  srand(time(0));
  vector<int> V;

  //fill
  for (int i = 0; i < 10; i++) {
    V.push_back(rand() % 11);
    cout << V[i] << " " << endl;
  }

  //remove even numbers
  for (unsigned int i = 0; i < V.size(); i++) {
    if (V[i] % 2 == 0) {
      V.erase(V.begin()+i);
      i--;
    }
  }

  //cout
  for (unsigned int i = 0; i < V.size(); i++) {
     cout << V[i];
  }


  return 0;
}
