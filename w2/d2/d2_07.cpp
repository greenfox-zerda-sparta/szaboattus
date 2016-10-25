#include <iostream>
#include <string>

using namespace std;

int main() {
  char g1 = 'a';
  double g2 = 12.345;
  // Tell if g1 is stored in more bytes than g2
  	  if (sizeof(g1) > sizeof(2)){
  		  cout<<"g1 is bigger than g2";
  	  }else {
  		  cout<<"g1 is smaller than g2;";
  	  }
  return 0;
}
