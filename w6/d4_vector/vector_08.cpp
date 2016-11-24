#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  //create a vector of characters with the size of 8
  //ask the user to fill this vector with characters one by one
  //at the end make sure the vector holds the letters of "GREENFOX"
  //so correct the user if he/she gives a different letter from the one we want them to give :)

  vector<char> V;
  vector<char> base ={'g','r','e','e','n','f','o','x'};
  char temp;

  unsigned int i = 0;

  while (i < 8) {
    cout << "Give a char!" << endl;
    cin >> temp;
    V.push_back(temp);
    if (V[i] == base[i]) {
      i++;
    }
    else {
     cout << "wrong " << i+1 << ". element.";
     V.pop_back();
    }
  }

  for (unsigned int i = 0; i < V.size(); i++) {
     cout << V[i] << " ";
   }

   return 0;
}
