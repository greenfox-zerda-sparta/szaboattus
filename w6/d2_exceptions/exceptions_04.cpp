#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string text, unsigned int index) throw (const char*) {
 string* parts = new string[2];
 if (text.length() < index){
   throw "index is out of bounds";
 }
 for (unsigned int i = 0; i < index; i++) {
   parts[0] += text[i];
 }
 for (unsigned int i = index; i < text.length(); i++) {
    parts[1] += text[i];
 }
 return parts;
}

int main() {

  try {
    string* texts = split("theking",3);
    cout << "1. part: " << texts[0] << endl << "2. part: " << texts[1] << endl;
    delete[] texts;
  }
  catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }
  return 0;
}
