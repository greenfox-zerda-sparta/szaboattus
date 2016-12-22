/*
 * GameLogic.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: win7
 */

#include "GameLogic.h"
#include <iostream>

GameLogic::GameLogic() {
  this->V = vector <vector<int> > (19, vector<int>(19,0));
}

vector <vector<int>>& GameLogic::get_V() {
  return V;
}

void GameLogic::set_get_V(pair <int, int> coordinates) {
  V[coordinates.first][coordinates.second] = 1;
}

bool GameLogic::check_row(vector <vector<int>> V) {
  int sum = 0;
  bool iswinner = false;
  for (unsigned int i = 0; i < V.size(); i++) {
    for (unsigned int j = 0; j < V.size(); j++) {
      if(V[i][j] == 1 && sum < 5) {
        sum++;
      }
      else if(sum == 5){
        iswinner = 1;
        break;
      }
      else{
        iswinner = 0;
        sum = 0;
      }
    }
    if(iswinner) break;
  }
  return iswinner;
}

bool GameLogic::check_column(vector <vector<int>> V) {
  int sum = 0;
  bool iswinner = false;
  for (unsigned int i = 0; i < V.size(); i++) {
    for (unsigned int j = 0; j < V.size(); j++) {
      if(V[j][i] == 1 && sum < 5) {
        sum++;
      }
      else if(sum == 5){
        iswinner = 1;
        break;
      }
      else{
        iswinner = 0;
        sum = 0;
      }
    }
    if(iswinner) break;
  }
  return iswinner;
}

bool GameLogic::check_diagonal_right(vector <vector<int>> V) {
}

void GameLogic::add_ones() {
  V[0][4] = 1;
  V[1][3] = 1;
  V[2][2] = 1;
  V[3][1] = 1;
  V[4][0] = 1;
  V[8][0] = 1;

}

void GameLogic::draw_vector() {
  for (unsigned int i = 0; i < V.size(); i++) {
    for (unsigned int j = 0; j < V.size(); j++) {
      std::cout << V[i][j] << " ";
    }
    std::cout << endl;
  }
}

