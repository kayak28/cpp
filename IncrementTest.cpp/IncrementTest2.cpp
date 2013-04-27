

#include <iostream>

using namespace std;

int main()
{
	int n = 2;
	int valueProduced = 2*(n++);
	int value = 2 * (++n);
	
	cout << "2 * (n++) =" << valueProduced << "\n";
	cout << "2 * (++n) =" << value << "\n"; 


	return 0;

}
