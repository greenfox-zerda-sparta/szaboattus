#include <iostream>

using namespace std;

// Please allocate a 10 long array and fill it with numbers from 0 to 9, then print the whole array
// Please delete the array before the program exits

int main() {
  int* pointer = new int[10];
    for (int i = 0; i < 10; i++) {
      pointer[i] = i;
      cout << pointer[i] << endl;
    }

    delete[] pointer;
    pointer = nullptr;
    return 0;
  }
