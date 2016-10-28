#include <iostream>
using namespace std;

int request_data ();
int init_dice (int diceside, int dice[]);

int main() {

  int diceside = request_data ();

  int dice[diceside];
  init_dice (diceside, dice);

  int results_sum = (diceside + diceside + 1);
  int results [(diceside + diceside + 1)];
  for (int i = 0; i < results_sum; i++) {
          results[i] = 0;
        }

  int sum = 0;
  int combinations = 0;

  for (int i = 0; i < diceside; i++) {
    for (int j = 0; j < diceside; j++) {
      // cout << dice[i] << " + " << dice[j] << " = " << (dice[i] + dice[j]) << endl;
      combinations++;
      sum = dice[i] + dice[j];
      results[sum]++;
    }
  }

  cout << "Lehetosegek szama:" << combinations << endl;
  for (int i = 2; i < results_sum; i++) {
    cout << "Osszeg: " << i << " -> " << results[i] << " esetben fordulhat elo." << endl;
  }

  return 0;
}

int request_data () {
  int diceside;
  cout << "Hany oldala legyen a kockanak?" << endl;
  cin >>diceside;
  cout << diceside << " oldala van egy kockanak. " << endl;
  return diceside;
}

int init_dice (int diceside, int dice[]) {
  for (int i = 0; i < diceside; i++) {
    dice[i] = i+1;
  }
  return 0;
}
