#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addvector(vector<vector<int>> &outerV) {
  outerV.push_back(vector<int>(5,2));
}

int main() {
	//create a vector of vector of integers, yeah a vector that holds vectors of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector at the begining
	//create a function that will add a new vector of integers to the end of our outer vector

  vector<vector<int>> outerV(5,vector<int>(5,0));

  addvector(outerV);

  for (unsigned int i = 0; i < outerV.size(); i++) {
    cout << i+1 << ". vector elements: ";
    for (unsigned int j = 0; j < outerV[i].size(); j++) {
      cout << outerV[i][j] << " ";
    }
    cout << endl;
  }

 return 0;
}
