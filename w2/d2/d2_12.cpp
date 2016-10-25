#include <iostream>
#include <string>
#include <array>

using namespace std;

int  mysum(int array[], int length){
	int sum=0;
	for(int i=0; i<length; i++){
//	sum=sum+array[i];
		cout<<array[i]<<endl;
		sum=array[i]+sum;
	}
	cout<<sum;
	return sum;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  // write your own sum function
  // it should take an array and it's length
  int length;
  length = sizeof(numbers)/sizeof(int);
  mysum(numbers,length);
  return 0;
}
