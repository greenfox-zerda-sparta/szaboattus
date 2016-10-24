#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int k = 5;
	// tell if k is dividable by 3 or 5
	if ((k%3==0) || (k%5==0)){
		cout << "k osztható 3-al vagy 5 el";
	}
	return 0;
}
