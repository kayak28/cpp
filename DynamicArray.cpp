//dynamic array re-allocation program

#include <iostream>
using namespace std;

void resize(int arr[], const int &theSize) ;

int main()
{
	int size = 10;
	int* array = new int[10];

	for(int i = 0; i < size; i++)
	{
		array[i] = i;
	}

	resize(array, &size);
	for(int i = 0; i <size; i++)
	{
		cout << "array " << i << "is " 
			  << array[i] << "\n";
	}
	cout << "size is " << size << "\n"; 

	return 0;
}
void resize(int arr[], int &theSize)
{
	int* resizedArray = new int[theSize + 1];
	for(int i = 0; i < theSize; i++)
	{
		resizedArray[i] = arr[i] * arr[i];
	}
	theSize++;
	arr = resizedArray;
	delete[] resizedArray;
}