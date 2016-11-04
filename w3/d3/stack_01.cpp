//============================================================================
// Name        : stack_01.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//===================================================
#include <iostream>
using namespace std;

struct Stack {
  double* data;
  int size;
};

Stack* stack_construct(double input[], int size);
void stack_push(Stack& the_stack, double value);
double stack_pop(Stack& the_stack);
bool is_stack_empty(Stack& the_stack);

int main() {

  double array[3] = {1, 2, 3};
  Stack* the_stack = stack_construct(array, 3);

  cout << "első méret: " << the_stack->size << endl;
  stack_push(*the_stack, 11);
  cout << "az új méret: " << the_stack->size << endl;
  cout << stack_pop(*the_stack) << endl;
  cout << stack_pop(*the_stack) << endl;
  cout << stack_pop(*the_stack) << endl;
  cout << stack_pop(*the_stack) << endl;

  if (is_stack_empty(*the_stack)) {
    cout << "üres a stack" << endl;
  }
  else{
    cout << "nem üres a stack" << endl;
  }

  return 0;
}

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack -> data = new double[size];
  for (int i = 0; i < size; i++) {
  new_stack -> data[i] = input[i];
    }
  new_stack -> size = size;
  return new_stack;
  }

void stack_push(Stack& the_stack, double value) {
  double* new_array = new double[++the_stack.size];
  for (int i = 0; i < the_stack.size; i++) {
  new_array[i] = i < the_stack.size-1 ? the_stack.data[i] : value;
  }
  delete[] the_stack.data;
  the_stack.data = new_array;
}

double stack_pop(Stack& the_stack) {
   double result = the_stack.data[the_stack.size-1];
   double* new_array = new double[--the_stack.size];
   for (int i = 0; i < the_stack.size; i++) {
     new_array[i] = the_stack.data[i];
   }
   delete[] the_stack.data;
   the_stack.data = new_array;
   return result;
}

bool is_stack_empty(Stack& the_stack) {
  return the_stack.size == 0;
}

