#include <iostream>
#include <string>

using namespace std;

template <class ATTUS>

void  addfirsttothird(ATTUS* array) {
  array[2]= array[0] + array[2];
}

int main() {
	// create a function templatf ite that takes fix long array
	// and add the 1st element of to the third

  int array[4] = {1, 2, 3, 4};
  addfirsttothird(array);
  cout << array[2];

  return 0;
}
