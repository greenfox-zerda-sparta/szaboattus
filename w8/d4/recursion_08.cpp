#include <iostream>
#include <string>

using namespace std;

string remove_x(string str) {
  if (str[0] == 'x') {
    if (str.length() == 1) {
      return "";
    }
    else {
      str = str.substr(1);
      return remove_x(str);
    }
  }
  if (str.length() == 1) {
    return str;
  }
  else {
    return str[0] + remove_x(str.substr(1));
  }
}

int main() {
// Given a string, compute recursively a new string where all the 'x' chars have been removed.
  cout << remove_x("xaax");
  return 0;
}
