#include <iostream>
#include <string>
#include "ParentClass.h"
#include "ChildClass.h"

using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.

// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a ponter.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*
//

int main() {

  ParentClass* a = new ChildClass();

  cout << a->dogsear() << endl;
  cout << a->dogsearV() << endl;

  cout << endl << endl;

  cout << ((ChildClass*)a)->dogsear() << endl;
  cout << ((ChildClass*)a)->dogsearV() << endl;

return 0;
}
