#include <iostream>
#include <string>
#include <map>

using namespace std;

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

int count_letters(string text, char x) {
  int counter = 0;
  for (unsigned int i = 0; i < text.length(); i++) {
    if (text[i] == x) {
      counter++;
    }
  }
  return counter;
}

map<char, int> give_a_map(string text) {
  map<char, int> m;

  for (unsigned int i = 0; i < text.length(); i++) {
    m[text[i]] = count_letters(text,text[i]);
  }

  return m;
}

int main() {
  map<char, int> m;
  m = give_a_map("makika");

  for (map<char,int>::iterator it = m.begin(); it !=m.end(); it++) {
      cout << it->first << " .. " << it->second << endl;
  }
  return 0;
}
