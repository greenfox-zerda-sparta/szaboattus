/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

Triangle::Triangle(){}

void Triangle::draw_triangle(int length) {
  this->length = length;

  for (int i = 1; i <= length; i++) {
    for (int k = 1; k <= i; k++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void Triangle::draw_double_triangle(int length) {
this->length = length;
int k = 0;
for(int i = 1; i <= length; ++i) {
        for(int space = 1; space <= length -i; ++space) {
           cout<<"  ";
        }
        while(k!=2*i-1) {
           cout<<"* ";
           ++k;
        }
        k=0;
        cout << endl;
    }
}

void Triangle::draw_diamond(int length) {
  this->length = length;
  int k = 0;
  for(int i = 1; i <= length; ++i) {
          for(int space = 1; space <= length -i; ++space) {
             cout<<"  ";
          }
          while(k!=2*i-1) {
             cout<<"* ";
             ++k;
          }
          k=0;
          cout << endl;
      }

  k = 0;
  for(int i = length-1; i >= 1; --i) {
          for(int space = 0; space<length -i; ++space)
             cout<<"  ";
          for(k=i; k<=2*i-1; ++k)
             cout<<"* ";
          for(k=0; k<i-1; ++k)
             cout<<"* ";
          cout<<endl;
      }
}

