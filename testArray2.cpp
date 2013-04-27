//test array program with cpp 


# include "stdafx.h"
# include <iostream>
# include <wchar.h>

using namespace std;

int a[10];
int b[1000];
char c [10];
wchar_t k[10];

int main(int argc, _TCHAR*argv[])
{
	int i;
 	cout << "test Array";
	for(i =0; i < 10;i++)
	{
		a[i];
		b[i];
		c[i] = i +65;//can store int type into char array!!
		k[i] = i + oxf4f5;

	}
	//index i is greater num of index of arrays
	for(i = 0; i < 12 ; i++)
	{
		cout << c[i];
		b[i] = a[i];
		printf("\n");
	}
	
	cin >> i;
	return 0;

}//main 
