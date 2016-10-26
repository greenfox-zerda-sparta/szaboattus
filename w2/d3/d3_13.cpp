#include <iostream>
#include <string>
using namespace std;

// Create a function that prints each word in a string into a new line!
// Create an other function that takes a string and an array of strings as it's input
// and puts each word in the original string into a new element in the array of strings.
// Decide which argument should be a pointer and which shouldn't.
// In the main function, print out each element of the array into a new line!

string endl_after_word (string text) {
  for (int i = 0; text[i] != '\0'; i++) {
    if (text[i] != ' ') {
      cout << text[i];
    }
    else {
      cout << endl;
    }
  }
  return text;
}

int main(int argc, char **argv){

  string text = "Ma szerda van egyébként";

  endl_after_word(text);

	return 0;
}
