#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  for (vector <int>::iterator it = v.begin(); it != v.begin()+5; it++) {
    cout << *it << endl;
  }

  // Print the first 5 elements of the vector using iterators

  return 0;
}
