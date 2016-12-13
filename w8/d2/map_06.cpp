#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice’s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?


void toLowerCaseSTD(string &str)
{
  transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void just_word (string &word) {
  string temp="";
  for (unsigned int i = 0; i < word.length(); i++) {
    if (word[i] > 91 && word[i] < 123 ) {
      temp += word[i];
    }
    else if (word[i+1] > 91 && word[i+1] < 123) {
      temp += word[i];
    }
  }
  word = temp;
}

vector <string> input() {
  vector <string> text;
  ifstream file;
  file.open ("alice_in_wonderland.txt");
  if (!file.is_open()) return text;
  string word;
  while (file >> word) {
    toLowerCaseSTD(word);
    just_word(word);
    text.push_back(word);
  }
  return text;
}

int count_letters(vector <string> &text, string word) {
  int counter = 0;
  for (unsigned int i = 0; i < text.size(); i++) {
    if (text[i] == word) {
      counter++;
    }
  }
  return counter;
}

map<string, int> give_a_map(vector <string> text) {
  map<string, int> m;

  for (unsigned int i = 0; i < text.size(); i++) {
    m[text[i]] = count_letters(text,text[i]);
  }

  return m;
}

int main () {


  ofstream myfile;
  myfile.open ("result.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();

  map<string, int> m;
  vector <string> result = input();

  m = give_a_map(result);

  for (map<string,int>::iterator it = m.begin(); it !=m.end(); it++) {
        cout << it->first << " --> " << it->second << endl;
  }

  return 0;
}
