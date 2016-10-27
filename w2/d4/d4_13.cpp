#include <iostream>
using namespace std;

int main() {


  //request data
  int dicenumber, diceside;
  cout << "Hány dobókocka?" << endl;
  cin >> dicenumber;
  cout << "Hány oldaluk van?" << endl;
  cin >> diceside;
  cout << dicenumber<< " db dobókockánk van, és " << diceside << " oldala van egy kockának. " << endl;;

  //init dice
  int dice[diceside];
  for (int i = 0; i < diceside; i++) {
    dice[i] = i+1;
  }

  //init results
  int results_sum = (diceside + diceside + 1);
  int results [(diceside + diceside + 1)];
  for (int i = 0; i < results_sum; i++) {
      results[i] = 0;
    }


  int sum = 0;
  int combinations = 0;

  //write plus
  for (int i = 0; i < diceside; i++) {
    for (int j = 0; j < diceside; j++) {
      cout << dice[i] << " + " << dice[j] << " = " << (dice[i] + dice[j]) << endl;
      combinations++;
      sum = dice[i] + dice[j];
      results[sum]++;
    }
  }

  //write possibility
  cout << "Lehetõségek száma:" << combinations << endl;
  for (int i = 2; i < results_sum; i++) {
    cout << i << " -> " << results[i] << endl;
  }

  return 0;
}
