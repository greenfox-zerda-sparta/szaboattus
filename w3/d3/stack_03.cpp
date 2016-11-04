//============================================================================
// Name        : stack_03.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Vector {
  double* array;
  unsigned int size;
};

Vector* vector_construct(double input[], int size);
double vector_at(Vector& v, unsigned int index);
unsigned int* vector_find(Vector& v, double value);

int main() {

  double array[5] = {2, 2, 2, 2, 5};
  Vector *vector  = vector_construct(array, 5);
  cout << "Alap méret: " << vector->size << endl;

  //At
  cout << "Kérem a 5. elemet: " << vector_at(*vector, 2) << endl;

  //Index

  //Find
  vector_find(*vector, 2);

  return 0;
}

Vector* vector_construct(double input[], int size) {
  Vector* new_vector = new Vector;
    new_vector -> array = new double[size];
    for (int i = 0; i < size; i++) {
    new_vector-> array[i] = input[i];
    cout << "A tömb " << i << ". eleme: " <<new_vector -> array[i] << endl;
      }
    new_vector-> size = size;
    return new_vector;
}

double vector_at(Vector& vector, unsigned int index) {
  if (index > vector.size) {
    return 0;
  }
  return vector.array[index - 1];
}

unsigned int* vector_find(Vector& vector, double value) {
  unsigned int find_array[vector.size];
  int count;

  for (unsigned int i = 0; i < vector.size; i++) {
    if (vector.array[i] == value ) {
      find_array[i] = i;
      count++;
      cout << value << " szám a tömb: " << i+1 << ". értéke" << endl;
    }
  }

  // not finished:
//  unsigned int* new_array = new unsigned int [count];
//  new_array = *find_array;
//  return *new_array;
}
