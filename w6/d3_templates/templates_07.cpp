#include <iostream>
#include <string>
using namespace std;

template <class T>

class Temp {
private:
  T item1;

public:
  Temp();
  T getTemp();
  void setTemp(T x);
};

template <class T>
Temp<T>::Temp() {
  item1 = 1;
}

template <class T>
T Temp<T>::getTemp() {
  return this->item1;
}

template <class T>
void Temp<T>::setTemp(T x) {
  this->item1 = x;
}

int main() {
	//Create a simple class template which contains 2 item and has both a get and a set method for these!

  Temp<int> tempecske;

  tempecske.setTemp(4);
  cout << tempecske.getTemp();

  return 0;
}
