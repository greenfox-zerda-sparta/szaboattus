/*
 * Color.h
 *
 *  Created on: 2016 dec. 14
 *      Author: win7
 */

#ifndef COLOR_H_
#define COLOR_H_

#include<string>

class Color {
private:
  unsigned char red;
  unsigned char green;
  unsigned char blue;
public:
  Color();
  Color(unsigned char, unsigned char, unsigned char);
  Color(std::string);
  Color(Color& other);
  unsigned int get_red();
  unsigned int get_green();
  unsigned int get_blue();
  static int hexadecimal_to_decimal(std::string hexa);
  void darken(float amount);
  void lighten(float amount);
// Color Color::blend(const color & other);

};


#endif /* COLOR_H_ */
