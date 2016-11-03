#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int get_surface(RectangularCuboid cuboid);
int get_volume(RectangularCuboid cuboid);

int main() {
  RectangularCuboid cuboid = { 10, 10, 10};
  cout << get_surface(cuboid) << endl;
  cout << get_volume(cuboid);
  return 0;
}

int get_surface (RectangularCuboid cuboid) {
  return 2 * ((cuboid.a * cuboid.b) + (cuboid.a * cuboid.c) + (cuboid.b * cuboid.c));
}

int get_volume (RectangularCuboid cuboid) {
  return cuboid.a * cuboid.b * cuboid.c;
}
