#include <iostream>
#include <string>

using namespace std;

int calc_antlers(int reindeer_count) {
  if (reindeer_count == 0) {
    return reindeer_count;
  } else if (reindeer_count % 2 == 0) {
    return 3 + calc_antlers(reindeer_count - 1);
  } else {
    return 2 + calc_antlers(reindeer_count - 1);
  }
}

int main() {
// We have reindeers standing in a line, numbered 1, 2, ... The odd reindeers
// (1, 3, ..) have the normal 2 antlers. The even reindeers (2, 4, ..) we'll say
// have 3 antlers, because they each have a raised branch (how funny they are, arent they?).
// Recursively return the number of "antlers" in the reindeer line 1, 2, ... n (without loops or
// multiplication).

  int reindeer_count = 7;
  cout << calc_antlers(reindeer_count);
  return 0;
}
