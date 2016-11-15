#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open a file called "fourth-exercise.txt"
  // Print all of its lines to the terminal window

  ifstream myfile;
  myfile.open("fourth-exercise.txt");
  string file_content;

  if (myfile) {
    while(myfile >> file_content) {
      std::cout << file_content << std::endl;
    }
  }

  myfile.close();

  return 0;
}
