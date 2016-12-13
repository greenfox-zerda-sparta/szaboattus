#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

vector <string> get_input() {
  string name = "";
  vector <string> names;
  while (name != "q"){
    cin >> name;
    if (name == "q") break;
    names.push_back(name);
  }
  if (names.size() % 2 !=0) {
    cout << "give one more name" << endl;
    cin >> name;
    names.push_back(name);
  }
  return names;
}

bool same_names(vector <string> names, vector <string> shuffled_names) {
  for (unsigned int i = 0; i < shuffled_names.size(); i++) {
    if (names[i] == shuffled_names[i]) {
      return 0;
    }
  }
  return 1;
}

map <string,string> make_shuffle (vector <string> names) {
  map <string,string> m;
  vector <string> vector_shuffle = names;
  while (same_names(names,vector_shuffle) != 1){
    random_shuffle(vector_shuffle.begin(), vector_shuffle.end());
  }
  for (unsigned int i = 0; i < vector_shuffle.size(); i++) {
    m[names[i]] = vector_shuffle[i];
  }
  return m;
}

int main() {
  map <string,string> m;

  vector <string> vector_names = get_input();
  m = make_shuffle(vector_names);

  for (map<string,string>::iterator it = m.begin(); it !=m.end(); it++) {
        cout << it->first << " .. " << it->second << endl;
  }
}
