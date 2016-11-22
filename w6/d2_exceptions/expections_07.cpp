#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.



const char* return_text(int x) throw (int, const char*) {
  if(x > 5) {
    throw 5;
  }
  if(x < 0) {
    throw "the argument is a negative number";
  }
  const char* sentence[6] = {"What", "a", "pleasant", "surpries", "this", "is."};

  return sentence[x-1];
}

int main() {
  string text;
  try {
  text = return_text(-4);
  cout << text << endl;
  }
  catch (int x) {
    cout << "The argument is higher than 5" << endl;
  }
  catch (const char* error) {
    cout << error << endl;
  }
  return 0;
}
