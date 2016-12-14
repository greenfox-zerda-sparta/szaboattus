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
}

Color::Color(unsigned char _red, unsigned char _green, unsigned char _blue) {
  this->red = _red;
  this->green = _green;
  this->blue = _blue;
}

Color::Color(std::string hexa) {
  if (hexa[0] == '#') {
    hexa = hexa.erase(0, 1);
  }
  this->red = (unsigned char) hexadecimal_to_decimal(hexa.substr(0, 2));
  this->green = (unsigned char) hexadecimal_to_decimal(hexa.substr(2, 2));
  this->blue = (unsigned char) hexadecimal_to_decimal(hexa.substr(4, 2));
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

unsigned char Color::get_red() {
  return red;
}

unsigned char Color::get_green(){
  return green;
}

unsigned char Color::get_blue(){
  return blue;
}

void Color::set_red(unsigned char x) {
  this->red = x;
}
void Color::set_green(unsigned char x) {
  this->green = x;
}
void Color::set_blue(unsigned char x) {
  this->blue = x;
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
  if (amount < 1 && amount > 0) {
    red += (255 - red) * amount;
    green += (255 - green) * amount;
    blue += (255 - blue) * amount;
  }
  else {
    std::cout << " give a number between 0 - 1 ";
  }
}

Color Color::blend(const Color& other) {
  Color newcolor;

  newcolor.set_red((red + other.red) / 2);
  newcolor.set_green((green + other.green) / 2);
  newcolor.set_blue((blue + other.blue) / 2);

  return newcolor;
}
