/*
 * Color.cpp
 *
 *  Created on: 2016 dec. 14
 *      Author: win7
 */

#include <sstream>
#include <iostream>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include "Color.h"


Color::Color() {
  this->red = 0;
  this->green = 0;
  this->blue = 0;
  std::cout << (int)red << " " << (int)green << " " << (int)blue << std::endl;
}

Color::Color(unsigned char _red, unsigned char _green, unsigned char _blue) {
  this->red = _red;
  this->green = _green;
  this->blue = _blue;
  std::cout << (int)red << " " << (int)green << " " << (int)blue << std::endl;

}

Color::Color(std::string hexa) {
  if (hexa[0] == '#') {
    hexa = hexa.erase(0, 1);
  }
  this->red = (unsigned char) hexadecimal_to_decimal(hexa.substr(0, 2));
  this->green = (unsigned char) hexadecimal_to_decimal(hexa.substr(2, 2));
  this->blue = (unsigned char) hexadecimal_to_decimal(hexa.substr(4, 2));

  std::cout << (int)red << " " << (int)green << " " << (int)blue << std::endl;
}

int Color::hexadecimal_to_decimal(std::string hexa) {
 int hexa_length = hexa.length();
 double decimal = 0;

 for (int i = 0; i < hexa_length; ++i) {
   char actual_character = hexa[i];

   if (actual_character >= 48 && actual_character <= 57)
     actual_character -= 48;
   else if (actual_character >= 65 && actual_character <= 70)
     actual_character -= 55;
   decimal += actual_character * pow(16, ((hexa_length - i) - 1));
 }

 return (int) decimal;
}

unsigned int Color::get_red() {
  return (int)red;
}

unsigned int Color::get_green(){
  return (int)green;
}

unsigned int Color::get_blue(){
  return (int)blue;
}

void Color::darken(float amount) {
  if (amount < 1 && amount > 0) {
    red -= red * amount;
    green -= green * amount;
    blue -= blue * amount;
  }
  else {
    std::cout << " give a number between 0 - 1 ";
  }
}

void Color::lighten(float amount) {
  int _red;
  int _green;
  int _blue;

  if (amount < 1 && amount > 0) {
    red += (255 - red) * amount;
    green += (255 - green) * amount;
    blue += (255 - blue) * amount;
  }
  else {
    std::cout << " give a number between 0 - 1 ";
  }
}

/*

Color Color::blend(const color & other) {

return
}
 */
