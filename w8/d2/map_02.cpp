#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// create a function that prints a vector using iterators

void print(int x) {
  cout << x << endl;
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  for_each (v.begin(), v.end(), print);

  return 0;
}
