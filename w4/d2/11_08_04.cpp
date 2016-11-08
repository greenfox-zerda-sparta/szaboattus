#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string change_name() {
     return this->name = "Második Kázmér";
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property

  Student student1("Első Huba", 26);
  cout << student1.greet() << endl;

  student1.change_name();
  cout << student1.greet() << endl;

  return 0;
}
