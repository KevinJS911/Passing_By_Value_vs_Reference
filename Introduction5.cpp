#include <iostream>

using namespace std;
 
int doubleit(int integer) {
	return integer * 2;
}

void refdoubleit(int& integer) {
	//Does not return anything; just overwriting the argument
	integer *=  2;
}

void pdoubleit(int* integer) {
	*integer *= 2;
}

int main(int argc, const char* argv[]) {
	
	//Easier to pass references than variables (esp when variables are large like arrays)
	
	//////////////////////
	int dirInt = 10; 
	cout << endl << "Before => dirInt: " << dirInt << endl;
	dirInt = doubleit(dirInt);
	cout << endl << "After => dirInt: " << dirInt << endl;
	
	//////////////////////
	
	int refInt = 33;
	cout << endl << "Before => refInt: " << refInt << endl;
	refdoubleit(refInt);
	cout << endl << "After => refInt: " << refInt << endl;

	//////////////////////
	
	int dirPointInt = 42;
	int* pDirPointInt = &dirPointInt;
	cout << endl << "Before => dirPointInt: " << dirPointInt << endl;
	pdoubleit(pDirPointInt);
	cout << endl << "After => dirPointInt: " << dirPointInt << endl;

	//////////////////////
	//Fastest way (only 1 key instead of 2 as above)
	// Basically removing line 38 

	int inDirectInt = 69;
	cout << endl << "Before => inDirectInt: " << inDirectInt << endl;
	pdoubleit(&inDirectInt);
	cout << endl << "After => inDirectInt: " << inDirectInt << endl;
	//////////////////////
	
	return 0;
}