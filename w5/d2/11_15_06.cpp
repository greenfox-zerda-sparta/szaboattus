#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string content_to_string (string filename);

int main() {
  // Write a function that reads the content of a file and
  //returns it as a string
  // It should take the filename as a string parameter

  cout << content_to_string("lol.txt") << endl;

  return 0;
}

string content_to_string (string filename) {
  ifstream myfile;
  myfile.open(filename);
  string file_content;
  string return_string;

  if(myfile.is_open()) {
        while(myfile >> file_content) {
          return_string += file_content + " ";
        }
    myfile.close();
    } else {
        std::cout << "could not open the file";
    }
  return return_string;
}
