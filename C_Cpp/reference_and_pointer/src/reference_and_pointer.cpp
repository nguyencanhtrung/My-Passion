//============================================================================
// Name        : reference_and_pointer.cpp
// Author      : Trung C. Nguyen
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int *ptr = (int *) malloc(4 * sizeof(int));
	int &ref = *ptr;

	*ptr = 4;
	cout << ref << endl;
	++ref;
	cout << *ptr << endl;
	return 0;
}
