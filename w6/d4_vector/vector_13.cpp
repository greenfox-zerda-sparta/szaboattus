#include <iostream>
#include <string>
#include <vector>

using namespace std;

void drawMatrix(unsigned int x, vector<vector<int>> &outerV) {
  for (unsigned int i = 0; i < x; i++) {
    for (unsigned int j = 0; j < x; j++) {
      if (i == j || i == 0 || j == x -1) {
        outerV[i][j] = 1;
      }
    }
  }
}

void mirrorVertical(vector<vector<int>> &outerV) {
  unsigned int temp;
  for (unsigned int i = 0; i < outerV.size(); i++) {
    for (unsigned int j = 0; j < outerV.size() /2; j++) {
        temp = outerV[i][j];
        outerV[i][j] = outerV[i][(outerV.size() -1) -j];
        outerV[i][(outerV.size() -1) -j] = temp;
    }
  }
}

void mirrorHorizontal(vector<vector<int>> &outerV) {
  unsigned int temp;
  for (unsigned int i = 0; i < outerV.size() /2; i++) {
    for (unsigned int j = 0; j < outerV.size(); j++) {
        temp = outerV[i][j];
        outerV[i][j] = outerV[(outerV.size() -1) -i][j];
        outerV[(outerV.size() -1) -i][j] = temp;
    }
  }
}

int main() {
  //Create a 2 dimensional vector with matrix!
  // 1 0 0 0
  // 0 1 0 0
  // 0 0 1 0
  // 0 0 0 1
  // Extend it to the following format:
  // 1 1 1 1 1
  // 0 1 0 0 1
  // 0 0 1 0 1
  // 0 0 0 1 1
  // 0 0 0 0 1
  // Mirror it horizontaly!
  // Mirror it verticaly!

  unsigned int x = 5;
  vector<vector<int>> outerV(x,vector<int>(x,0));

  drawMatrix(x, outerV);
  //cout!
  for (unsigned int i = 0; i < outerV.size(); i++) {
      for (unsigned int j = 0; j < outerV[i].size(); j++) {
      cout << outerV[i][j] << " ";
      }
    cout << endl;
  }
  cout << endl;

  mirrorVertical(outerV);
  //cout!
  for (unsigned int i = 0; i < outerV.size(); i++) {
      for (unsigned int j = 0; j < outerV[i].size(); j++) {
      cout << outerV[i][j] << " ";
      }
    cout << endl;
  }
  cout << endl;

  mirrorHorizontal(outerV);
    //cout!
    for (unsigned int i = 0; i < outerV.size(); i++) {
        for (unsigned int j = 0; j < outerV[i].size(); j++) {
        cout << outerV[i][j] << " ";
        }
      cout << endl;
    }
    cout << endl;
  return 0;
}
