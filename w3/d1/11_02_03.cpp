#include <iostream>

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

using namespace std;

int main() {
  int counter = 0;
  float sum = 0;
  double average = 0;
  cout << "Hány számot adnál meg?" << endl;
  cin >> counter;

  float * pointer = new float[counter];

  for (int i = 0; i<counter; i++) {
    cout << "Kérem a következő számot!" << endl;
    cin >> pointer[i];
    sum += pointer[i];
  }
  average = sum / (float)counter;
  cout << "Az átlag: " << average << endl;

  delete[] pointer;
  pointer = nullptr;
  return 0;
}
