#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void string_to_file(string filename, string content);

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter

  string_to_file("asdasd.txt", "Ezt a szart tedd bele az asdasd-ba.");

  return 0;
}

void string_to_file(string filename, string content) {
  ofstream myfile;
  myfile.open(filename);

  if (myfile.is_open()) {
    myfile << content;
    myfile.close();
    }
  else {
    cout << "could not open the file";
  }
}
