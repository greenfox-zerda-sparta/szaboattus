#include <iostream>
#include <string>

using namespace std;

int main() {
	string m = "Apple";
	int  i = 1;
	//fill the m variable with its content 4 times
	do {
		m+=m;
		i++;
	}
	while (i<=2);
	cout << m;
	return 0;
}
