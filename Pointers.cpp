//Pointers.cpp

#include <iostream>
using namespace std;

int main()
{
	int firstVal = 1;
	int secondVal = 2;
	int* pointer;
	cout << "\n-----intial values-----\n";
	cout << "firstVal = " << firstVal << "\n"; //=> firstval = 1
	cout << "secondVal = " << secondVal << "\n";//=> secondVal = 2
	cout << "pointer = " << pointer << "\n";//=> pointer = 0xb76aaff4

	pointer = &firstVal;
	*pointer = 10;
	cout << "pointer = " << pointer << "\n";//=> pointer = 0xbfaea1e4
	cout << "&firstVal = " << &firstVal << "\n";//=>&firstVal = 0xbfaea1e4
	cout << "firstVal = " << firstVal << "\n";//=> firstVal = 10;
	pointer = &secondVal;
	*pointer = 200;
	cout << "pointer = " << pointer << "\n";//=>pointer = 0xbfaea1e8
	cout <<  "&secondVal = " << &secondVal << "\n";//=> &secondVal = 0xbfaea1e8
	cout << "secondVal = " << secondVal << "\n";//=> secondVal = 200;

	return 0;
	
}