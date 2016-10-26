#include <iostream>
using namespace std;

// Implement this function to create the union of a and b into the array result!
void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
  int k = 0;
    for (int i = 0; i < l_a; i++) {
      result[i] = a[i];
      k++;
    }
    for (int i = 0; i < l_b; i++) {
      result[k] = b[i];
      k++;
     }
}

void safeUnion2(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
  for (int i = 0; i < l_res; i++) {
    if (i < l_a) {
      result[i] = a[i];
    }
    else {
      result[i] = b[i-l_b];
    }

  }
}

int main(int argc, char** argv) {
	int a[3] = {1,2,3};
	int b[3] = {4,5,6};
	int c[6];
	//safeUnion(a,3,b,3,c,6);
	//for (int i = 0; i<6; i++) cout <<c[i] << endl;
	safeUnion2(a,3,b,3,c,6);
	  for (int i = 0; i<6; i++) cout <<c[i] << endl;

}
