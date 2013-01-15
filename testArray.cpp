//test array program with cpp 


//# include "stdafx.h"only for windows
#include <iostream>
#include <wchar.h>

using namespace std;

int a[10];
int b[1000];
char c [10];
wchar_t k[10];

int main()
{
	int i;
 	std::cout << "test Array";
	for(i =0; i < 10;i++)
	{
		a[i];
		b[i];
		c[i] = i +65;//can store int type into char array!!
		k[i] = i +0xf4f5;

	}
	//index i is greater num of index of arrays
	for(i = 0; i < 12 ; i++)
	{
		std::cout << k[i];
		std::cout << "\n";
		std::cout << c[i];
		b[i] = a[i];
		std::cout <<"\n";		
	}
	std::cout << "to terminate, entry a number";
	std::cin >> i;
	return 0;
}//main 

