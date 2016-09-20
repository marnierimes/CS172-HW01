//
//Marnie Rimes
//HW01 ex05
//

#include<iostream>
using namespace std;


//function from part c
int function(int array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i];

	}

}

int main()
{
	//part a
	const int arraySize = 5;
	int array[arraySize];
	//asks user to enter 5 integers
	cout << "Enter " << arraySize << " integers ";
	for (int i = 0; i < arraySize; i++)
	{
		cin >> array[i];
	}

	//part b
	int sum = 0;
	int product = 1;
	for (int i = 0; i < arraySize; i++)
	{
		//calculates sum of the integers in the array
		sum += array[i];
		//calculates the products of the integers in the array
		product *= array[i];
	}
	//outputs the sum and the product
	cout << "The sum of the integers is " << sum << endl;
	cout << "The product of the integers is " << product << endl;

	//part c
	int x = function(array[arraySize], arraySize)
	

	return 0;
}

