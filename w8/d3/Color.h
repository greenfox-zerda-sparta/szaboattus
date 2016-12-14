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

  unsigned char get_red();
  unsigned char get_green();
  unsigned char get_blue();

  void set_red(unsigned char x);
  void set_green(unsigned char x);
  void set_blue(unsigned char x);

  static int hexadecimal_to_decimal(std::string hexa);
  void darken(float amount);
  void lighten(float amount);
  Color blend(const Color& other);
  Color operator+(const Color& other);
  //operator++ (const Color& other);
};


#endif /* COLOR_H_ */
