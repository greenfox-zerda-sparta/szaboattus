#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	if (j1 > (pow (j2,2)) && (j1 < (pow (j2,3))) ){
		cout << "j1 nagyobb mint j2 a négyzeten és kisebb mint j3 a harmadikon";
	}
	return 0;
}
