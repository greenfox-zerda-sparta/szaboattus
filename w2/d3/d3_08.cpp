#include <iostream>

using namespace std;

int main() {
  int high_number = 2;
  int low_number = 6655;

  cout << high_number <<"  "<< low_number<< endl;
  int* hight_number_pointer = &high_number;
  int* low_number_pointer = &low_number;
  // Please fix the problem and swap the value of the variables,
  // without using the "high_number" and the "low_number" variables.
  int temp_var_pointer = *hight_number_pointer;
  *hight_number_pointer = *low_number_pointer;
  *low_number_pointer = temp_var_pointer;
  cout << high_number <<"  "<< low_number;
  return 0;
}
