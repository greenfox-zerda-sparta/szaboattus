#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addtovector(vector<char> &V) {
  char x;

  for (unsigned int i = 0; i < 3; i++) {
    cout << "give a char!" << endl;
    cin >> x;
    V.push_back(x);
   }
}

int main() {
  //create a vector of chars with the size of zero;
  //write a function where the user can add characters to the end of this vector

  vector<char> V;
  addtovector(V);

  for (unsigned int i = 0; i < 3; i++) {
    cout << V[i] << " ";
  }

  return 0;
}
