//this program demonstrate cin and cout with Strings 

#include <iostream>
#include <string> 

using namespace std;


int main()
{
	string dogName;
	int actualAge;
	int humanAge;

	cout << "What is your dogs name?" << endl; 
	cin >> dogName;
	
	cout << "How many years old is your dog?" << "\n";
	cin >> actualAge;
	humanAge = actualAge * 7;
	
	cout << dogName << "'s age is approximately\n" <<
		"equivalent to a " << humanAge << " year old human"
		<< "\n";
	//even though cout has sevral lines, comma is only one at the 
	//end of cout-statement; 
	return 0;


}//main
