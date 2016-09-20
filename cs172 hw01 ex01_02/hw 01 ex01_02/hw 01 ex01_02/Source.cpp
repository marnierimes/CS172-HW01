//
//Marnie Rimes
//CS 172
//HW 01 ex03
//9-18-16
//

#include<iostream>
#include<string>

using namespace std;

int main()
{
	//part a
	//asks user to enter the area of a square
	int area;
	cout << "Enter the area of a square ";
	cin >> area;
	//calculates the diagonal length
	double diagonal = (sqrt(area) * sqrt(2));
	//outputs the value of the diagonal length
	cout << "The length of the diagonal for the square is "<< diagonal << endl;

	//part b
	//asks user to enter 'y' or 'n'
	cout << "Enter yes or no using 'y' or 'n' ";
	char response;
	cin >> response;
	//outputs "yes" or "no" depending on what the user entered
	if (response == 'y')
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	//part c
	//sets the char variable to the tab character
	char tab = 9;
	//outputs a tab
	cout << tab << "Tab!" << endl;

	//part d
	//asks user for mailing address
	string mailingAddress;
	cout << "Enter mailing address ";
	//user enters address
	cin >> mailingAddress;
	cout << mailingAddress;

	return 0;
}