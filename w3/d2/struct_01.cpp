#include <string>
#include <iostream>

using namespace std;

// Change the name of the computer to "Macbook Pro" and print all the stats

struct Computer {
  string name;
  float cpu_speed_hz;
  float ram_size;
};

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};
  computer.name = "Macbook Pro";
  cout << computer.name << " " << computer.cpu_speed_hz << " " << computer.ram_size;

  return 0;
}
