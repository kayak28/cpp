


#include <iostream>

using namespace std;

int main()
{
	int n = 8;
	int value1 = n--;
	
	cout << "post-decrement test\n declear n = 8";
	cout << "\nn-- =" << value1;
	cout << "\nthen n is changed n =" << n;


	int m = 8;
	int value2 = --m;
	
	cout << "pre-decrement test\n declear m = 8";
	cout << "\n--m ="<< value2;
	cout << "\nthen m is changed m =" << m;

	return 0; 

}
