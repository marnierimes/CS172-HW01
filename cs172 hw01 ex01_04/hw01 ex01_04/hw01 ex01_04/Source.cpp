//
//Marnie Rimes
//HW01 ex05
//

#include<iostream>
using namespace std;


//function from part c
//takes array and the size of the array
void printArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//outputs values in the array
		cout << array[i] << endl;

	}

}

//function from part d
//takes array and size of the array
void arrayValue(int array[], int size)
{
	//asks user to enter value
	cout << "Enter a value ";
	int value;
	cin >> value;
	for (int i = 0; i < size; i++)
	{
		//checks if the value is in the array
		if (value != array[i])
		{
			
		}
		else
			cout << "The array contains this value!\n";
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
		//loops until user has entered 5 integers
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
	//calls 'printArray function and passes the array and array size
	printArray(array, arraySize);
	
	//part d
	//calls function 'arrayValue' and passes the array and the array size
	arrayValue(array, arraySize);

	return 0;
}

