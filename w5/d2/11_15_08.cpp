#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copy_file_content (string filename1, string filename2);

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful

  copy_file_content ("textfile1.txt","textfile2.txt");
  return 0;
}

bool copy_file_content (string filename1, string filename2) {

  string temp = "";
  string temp_word = "";
  ifstream infile;
  ofstream outfile;
  infile.open(filename1);
  outfile.open(filename2);

  if (infile.is_open()) {
    while(infile >> temp_word) {
      outfile << temp_word + " ";
    }
  }
  else {
    cout << "copy failed" << endl;
    return 0;
  }

  infile.close();
  outfile.close();
  return 1;
}
