/*
 * GameLogic.h
 *
 *  Created on: 2016 dec. 21
 *      Author: win7
 */

#ifndef GAMELOGIC_H_
#define GAMELOGIC_H_
#include <vector>
#include "SDLwindow.h"

using namespace std;

class GameLogic {
private:
  vector <vector<int>> V;
public:
  GameLogic();
  bool check_row(int x, int y);
  bool check_column(int x, int y);
  bool check_diagonal_down(int x, int y);
  bool check_diagonal_up(int x, int y);
  bool check_four_direction(int x, int y);
  vector <vector<int>>& get_V();
  void set_grid_value(int, int, int gamer);
  void draw_vector();
  bool iswinner();
  bool allow_to_step(int x, int y);
};

#endif /* GAMELOGIC_H_ */
