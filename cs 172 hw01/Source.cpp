//
// Marnie Rimes
// HW-01 ex02
// 09-13-16
//

#include <iostream>

using namespace std;

int main()

{
	//part a
	//initialized variable to true
	int hasPassedTest = true;

	//part b
	//make random numbers!
	int x = 5;

	int y = 7;

	if (x > y) {

		cout << x << " is greater than " << y << endl;

	}

	else {

		cout << y << " is greater than " << x << endl;

	}

	//part c
	//if entered number of shares is less than 100
	int numberOfShares;

	cout << "Enter number of shares ";

	cin >> numberOfShares;

	if (numberOfShares <= 100) {

		cout << "This value is less than or equal to 100\n";

	}

	else {

		cout << "This value is greater than 100\n";

	}

	//part d
	//box width and book width
	int boxWidth, bookWidth;

	cout << "Enter width of box ";

	cin >> boxWidth;

	cout << "Enter width of book ";

	cin >> bookWidth;

	//box width divided by book width

	if (boxWidth % bookWidth == 0) {
		cout << "The box width is evenly divisible by the book width\n";
	}
	else {
		cout << "The box width is not evenly divisible by the book width\n";
	}

	//part e
	//entering shelf life and outside temp

	int shelfLife, tempOutside;
	cout << "Enter the shelf life of a box of chocolate ";
	cin >> shelfLife;
	cout << "Enter the outside temperature ";
	cin >> tempOutside;

	//output if the shelf life decreases
	if (tempOutside > 90) {
		shelfLife -= 4;
		cout << "It's too hot outside, the shelf life of the chocolate has decreased to " << shelfLife << endl;
	}

		return 0;

}
