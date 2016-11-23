#include <iostream>
#include <string>

using namespace std;

template <class ATTUS>

void sort (ATTUS x, ATTUS* array) {
  ATTUS temp;
  bool swapped = true;
  int j;
  while (swapped) {
    swapped = false;
    j++;
    for (int i = 0; i < x - j; i++) {
      if (array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = true;
      }
    }
  }
}

int main() {
	// create a function template that takes an array and sort it in a descending order
  int x = 4;
  int array[x] = {1, 2, 3, 4};

  sort(x, array);
  for (int i = 0; i < x; i++) {
    cout << array[i] << " ";
  }

  return 0;
}
