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

void GameLogic::set_grid_value(int x, int y, int gamer) {
  (gamer % 2) ? V[y][x] = 1 : V[y][x] = 2;
}

bool GameLogic::check_row(int x, int y) {
  int counter = 1;
  if (y < 15){
    while (counter < 5 && V[x][y] == V[x][y+1]) {
      y++;
      counter++;
    }
  }
  return counter >= 5;
}

bool GameLogic::check_column(int x, int y) {
  int counter = 1;
  if (x < 15){
    while (counter < 5 && V[x][y] == V[x+1][y]) {
      x++;
      counter++;
    }
  }
  return counter >= 5;
}

bool GameLogic::check_diagonal_down(int x, int y) {
  int counter = 1;
  if (x < 15 && y < 15){
    while (counter < 5 && V[x][y] == V[x+1][y+1]) {
      x++;
      y++;
      counter++;
    }
  }
  return counter >= 5;
}

bool GameLogic::check_diagonal_up(int x, int y) {
  int counter = 1;
  if (x < 15 && y < 15){
    while (counter < 5 && V[x][y] == V[x-1][y+1]) {
      x--;
      y++;
      counter++;
    }
  }
  return counter >= 5;
}

bool GameLogic::check_four_direction(int x, int y) {
  return check_column(x,y) || check_row(x,y) || check_diagonal_down(x,y) || check_diagonal_up(x,y);
}

bool GameLogic::iswinner() {
  bool iswinner = false;
  for (unsigned int i = 0; i < V.size(); i++) {
    for (unsigned int j = 0; j < V.size(); j++) {
      if (V[i][j] !=0) {
        if (check_four_direction(i,j)) {
          iswinner = check_four_direction(i,j);
        }
      }
    }
  }
  return iswinner;
}

void GameLogic::draw_vector() {
  for (unsigned int i = 0; i < V.size(); i++) {
    for (unsigned int j = 0; j < V.size(); j++) {
      std::cout << V[i][j] << " ";
    }
    std::cout << endl;
  }
  std::cout << "-------------------- " << endl;
}
