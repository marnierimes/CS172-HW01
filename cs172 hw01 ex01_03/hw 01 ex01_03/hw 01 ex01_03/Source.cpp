//
//Marnie Rimes
//HW 01 ex04
//

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


//function from part e that doubles the number in part a
int function(int integer)
{
	//doubles passed integer and returns that result
	int result = (integer * 2);
	
	return result;
}

//function from part f that adds two random number together that were called
int add(int num1, int num2)
{
	//adds the two random numbers and returns that result
	int sum = (num1 + num2);

	return sum;
}

//function from part g that adds one to its parameter
int addsOne(int num)
{
	
}


int main()
{
	//part a
	//asks user to enter a number
	cout << "Enter a number between 1 and 10 ";
	int number;
	cin >> number;
	//loops until number between 1 and 10 is entered
	while (number > 10 || number < 1)
	{
		cout << "That is not a valid number, try again ";
		cin >> number;
	}
	cout << "Your number is " << number << endl;

	//part b
	//loops to find sum of cubes between one and the number entered earler
	int sum = 0;
	int i;
	for (i = 1; i <= number; i++)
	{
		sum += (i*i*i);
	}
	//outputs the sum
	cout << "The sum of the cubes from one to " << number << " is " << sum << endl;
	

	//part c
	int start = 0;
	//outputs number of asterisks
	do
	{
		cout << "*";
		start++;
	} while (start < number);
	cout << endl;

	//part d
	//loops from 0 to 40
	for (int j = 0; j <= 40; j++)
	{
		//checks if the number 'j' is an even number
		if (j % 2 == 0)
		{
			//outputs 'j' if its an even number
			cout << j << endl;
		}
	}

	//part e
	//calls function 'function'
	int value = function(number);
	//outputs number returned from 'function'
	cout << "The new number is " << value << endl;

	//part f
	//randomizes variables x and y
	srand(time(0));
	int x = rand() % 100;
	int y = rand() % 100;
	//calls function 'add' and passes the values of x and y
	int z = add(x, y);
	//outputs the sum calculated in the called function
	cout << "The sum of random numbers " << x << " and " << y << " is " << z << endl;

	//part g
	int a = addsOne(x);

	

	return 0;
}