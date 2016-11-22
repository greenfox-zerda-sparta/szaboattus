#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.


vector <string> give_a_char(string text, char character) throw (const char*) {
  // exception
  unsigned int counter = 0;
  for (unsigned int i = 0; i < text.length(); i++) {
    if (text[i] == character) {
      counter++;
    }
  }
  if (counter == 0) {
    throw "The character is Not in the string";
  }

  //split function
  vector <string> temp;
  string oneword;
  for(unsigned int i = 0; i < text.length(); i++) {
    if (text[i] != character) {
      oneword += text[i];
    }
    else {
      temp.push_back(oneword);
      oneword = "";
    }
  }
  temp.push_back(oneword);

  return temp;
}

int main() {
  vector <string> texts;

  try {
    texts = give_a_char("Thisxisxsparta!", 'x');
  }
    catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }

  for (unsigned int i = 0; i < texts.size(); i++) {
    cout << texts[i] << endl;
  }

  return 0;
}
