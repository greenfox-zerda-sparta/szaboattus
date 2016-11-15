#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Create a program that decrypts the file called "duplicated-chars.txt",
  // and pritns the decrypred text to the terminal window.


  string temp_string;
  ifstream myfile;
  myfile.open("duplicated-chars.txt");

  if (myfile.is_open()) {
    while(getline(myfile,temp_string)) {
     for (unsigned int i = 0; i < temp_string.length(); i++ ) {
       if (i % 2) {
         cout << temp_string[i];
       }
     }
     cout << endl;
    }
  }
  return 0;
}
