#include <iostream>
#include <string>

using namespace std;



class House {
  private:

    string address;
    unsigned int area;
    unsigned int price;
  public:

    House (string address, unsigned int area) {
      this->address = address;
      this->area = area;
      this->price = area * 400;
    }

  unsigned int get_price() {
    return this->price;
    }
};

int main() {
  // The market price of the houses is 400 EUR / square meters
  // Create a constructor for the House class that takes it's address and area.
  House house = House("Andrassy 66", 349);
  cout << "This house price is: " << house.get_price();

  return 0;
}
