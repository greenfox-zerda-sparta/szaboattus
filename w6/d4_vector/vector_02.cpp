#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  //create an integer vector with the size of 5 and print all elements of it
  vector <int> V = {1,2,3,4,5};
  for (unsigned int i = 0; i < V.size(); i++) {
      cout << V[i] << " ";
  }

  return 0;
}
