#include <iostream>
#include <string>
#include <vector>

using namespace std;

void incvector(vector<int> &vector) {
  for (unsigned int i = 0; i < 5; i++) {
    ++vector[i];
  }
}

int main() {
	//create a vector of vector of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector
	//create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

  vector<vector<int>> outerV(5,vector<int>(5,0));
  int x = 3;
  incvector(outerV[x-1]);

//cout!

  for (unsigned int i = 0; i < outerV.size(); i++) {
    cout << i+1 << ". vector elements: ";
    for (unsigned int j = 0; j < outerV[i].size(); j++) {
      cout << outerV[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
