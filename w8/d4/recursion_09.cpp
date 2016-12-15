#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string add_star(string str) {
  string neword = "";
  if (str.length() > 0) {
    neword += str[0];
    neword += '*';
    str.erase(0, 1);
    return  neword += add_star(str);
  }
  else {
  return "";
  }
}

int main() {
  // Given a string, compute recursively a new string where all the
  // adjacent chars are now separated by a "*".
  string str = "ab";
  cout << add_star(str);
  return 0;
}
