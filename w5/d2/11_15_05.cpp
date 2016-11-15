#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error

  string file_content;
  ifstream myfile;
  myfile.open("fifth-exercise.txt");

  if(myfile.is_open()) {
      while(myfile >> file_content) {
        std::cout << file_content << std::endl;
      }
  myfile.close();
  } else {
      std::cout << "could not open the file";
      return 2;
  }

  return 0;
}
